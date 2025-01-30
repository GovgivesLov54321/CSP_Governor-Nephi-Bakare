#include <stdio.h>

char name[] = "Governor";
int age = 14;
float pi = 69.69;

int main(void){
    printf("Hello I am %s. I am %d years old. I like to mew all day and all night\n", name, age, pi);
    printf("%d\n", age);
    printf("%f\n", pi);
    return 0;
}