// Governor-Nephi Bakare, Financial Calculator Update C
#include <stdio.h>
#include <math.h>

float user_input(char*pregunta){
    float value;
    printf("%s", pregunta);
    scanf("%f", &value);
    return value;
}
void print_result(char*item_name, float numero, float income){
    float percentage = (numero/income)*100;
    printf("Your monthly %s is $%.2f which is %.2f%% of your income!\n", item_name, numero, percentage);
}
int main(void){ 
    printf("Hello! What is your name? (please only answer with one word): \n");
    scanf("%s", name);
    printf("Welcome to my program, %s! This program will calculate the percentage of your spendings of your income. \n", name);
    
    float income, rent, utilities, groceries, transportation, savings, spendings;

    income = user_input("What is your income?: \n");
    rent = user_input("What is your rent?: \n");
    utilities = user_input("How much do your utilities cost?: \n");
    groceries = user_input("How much do your groceries cost?: \n");
    transportation = user_input("How much does transportation cost (gas, bus pass, Lyft, etc.)?: \n");
    
    savings = income*0.1;
    spendings = income-savings-rent-utilities-groceries-transportation;

    print_result("rent", rent, income);
    print_result("utilities", utilities, income);
    print_result("groceries", groceries, income);
    print_result("transportation", transportation, income);
    print_result("savings", savings, income);
    print_result("spendings", spendings, income);
    
    return 0;
}