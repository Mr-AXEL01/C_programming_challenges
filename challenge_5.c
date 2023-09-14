#include <stdio.h>
#include <math.h>
int main (){

    char A , B ;
    float x1 , y1 , x2 ,y2 ;
    
    printf("please enter the coordinates of the first point : \n");
    printf("start with x1 and then y1 : \n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("the second point : \n");
    scanf("%f", &x2);
    scanf("%2.f", &y2);
    double AB = (double) sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nthe distance AB : %lf" , AB );
    return 0;
}