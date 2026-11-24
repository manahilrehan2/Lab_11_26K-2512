
#include <stdio.h>

struct HospitalRecord
{
    int RecordID;
    char Ward[30];

    struct PatientInfo
    {
        int PatientID;
        char Name[50];
        int Age;
    } patient;
};

int main()
{
    struct HospitalRecord hospital1 = {
        501,
        "Emergency",
        {1001, "Ahmed", 45}
    };

    struct HospitalRecord *ptr;

    ptr = &hospital1;

    printf("Hospital Record\n");

    printf("\nRecord ID: %d", ptr->RecordID);
    printf("\nWard: %s", ptr->Ward);

    printf("\nPatient ID: %d",
           ptr->patient.PatientID);

    printf("\nPatient Name: %s",
           ptr->patient.Name);

    printf("\nPatient Age: %d",
           ptr->patient.Age);

    return 0;
}
