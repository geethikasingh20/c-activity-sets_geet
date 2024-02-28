//Program to print name
#include <stdio.h>
#include<stdlib.h>

/* method to check if the entered length is non zero and not -ve ; can be added for valid digits also*/
void validateMetric(int unit){

    if(unit==0 || unit<0) 
    {
        printf("\nPlease put a realistic number; can not be 0 or -ve\n");
        exit(1);
    }
}

//method to display the name
void displayName(char * nameptr){
    printf("The name entered is :  %s",nameptr);

    //free the memory allocated
    free(nameptr);
}

//method to read name
char * readName(){
    char* nameptr;
    int length;
    printf("Enter the length of your name");
    if(scanf("%d",&length))
        {
            //printf("it is a number");
            validateMetric(length);
        }
    else 
        {
        // printf("not a number");
            exit(1);
        }


    nameptr=(char*) malloc(length * sizeof(char));

    if(nameptr==NULL){
        printf("Could not allocate memory!");
    }
    else{
        //clear the buffer
        while ((getchar()) != '\n');
        printf("Enter name: ");
        gets(nameptr);    
        return nameptr;
    }
}

int main()
{
 
char * nameptr;

nameptr=readName();
displayName(nameptr);

return 0;
}
