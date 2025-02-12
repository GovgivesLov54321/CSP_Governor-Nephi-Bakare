// Governor-Nephi Bakare, First Program C
#include <stdio.h>

char mother_country[1000];
char father_country[1000];
char user_country[1000];


int main(void){
    printf("What country was your mother born in?: \n");
    scanf("%s", mother_country);
    printf("That's cool! What country was your father born in?: \n");
    scanf("%s", father_country);
    printf("That sounds like a cool place to visit! What country were you born in?: \n");
    scanf("%s", user_country);
    printf("So your mother was born in %s, your father in %s, and you in %s.", mother_country, father_country, user_country);

    return 0;
}