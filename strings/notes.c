// Governor-Nephi Bakare, Strings Notes C#include <stdio.h>
#include <stdio.h>
#include <string.h>

//char subject[60];
//char name [20] = "Victoria";
//char sentence[100] = "The quick brown fox jumps over the lazy dog";

int main(void){
    //printf("What class are you in?\n");
    //fgets(subject, sizeof(subject), stdin);
    //scanf("%s", subject);
    //printf("You are in %s? That is a cool class", subject);
    //name[0] = 'T';
    //name[1] = 'o';
    //name[2] = 'r';
    //name[3] = 'i';
    //name[4] = ' ';
    //name[5] = ' ';
    //name[6] = ' ';
    //name[7] = ' ';
    //name[8] = ' ';
    //printf("%s", name);
    //printf("%lu\n", sizeof(sentence));
    //printf("%d\n", strlen(sentence));
    char one[] = "Hello";
    char two[] = "World!";
    char three[] = "Welcome to my program. ";
    printf("%s\n", one);
    strcat(one,two); 
    printf("%s\n", one);
    strcat(three, one); //can only concatenate two things at a time
    printf("%s\n", three);
    return 0;
}