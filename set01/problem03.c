//Write a C program to add two numbers using pass by value
#include<stdio.h>
#include<stdlib.h>

float num1,num2,result;


void readNumbers(){
    printf("Enter the first number to be added");
    if(!scanf("%f",&num1))
        {   
            printf("Please enter a valid number");
            exit(1);
        }       printf("Enter the second number to be added");
    if(!scanf("%f",&num2))
        {
          printf("Please enter a valid number");
          exit(1);
        }            
}

float addNumbers(float num1,float num2){
    return num1+num2;   
}

void displayResult(float num1,float num2,float result)
{
    printf("\nAddition result of %f and %f is  %f\n",num1,num2,result);
}

int main()
{
    readNumbers();
    printf("Entered numbers %f,%f",num1,num2);

    result=addNumbers(num1,num2);

    displayResult(num1,num2,result);    
    return 0;
}


