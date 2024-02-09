#include <stdio.h>
#include <math.h>

struct Point{
    float x;
    float y;
};

struct Point fetchPointCoordinates(){
    float x,y;
    struct Point p;

    printf("Enter the x co-ordinate for point");
    scanf("%f",&p.x);

    printf("Enter the y co-ordinate for point");
    scanf("%f",&p.y);

    return p;
}

void findDistance(struct Point p1, struct Point p2, float * result){

  *result= sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));

}

void main()
{
    struct Point p1,p2;
    float result;

    p1=fetchPointCoordinates();
    p2=fetchPointCoordinates();

    printf("you entered p1 co-ordinates as  %f %f\n", p1.x,p1.y);
    printf("you entered p2 co-ordinates as  %f %f\n", p2.x,p2.y);

    
    findDistance(p1,p2,&result);

    printf("\n Distance calculated as  %f\n", result);

}
