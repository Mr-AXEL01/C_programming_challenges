#include <stdio.h>

int main (){
// askin the user to enter the values
    int a , b ;
    printf("enter the value of 'a' : ");
    scanf("%d",&a);
    printf("enter the value of 'b' : ");
    scanf("%d",&b);

// calculation
    int sum = a + b ;
    int difference = a-b ;
    int product = a * b ;
    float quotient = (float) a / b ;
    int restOfDevision = a % b ;

// printing the result of the calculation
    printf ("\n RESULTD \n");
    printf("(a + b ) =%d\n", sum);
    printf("(a - b ) =%d\n", difference);
    printf("(a * b ) =%d\n", product);
    printf("(a / b) =%f\n", quotient);
    printf("(a %% b ) = %d\n", restOfDevision);
    return 0 ;
}