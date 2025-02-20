// Governor-Nephi Bakare, Name Decorator C
#include <stdio.h>
#include <string.h>

char name [1000];

int main(void){
    printf("What is your name, user? (only one word please): \n");
    scanf("%s", name);
    printf("Welcome to my program. I will be decorating your name! \n");
    
    
    char decor1 [] = ("$$$");
    char decor2 [] = ("@@@");

    strcat(decor1, name);
    strcat(decor1, decor2);
    printf("%s", decor1);
    return 0;
}