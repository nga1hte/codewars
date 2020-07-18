#include <stdio.h>
#include <string.h>

struct myRec{
    char firstName[20];
    char lastName[20];
    int roll;
    int age;
};

int main(){
    struct myRec myDetail;
    printf("input first name: ");
    scanf("%s", &myDetail.firstName);
    printf("input last name: ");
    scanf("%s", &myDetail.lastName);
    printf("input roll: ");
    scanf("%d", &myDetail.roll);
    printf("input age: ");
    scanf("%d", &myDetail.age);
    char fullName[40];
    strcpy(fullName,myDetail.firstName);
    strcat(fullName,myDetail.lastName);
    printf("%s %d %d\n", fullName, myDetail.roll, myDetail.age);
    return 0;
}

