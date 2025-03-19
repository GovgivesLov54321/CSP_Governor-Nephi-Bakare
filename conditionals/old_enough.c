// Governor-Nephi Bakare
#include <stdio.h>
#include <string.h>

int age;

int main(void){
    printf("Welcome to my program, User!\n");
    
    printf("How old are you?\n");
    scanf("%d", &age);
    if (age >= 18){
        printf("You're old enough to vote in the USA!");
    }
        else if (age >= 16){
        printf("You're old enough to get your driver's license in the USA!\n");
        }
        else if (age >= 15){
        printf("You're old enough to get your learner's permit in Utah!\n");
        }
        else if (age >= 4){
        printf("You're old enough to go to school in the USA!");
        }
        else{
            printf("You can't do anything! :P\n");
        }
    return 0;
}