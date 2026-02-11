#include <stdio.h>

int main()
{
    // declaring variables
    char name[50];
    int roll_no;
    char section[10];
    int semester;
    char college[100];

    // taking input from user
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter Section: ");
    scanf("%s", section);

    printf("Enter Semester: ");
    scanf("%d", &semester);

    printf("Enter College Name: ");
    scanf(" %[^\n]", college);

    // displaying output
    printf("\n----- Student Details -----\n");
    printf("Name      : %s\n", name);
    printf("Roll No   : %d\n", roll_no);
    printf("Section   : %s\n", section);
    printf("Semester  : %d\n", semester);
    printf("College   : %s\n", college);

    return 0;
}