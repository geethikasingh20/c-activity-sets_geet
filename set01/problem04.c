//Write a C program to add two numbers using pass by reference
#include <stdio.h>
#include<stdlib.h>

void readNumbers(float *num1,float *num2){
    printf("Enter the first number to be added");
    if(!scanf("%f",num1))
        {   
            printf("Please enter a valid number");
            exit(1);
        }
    printf("Enter the second number to be added");
    if(!scanf("%f",num2))
        {
          printf("Please enter a valid number");
          exit(1);
        }       
}

//function to add numbers
float addNumbers(float num1,float num2){
    return num1+num2;   
}



//function to display the result
void displayResult(float result)
{
    printf("The result is %f\n",result);
}


int main()
{ 
float num1,num2;
readNumbers(&num1,&num2);
displayResult(addNumbers(num1,num2));

return 0;
}