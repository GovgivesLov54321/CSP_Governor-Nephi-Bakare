// Governor-Nephi Bakare, Loops Notes C
#include <stdio.h>


int main(void){
    //while loops
    int start = 0;
    while(start <5){
        printf("hello!\n");
        start++;
    }
    //for loops
    int q;
    for (q=0;q<5;q++){
        printf("%d\n", q);
    }

//8. How do you make lists in C?
    //Lists=Arrays in C
        //Arrays all need to be the same data type
    int grades[] = {88, 97, 100, 70, 72, 99, 61};
        //Step 1: set data type
        //Step 2: After naming, pyt brackets and writ the length of the list
        //Step 3: List surrounded by curly brackets {}
        //Step 4: Commas, between each item
//print a single item from a list
printf("CSP grade: %d\n", grades[1]);
//Change an item in the array
grades[1] = 95;
printf("CSP grade: %d\n", grades[1]);
//Size of list in bytes
int length = sizeof(grades);
printf("%d\n", length);
//length in list items
int length = sizeof(grades)/sizeof(grades[0]);
printf("The array is %d long\n", length);
//arary with strings
char movies[][55] = {"Cars", "Treasure Planet", "An American Tale", "Marley and Me", "The Avengers"};
printf("The movie is %s!\n", movies[1]);

int mlength = sizeof(movies)/sizeof(movies[0]);

//9. How do you make for loops in C?
int x;
//in parens *(starting point; ending point; what we're counting by)
for(x=0;x<=10;x+=2){
    printf("%d\n", x);
};
int m;
for(m=0;m<mlength;m++){
    
};
//10. How do you make while loops in C?
    return 0;
}