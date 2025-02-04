// Governor-Nephi Bakare, Variables Practice C
#include <stdio.h>

char name[30] = "Governor-Nephi Bakare";

int age = 14;

int small_number = 6;

int big_number = 155;

char breakfast[20] = "nothing";

char color[10] = "blue";

char school_name[55] = "Utah County Academy of Sciences (UCAS)";

int current_year = 2025;

char eye_color[20]= "dark brown";

char favorite_subject[35]= "physical education (PE)";

int main(void){
    printf("Hello! I am %s.\n", name);
    printf("I am %d years old.\n", age);
    printf("I chose the number %d (between 1 and 10), and the number %d (between 100).\n", small_number, big_number);
    printf("Today for breakfast, I ate %s. \n", breakfast);
    printf("My favorite color is %s. \n", color);
    printf("The year is currently %d, and I go to %s. \n", current_year, school_name);
    printf("The color of my eyes are %s. \n", eye_color);
    printf("My favorite subject has always either been basketball class or %s. \n", favorite_subject);
}