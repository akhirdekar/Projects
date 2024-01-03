#include <stdio.h>
#include <ctype.h> //this import contains many string functions

int main(){

    char unit; //will be C for Celcius or F for Fahrenheit
    float temp; //temperature
    char convertTo; //user's choice during conversions

    printf("\nIs the temperature in Fahrenheit (F), Celcius (C), or Kelvin (K)? Enter the appropriate letter: ");
    scanf(" %c", &unit);
    unit = toupper(unit); //C programs are case sensitive. If the user types if lowercase 'c' or lowercase 'f', you will not get the intended output. 
                            // to avoid this, you can set the conditions in the if statement to lowercase charachters or use the "toupper" function to check for lowercase C or c or F or F.

    if(unit == 'C'){
        printf("The temperature is currently in Celcius.");
        printf("\nEnter the temperature in Celcius: ");
        scanf("%f", &temp); //always have an address specifier, &, for user input

        printf("\nWould you like to convert to F or K?: ");
        scanf(" %c", &convertTo);
        convertTo = toupper(convertTo);

        if(convertTo == 'F'){
            temp = (temp * 9/5) + 32; //converts from Celcius to Fahrenheit
            printf("\nThe temperature in Fahrenheit is %.1f", temp); //recall the .1 means decimal rounds to tenths place, only displays 1 decimal place                                        
        }
        else if(convertTo == 'K'){
            temp = (temp + 273.15);
            printf("\nThe temperature in Kelvin is %.3f", temp);
        }
        else{
            printf("That is not a valid unit!");
        }   
    }
    else if (unit == 'F'){
        printf("The temperature is currently in Fahrenheit.");
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp);

        printf("\nWould you like to convert to Celsius (C) or Kelvin (K)? ");
        scanf(" %c", &convertTo);
        convertTo = toupper(convertTo);

        if (convertTo == 'C') {
            temp = (temp - 32) * 5 / 9;
            printf("\nThe temperature in Celsius is %.1f", temp);
        }
        else if (convertTo == 'K') {
            temp = (temp - 32) * 5 / 9 + 273.15;
            printf("\nThe temperature in Kelvin is %.3f", temp);
        }
        else {
            printf("\nInvalid unit entered.");
        }
    }

    else if(unit == 'K'){
        printf("The temperature is currently in Kelvin.");
        printf("\nEnter the temperature in Kelvin: ");
        scanf("%f", &temp);

        printf("\nWould you like to convert to Fahrenheit (F) or Celsius (C)? ");
        scanf(" %c", &convertTo);
        convertTo = toupper(convertTo);

        if (convertTo == 'F') {
            temp = (temp - 273.15) * 9/5 + 32;
            printf("\nThe temperature in Fahrenheit is %.1f", temp);
        }
        else if (convertTo == 'C') {
            temp = temp - 273.15;
            printf("\nThe temperature in Celsius is %.1f", temp);
        }
        else {
            printf("\nInvalid unit entered.");
        }
    }

    else {
        printf("\n %c is not a valid unit of temperature", unit);

    }
    
    return 0;

}