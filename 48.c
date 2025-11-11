#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    int age;
    char address[100];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[10];
    int i, searchID, found = 0;

    printf("Enter details of 10 employees:\n");

    for(i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Age: ");
        scanf("%d", &emp[i].age);

        printf("Enter Address: ");
        scanf("%s", emp[i].address);

        printf("Enter Department: ");
        scanf("%s", emp[i].department);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 10; i++) {
        if(emp[i].id == searchID) {
            found = 1;
            printf("\nEmployee Details:\n");
            printf("ID: %d\n", emp[i].id);
            printf("Name: %s\n", emp[i].name);
            printf("Age: %d\n", emp[i].age);
            printf("Address: %s\n", emp[i].address);
            printf("Department: %s\n", emp[i].department);
            printf("Salary: %.2f\n", emp[i].salary);
            break;
        }
    }

    if(found == 0)
        printf("Employee with ID %d not found.\n", searchID);

    return 0;
}

