//Function of area of a circle
#include<stdio.h>
#define pi 3.142
int area(int r);
int main()
{
    int a,area;
    printf("enter value of a:");
    scanf("%d",&a);
    area=pi*a*a;
    printf("the area is %d",area);
    return 0;
}
//Function definition
int area(int a)
{
    int area;
    area=pi*a;
    printf(area);
}
