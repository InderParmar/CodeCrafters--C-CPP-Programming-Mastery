//==============================================
// Name:           Miguel Watler
// Student Number: 1234567890
// Email:          miguel.watler@senecacollege.ca
// Section:        XXY
// Workshop:       3
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "Employee.h"
// Define Number of Employees "SIZE" to be 4

const int SIZE = 4;

/* main program */
int main(void)
{
    // Declare a struct Employee array "emp" with SIZE elements
    // and initialize all elements to zero
    struct Employee emp[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        emp[i].id = 0;
        emp[i].age = 0;
        emp[i].salary = 0.00;
    }
    int option;

    // Add any local auxiliary variables
    printf("---=== EMPLOYEE DATA ===---\n\n");

    do
    {
        // Print the option list
        printf("\n");

        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n ");
        printf("3. Update Employee Salary\n");
        printf("4. Remove Employee \n");
        printf("0. Exit\n");
        printf("Please select from the above options:");
        // Capture input to option variable
        scanf("%d", &option);
        switch (option)
        {
        case 0: // Exit the program

            break;

        case 1: // Display Employee Data

            printf("EMP ID  EMP AGE EMP SALARY\n");
            printf("======  ======= ==========\n");
            // Use "%6d%9d%11.2lf" formatting in a
            // printf statement to display
            // employee id, age and salary of
            // all  employees using a loop construct

            // The loop construct will be run for SIZE times
            // and will only display Employee data
            // where the EmployeeID is > 0
            for (int i = 0; i < SIZE; i++)
            {
                if (emp[i].id > 0)
                {
                    printf("%6d%9d%11.2lf", emp[i].id, emp[i].age, emp[i].salary);
                    printf("\n");
                }
            }

            break;

        case 2: // Adding Employee

            printf("Adding Employee\n");
            printf("===============\n");
            int flag = 0;
            for (int i = 0; i < SIZE; i++)
            {
                if (emp[i].id == 0)
                {
                    flag = 1;
                    printf("Enter Employee ID:");
                    scanf("%d", &emp[i].id);

                    printf("Enter Employee AGE:");
                    scanf("%d", &emp[i].age);

                    printf("Enter Employee Salary:");
                    scanf("%lf", &emp[i].salary);
                    break;
                }
            }
            if (flag == 0)
            printf("ERROR!!! Maximum Number of Employees Reached");

            // Look for an open spot in the array (where id==0)
            // Check for limits on the array

            // If an open spot exists, prompt the user for data

            // If not, print an error message: "ERROR!!! Maximum Number of Employees Reached"
            break;

        case 3: // Update Employee salary
            printf("Update Employee Salary\n");
            printf("======================\n");
            flag = 0;

            while (flag == 0)
            {
                printf("Enter Employee ID:");
                int id_to_update_salary;
                scanf("%d", &id_to_update_salary);
                for (int i = 0; i < SIZE; i++)
                {
                    if (emp[i].id == id_to_update_salary)
                    {
                        flag = 1;
                        printf("The current salary is %.2lf \n", emp[i].salary);
                        printf("Enter Employee New Salary:");
                        scanf("%lf", &emp[i].salary);
                    }
                }
                if (flag == 0)
                    printf("*** ERROR: Employee ID not found! ***\n");
            }
            // Prompt the user for the employee's id and search for the employee by id

            // If the employee is not found, print an error message: "*** ERROR: Employee ID not found! ***"

            // If the employee is found, prompt the user for the new salary
            break;

        case 4: // Remove Employee
            printf("Remove Employee\n");
            printf("===============\n");
            // Prompt the user for the employee's id and search for the employee by id
            flag = 0;

            while (flag == 0)
            {
                printf("Enter Employee ID:");
                int id_to_remove_employee;
                scanf("%d", &id_to_remove_employee);
                for (int i = 0; i < SIZE; i++)
                {
                    if (emp[i].id == id_to_remove_employee)
                    {
                        flag = 1;
                        printf("Employee %d will be removed\n", emp[i].id);
                        emp[i].id = 0;
                        emp[i].age = 0;
                        emp[i].salary = 0.00;
                    }
                }
                if (flag == 0)
                    printf("*** ERROR: Employee ID not found! ***\n");
            }
            // If the employee is not found, print an error message: "*** ERROR: Employee ID not found! ***"

            // If the employee is found, remove the employee by setting the employee's id to 0
            break;

        default:
            printf("ERROR: Incorrect Option: Try Again\n\n");
        }

    } while (option != 0);
    printf("Exiting Employee Data Program. Good Bye!!!\n");

    return 0;
}

// SAMPLE PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---
1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 5
ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 1
EMP ID  EMP AGE EMP SALARY
======  ======= ==========

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 2
Adding Employee
===============
Enter Employee ID: 222
Enter Employee Age: 22
Enter Employee Salary: 22222.22

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 2
Adding Employee
===============
Enter Employee ID: 333
Enter Employee Age: 33
Enter Employee Salary: 33333.33

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 2
Adding Employee
===============
Enter Employee ID: 444
Enter Employee Age: 44
Enter Employee Salary: 44444.44

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 2
Adding Employee
===============
Enter Employee ID: 555
Enter Employee Age: 55
Enter Employee Salary: 55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 2
Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 1
EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   33333.33
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 3
Update Employee Salary
======================
Enter Employee ID: 123
*** ERROR: Employee ID not found! ***
Enter Employee ID: 321
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
The current salary is 33333.33
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 1
EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   99999.99
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 4
Remove Employee
===============
Enter Employee ID: 789
*** ERROR: Employee ID not found! ***
Enter Employee ID: 987
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
Employee 333 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 1
EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 2
Adding Employee
===============
Enter Employee ID: 666
Enter Employee Age: 66
Enter Employee Salary: 66666.66

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 1
EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
666       66   66666.66
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit
Please select from the above options: 0
Exiting Employee Data Program. Good Bye!!!
*/