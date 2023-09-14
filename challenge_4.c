#include <stdio.h>

int main (){

    float a , b ,c ,d ;
    printf ("please enter the values of each character\n");
    printf("enter the value of a : ");
    scanf("%f",&a);
    printf("enter the value of b : ");  
    scanf("%f",&b);
    printf("enter the value of c : ");
    scanf("%f",&c);
    printf("enter the value of d : ");
    scanf("%f",&d);
    //the sum & moyenne 
    int sum = a+b+c+d;
    float moyenne = (float) (a+b+c+d)/4;
    // the result 
    printf ("\n\n");
    printf("the sum of the numbers that you choose is : %d\n", sum);
    printf("the average of the numbers that you choose is : %d", moyenne);
    return 0;
}
  