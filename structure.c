#include <stdio.h>

struct student {
    char name[50];
    int roll;
    char faculty[50];
    char phone[20];
};

int main() {
    struct student s1, s2;

    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);  
    printf("Roll number: ");
    scanf("%d", &s1.roll);

    printf("Faculty: ");
    scanf("%s", s1.faculty);  
    printf("Phone number: ");
    scanf("%s", s1.phone);  

    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);   
    printf("Roll number: ");
    scanf("%d", &s2.roll);
 
    printf("Faculty: ");
    scanf("%s", s2.faculty);  
    printf("Phone number: ");
    scanf("%s", s2.phone);   

    printf("\nDetails of first student:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Faculty: %s\n", s1.faculty);
    printf("Phone number: %s\n", s1.phone);

    printf("\nDetails of second student:\n");
    printf("Name: %s\n", s2.name);
    printf("Roll number: %d\n", s2.roll);
    printf("Faculty: %s\n", s2.faculty);
    printf("Phone number: %s\n", s2.phone);

    return 0;
}
