#include <stdio.h>

int main()
 {
    char name;
    int age;
    printf("Program for age limit travelling by air\n");
    printf("Enter Your Name:");
    scanf("%s", &name);

    printf("Enter Your Age:");
    scanf("%d", &age);

    if(age < 4 ){
        printf("\nYou are not allowed to travel");
    } else {
        printf("\nYou are allowed to travel");
    }
    return 0;
}
