//Program to perform comparison among 3 numbers
#include<stdio.h>
#include<stdlib.h>

float num1,num2,num3;

void readNumbers(){
    printf("Enter the first number");
    if(!scanf("%f",&num1))
        {   
            printf("Please enter a valid number");
            exit(1);
        }       
    printf("Enter the second number");
    if(!scanf("%f",&num2))
        {
          printf("Please enter a valid number");
          exit(1);
        }  
    printf("Enter the third number");
    if(!scanf("%f",&num3))
        {
          printf("Please enter a valid number");
          exit(1);
        }       
}

float performComparison(float num1,float num2,float num3){
    //can add a verification also to ensure if entered values are distinct
    //individually compare every number with the other three
    if(num1 > num2 && num1 > num3)
        {
            return num1;
        }
    
    else if(num2 > num1 && num2 > num3)
        {
            return num2;
        }
    else if(num3 > num1 && num3 > num2)
        {
            return num3;
        }
    else 
        {
            printf("Two or more values are same. Enter different numbers");
            exit(1);
        }
}

float performComparisonTernary(float num1,float num2,float num3 ){

   return (num1>num2)? (num1>num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

}

void displayResult(float num1,float num2,float num3,float largest)
{
    printf("The largest among %f,%f and %f is %f\n",num1,num2,num3,largest);
}
int main()
{ 
readNumbers();
displayResult(num1,num2,num3,performComparison(num1,num2,num3));

//compare using ternery operator
displayResult(num1,num2,num3,performComparisonTernary(num1,num2,num3));

return 0;
}
