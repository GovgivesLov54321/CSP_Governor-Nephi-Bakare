// Governor-Nephi Bakare
#include <stdio.h>
#include <math.h>

int skibidi;

int main(void){
    for(skibidi+1;skibidi<=50;skibidi++){
        if (skibidi % 5 == 0 && skibidi % 3 == 0){
        printf("FizzBuzz\n");
    }
        else if (skibidi % 5 == 0){
        printf("Buzz\n");
    }
         else if (skibidi % 3 == 0){
        printf("Fizz\n");
    }  
    
        else{
        printf("%d\n", skibidi);
    }   
    }
}