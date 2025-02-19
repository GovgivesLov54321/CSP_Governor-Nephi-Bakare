// Governor-Nephi Bakare, Funtions Notes C
#include <stdio.h>

int num;
char name [1000], verb[1000];
void add(int numOne, int numTwo){
    //printf("%d\n", numOne + numTwo);
    //return numOne+numTwo;
}
void due(char assignment[75], char day[30]){
    printf("The %s assignment is due %s.\n", assignment, day);
}

int main(void){
    //printf("Please tell me a number:\n");
    //scanf("%d", num);
    //add(num, 10);
    //add(4,10);
    //add(4,10);
    //add(4,10);
    due("Functions Notes", "Today");
    due("Hello World Update", "Tomorrow");
    due("Financial Calculator", "Friday");
    return 0;
}