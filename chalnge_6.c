#include <stdio.h>
#include <math.h>

int main (){

    int r;
    double Pi = 22/7 ;
    // the formulair for the circumference of the circle
    float C = (float) 2*Pi*r; 
    // asking the user 
    printf("please enter the radius 'r':");
    scanf("%d",&r);
    // the result 
    printf("the circumference of the circle is : %f",C);
    return 0;

}