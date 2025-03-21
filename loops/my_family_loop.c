// Governor-Nephi Bakare
#include <stdio.h>

 char hermanitos[][1000] = {"Kehinde", "Taiwo", "Idowu"};

int main(void){
   int flength = sizeof(hermanitos)/sizeof(hermanitos[0]);
    
    int f;
    for (f=0;f<flength;f++){
        printf("Hello there, %s!\n", hermanitos[f]);
    }

    return 0;
}