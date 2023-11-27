// Create array of 10 students(rollno, name, marks) and sort students by their marks.

#include<stdio.h>
#define SIZE 10

typedef struct stud
{
    char name[20];
    int rollno;
    float marks;
}stud;

int main(void)
{
    stud s[SIZE];
    printf("Student information : \n");
    for(int i=0; i<SIZE; i++)
    {
        printf("Enter student name, rollno and marks : ");
        scanf("%s %d %f", s[i].name, &s[i].rollno, &s[i].marks);
    }
    printf("Before sorted : \n");
    for(int i=0; i<SIZE; i++)
    {
        printf("%5s %4d %6.2f", s[i].name, s[i].rollno, s[i].marks);

        printf("\n");
    }
    for(int i=0; i<SIZE-1; i++)
    {
        for(int j=i+1; j<SIZE; j++)
        {
            if(s[i].marks > s[j].marks)
            {
                stud temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("After sorted : \n");
    for(int i=0; i<SIZE; i++)
    {
        printf("%5s %4d %6.2f", s[i].name, s[i].rollno, s[i].marks);

        printf("\n");
    }
    return 0;
}