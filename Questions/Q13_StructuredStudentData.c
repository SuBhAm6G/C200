// The task is to create a function called  in C that enables the user to fill an array of student records. The function should prompt the user repeatedly to input each student's roll number and name. Input should stop when the roll number entered is 0. Each student's details, including roll number and name, must be stored in the  array, where each record is defined by the  structure. The function should also return the total number of students entered. Special care should be taken to handle edge cases, such as ensuring proper handling of multi-word names and preventing memory issues during array population.
#include <stdio.h>
#include <stdlib.h>

typedef struct studentData
{
    int roll;
    char name[20];
}student;


int DataEntry(student stud[]){
    int count=0,rollNo;
    for (int i = 0; ; i++)
    {   
        printf("Enter roll number (0 to stop): ");
        scanf("%d", &rollNo);
        if (rollNo==0)
        {
            break;
        }
        else{
        stud[i].roll=rollNo;
        }
        getchar();
        printf("Enter name: ");
        
        scanf("%[^\n]", stud[i].name);
        
        count++;
    }

    return count;
    
}

int main() {
    student stud[10];
    int totalStudents = DataEntry(stud);
    printf("Total number of students entered: %d\n", totalStudents);
    return 0;
}