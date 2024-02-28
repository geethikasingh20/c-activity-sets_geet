//2. Write a C program to add two numbers.
#include <stdio.h>
#include<stdlib.h>
//#include <stdarg.h>


//simpler version for students to start with
int main()
{
    
float num1,num2,result;
printf("Enter the first number to be added");
scanf("%f",&num1);

printf("Enter the second number to be added");
scanf("%f",&num2);

result = num1+num2;
printf("The result after addition is %f",result);

return 0;
}

//Below snippet is improved version and has some validations
/*
//function to read numbers
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


//function to add varying number of inputs
float addVarNumbers(int num,...){
    printf("inside var fn");
    int a;
    float sum=0;
    va_list args;

    va_start(args, num);

    for (int i = 0; i < num; i++)
    {
        sum=sum+(va_arg(args,int));
    }

    printf("Sum %f",sum);

    va_end(args);

}

int main()
{ 
float num1,num2;
readNumbers(&num1,&num2);
displayResult(addNumbers(num1,num2));

//addVarNumbers(3,4,2,8);

return 0;
}
*/
