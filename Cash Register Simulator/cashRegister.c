//cashRegister.c - sample code for lab1
//
// 17 Dec 2023


#include <stdio.h>//include the standard C input/output library

int main() {
	int num_dollars;
	int num_quarters;
	int num_dimes; 
    int num_cents;
    float cost_item1;
    float cost_item2;
    float cost_item3;
	float total_cost;
    printf("Enter the cost of item 1: $");
	scanf("%f", &cost_item1);
  printf("Enter the cost of item 2: $");
	scanf("%f", &cost_item2);
  printf("Enter the cost of item 3: $");
	scanf("%f", &cost_item3);
	total_cost = cost_item1 + cost_item2 + cost_item3 ;
	printf("The total cost is $%.2f\n", total_cost);
	//To obtain <num_dollars>, you have to multiply the <total_cost> by 100, 
	//cast the result to an integer, then divide the result by 100.
	total_cost = total_cost * 100;
	int total_cost_int = (int) total_cost;
	num_dollars = total_cost_int / 100;
//To obtain <num_quarters>, you have to take the remainder of the above division and divide it by 25.
	int numq = total_cost_int %100;
	num_quarters = numq / 25;
//To obtain <num_dimes>, you have to take the remainder of the above division and divide it by 10.
	int num_d= numq %25;
	num_dimes = num_d / 10;
//To obtain <num_nickels>, you have to take the remainder of the above division and divide it by 5.
	int num_n = num_d %10;
	int num_nickels = num_n / 5;
//<num_pennies> is simply the remainder of the above division.
	 num_cents = num_n % 5;

    printf("You used %d dollars, %d quarters, %d dimes, %d nickels, and %d pennies.\n",
           num_dollars, num_quarters, num_dimes, num_nickels, num_cents);

	return 0;
}