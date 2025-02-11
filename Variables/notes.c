// Governor-Nephi Bakare, Variables Notes C
#include <stdio.h>

char name[50];
int age;
char hobby[100];

int main(void){
    printf("Hello, what is your name?: \n");
    scanf("%s", name);
    printf("How old are you?: \n");
    scanf("", age);
    printf("What do you like to do?: \n");
    scanf("%s", hobby);
    printf("You are %s, %d years old, and like to %s", name, age, hobby);
    return 0;
}