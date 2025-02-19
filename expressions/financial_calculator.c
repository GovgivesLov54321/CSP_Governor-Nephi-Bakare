// Governor-Nephi Bakare, Financial Calculator C
#include <stdio.h>
#include <math.h>

char name [1000];
float income, rent, utilities, groceries, transportation; 
int main(void){
    printf("Hello! What is your name? (please only answer with one word): \n");
    scanf("%s", name);
    printf("Welcome to my program, %s! This program will calculate the percentage of your spendings of your income. \n", name);
    
    printf("What is your income?: \n");
    scanf("%f", &income);
    printf("What is your rent?: \n");
    scanf("%f", &rent);
    printf("How much do your utilities cost?: \n");
    scanf("%f", &utilities);
    printf("How much do your groceries cost?: \n");
    scanf("%f", &groceries);
    printf("How much does transportation cost (gas, bus pass, Lyft, etc.)?: \n");
    scanf("%f", &transportation);
    
    float savings = income*.1;
    float spendings = income-savings-rent-utilities-groceries-transportation;
    float rent_percentage = rent/income*100;
    float utilities_percentage = utilities/income*100;
    float groceries_percentage = groceries/income*100;
    float transportation_percentage = transportation/income*100;
    float spendings_percentage = spendings/income*100;
    float savings_percentage = savings/income*100;

    printf("Your rent is $%.2f, which is %.2f percent of your income. \n", rent, rent_percentage);
    printf("Your utilities is $%.2f, which is %.2f percent of your income. \n", utilities, utilities_percentage);
    printf("Your groceries is $%.2f, which is %.2f percent of your income. \n", groceries, groceries_percentage);
    printf("Your transportation is $%.2f, which is %.2f percent of your income. \n", transportation, transportation_percentage);
    printf("Your spendings are $%.2f, which is %.2f percent of income. \n", spendings, spendings_percentage);
    printf("Your savings are $%.2f, which is %.2f percent of your income. \n", savings, savings_percentage);
    
    return 0;
}