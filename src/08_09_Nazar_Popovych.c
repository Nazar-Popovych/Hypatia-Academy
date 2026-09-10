#include <stdio.h> 

int main(void) {

    printf("Please write how many grades you want to enter: \n");

    int num_grades;

    scanf("%d", &num_grades);

    printf("Please write your %d grades from 1 to 5: \n", num_grades); 


    int total = 0; 

    for (int i = 1; i <= num_grades; i++) { 

        int grade;

        printf("Please write the grade: \n");
        scanf("%d", &grade); 

        if (grade < 1 || grade > 5) { 
            printf("Please write a valid grade from 1 to 5: \n");
            i--;
            continue;
        } 

        switch (grade) { 
            case 5: 
                printf("5 - Excellent\n");
                total += grade;
                break;

            case 4:
                printf("4 - Good\n");
                total += grade;
                break;

            case 3:
                printf("3 - Satisfactory\n");
                total += grade;
                break; 

            case 2:
                printf("2 - Unsatisfactory\n");
                total += grade;
                break;

            case 1:
                printf("1 - Unsatisfactory\n");
                total += grade;
                break;
        }
    }

    printf("The total of your grades is: %d\n", total);
    printf("The average of your grades is: %.2f\n", (float)total / num_grades);

}