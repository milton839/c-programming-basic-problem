#include <stdio.h>

typedef struct Driver
{
    char name[50];
    int age;
    char licenseNumber[20];
} Driver;

int main()
{
    Driver driver1, driver2;

    printf("Enter details for Driver 1:\n");
    scanf("%s", driver1.name);
    scanf("%d", &driver1.age);
    scanf("%s", driver1.licenseNumber);

    printf("Enter details for Driver 2:\n");
    scanf("%s", driver2.name);
    scanf("%d", &driver2.age);
    scanf("%s", driver2.licenseNumber);

    printf("\nDriver 1 Details:\n");
    printf("Name: %s\n", driver1.name);
    printf("Age: %d\n", driver1.age);
    printf("License Number: %s\n", driver1.licenseNumber);

    printf("\nDriver 2 Details:\n");
    printf("Name: %s\n", driver2.name);
    printf("Age: %d\n", driver2.age);
    printf("License Number: %s\n", driver2.licenseNumber);
    return 0;
}