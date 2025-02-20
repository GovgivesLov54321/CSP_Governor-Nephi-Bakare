// Governor-Nephi Bakare, Silly Sentences C
#include <stdio.h>
// empty string variables for use words (minimum 3)
char character[100];
char location[100]

int main(void){
    // A welcome for the user telling them what the program is (print)
    printf("Welcome to my program. This program will use words given by you to make a silly sentence.\n");

    //ask user for words (print statement with a question scanf to set to a variable) (in C we need to tell the user that they can only type one word)
     printf("What is your favorite Disney character? (one word only please):\n");
     scanf("%s", character);
     printf("Type in the most random place you can think of. (one word only please):");
    // print out the story with the variables inserted ("welcome %s to my program", variable) 
    return 0;
}