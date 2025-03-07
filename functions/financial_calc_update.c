// Governor-Nephi Bakare, Financial Calculator Update C
#include <stdio.h>
#include <math.h>

char name [1000];
float user_input(char*pregunta){
    float value;
    printfi("%s", pregunta);
    scnaf("%f", &value);
    return value;
}
void print_result(char*item_name, float numero, float income){
    float percentage = (numero/income)*100;
    printf("Your monthly %s is $%.2f which is %.2f%% of your income!\n", item_name, numero, income);
}
int main(void){
    float income, rent, utilities, groceries, transportation, savings, spendings; 
    printf("Hello! What is your name? (please only answer with one word): \n");
    scanf("%s", name);
    printf("Welcome to my program, %s! This program will calculate the percentage of your spendings of your income. \n", name);
    income = userinput("What is your income?: \n");
    rent = userinput("What is your rent?: \n");
    utilities = userinput("How much do your utilities cost?: \n");
    groceries = userinput("How much do your groceries cost?: \n");
    transportation = userinput("How much does transportation cost (gas, bus pass, Lyft, etc.)?: \n");
    savings = income*.1;
    spendings = income-savings-rent-utilities-groceries-transportation;

    print_result("rent", rent, income);
    
    return 0;
}