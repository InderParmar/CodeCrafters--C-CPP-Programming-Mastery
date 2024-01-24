//StudentMain.c - main function for student information

#include <stdio.h>
#include "StudentInfo.c"

int main(void) {
    struct StudentInfo student;
    int numSubjects;

    InitializeInfo(&student);
    printf("Enter the student's last name: ");
    scanf("%24s", student.lastName); // Assuming MAX_STR is 25
    printf("Enter the student's id: ");
    scanf("%d", &student.studentId);
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);
    for (int i = 0; i < numSubjects; ++i) {
        printf("Enter the name of subject %d: ", i + 1);
        scanf("%24s", student.subjects[i].name); // Assuming MAX_STR is 25 for subject name
        printf("Enter the mark for %s: ", student.subjects[i].name);
        scanf("%d", &student.subjects[i].mark);
    }
    float average = AverageMark(student.subjects);
    int maxIndex = MaximumMark(student.subjects);
    int minIndex = MinimumMark(student.subjects);

    printf("\n");
    printf("%s with id %d has an average mark of %.2f.\n", student.lastName, student.studentId, average);
    printf("%s's highest mark was %d in %s.\n", student.lastName, student.subjects[maxIndex].mark, student.subjects[maxIndex].name);
    printf("%s's lowest mark was %d in %s.\n", student.lastName, student.subjects[minIndex].mark, student.subjects[minIndex].name);

    return 0;
}
