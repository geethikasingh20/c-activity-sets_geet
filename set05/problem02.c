#include <stdio.h>
#include <math.h>
#include  <stdlib.h>
//#include <ctype.h>

#define PI 3.14

/* for non zero ; can be added for valid digits also*/
void validateMetric(float unit){

    if(unit==0 || unit<0) 
    {
        printf("please put a realistic number; can not be 0 or -ve\n");
        exit(1);
    }
}


void fetchCamelDetails(float * radius,float *height, float *length){
   
    printf("Enter the height of camel");
    scanf("%f",height);
    validateMetric(*height);

    printf("Enter the length of camel");
    scanf("%f",length);
    validateMetric(*length);

    printf("Enter the radius of stomach of camel");
    scanf("%f",radius);
    validateMetric(*radius);

    //for debug   
    //printf("you just entered details %f %f %f", * height, *length,* radius);
}

float calculateWeight(float radius,float height,float length)
{
    float weight;

    weight= PI * pow(radius,3) * sqrt(height * length);


    return weight;
}

void displayCamelWeight(float weight){

        printf("\n weight calculated as  %f kg", weight);
}

int main()
{
    //what is the unit of measurement
    //output in kg?
    float  height, radius, length;

    fetchCamelDetails(&radius,&height,&length);

    printf("\n you have entered height : %f length: %f radius: %f", height, length, radius);

    float weight=calculateWeight(radius,height,length);
    
    displayCamelWeight(weight);

    return 0;
}
