// Governor-Nephi Bakare, Name Decorator C
#include <stdio.h>

char name [1000];

int main(void){
    printf("What is your name, user? (only one word please): \n");
    scanf("%s", name);
    printf("Welcome to my program. I will be decorating your name! \n");
    
    
    char decor1 [20] = ("$$$");
    char decor2 [20] = ("@@@");

    printf("%s%s%s", decor2, name, decor1);
    return 0;
}