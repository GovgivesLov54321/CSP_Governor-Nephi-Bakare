// Governor-Nephi Bakare, Variables Notes C
#include <stdio.h>

char name[15] = "Governor";
int age = 14;

int main(void){
    printf("Hello, what is your name: \n");
    scanf("%s", &name);
    printf("How old are you:");
    scanf("%d", &age);
    printf("What do you like to do:");
    scanf("I like to mew all day and all night");
    return 0;
}