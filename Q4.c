
#include <stdio.h>

struct Address
{
    char City[30];
    int ZipCode;
    char State[30];
};

struct Student
{
    int RollNo;
    char Name[50];
    float CGPA;

    struct Address studentAddress;
};

int main()
{
    struct Student student1 = {
        101,
        "Ali",
        3.75,
        {"Karachi", 75300, "Sindh"}
    };

    printf("Student Profile\n");

    printf("\nRoll Number: %d", student1.RollNo);
    printf("\nName: %s", student1.Name);
    printf("\nCGPA: %.2f", student1.CGPA);

    printf("\nCity: %s",
           student1.studentAddress.City);

    printf("\nZip Code: %d",
           student1.studentAddress.ZipCode);

    printf("\nState: %s",
           student1.studentAddress.State);

    return 0;
}
