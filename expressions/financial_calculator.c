// Governor-Nephi Bakare, Financial Calculator C
#include <stdio.h>
#include <math.h>

char name [1000];
float income, rent, utilities, groceries, transportation; 
int main(void){
    printf("Hello! What is your name?: \n");
    scanf("%s", name);
    printf("Welcome to my program, %s! This program will calculate percentage of your spendings of your income. \n", name);
    
    printf("What is your income?: \n");
    scanf("%f", income);
    printf("What is your rent?: \n");
    scanf("%f", rent);
    printf("How much do your utilities cost?: \n");
    scanf("%f", utilities);
    printf("How much do your groceries cost?: \n");
    scanf("%f", groceries);
    printf("How much does transportation cost (gas, bus pass, Lyft, etc.)?: \n");
    scanf("%f", transportation);
    
    float savings = income*.1;
    float spendings = income-savings-rent-utilities-groceries-transportation;
    float rent_percentage = income/rent*100;
    float utilities_percentage = utilities/income*100;
    float groceries_percentage = groceries/income*100;
    float transportation_percentage = transportation/income*100;
    float spending_percentage = spendings/income*100;
    float savings_percentage = savings/income*100;

    printf("Your rent is $ %f, which is %f percent of your income.");
    
    
    return 0;
}