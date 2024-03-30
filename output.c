#include<stdio.h>
int main(){

    // Take input from users using "scanf" 
        
    /* 
    int number1,number2;
    scanf("%d %d", &number1, &number2);
    printf(" Number 1 = %d \n Number 2 = %d", number1,number2);
     */

   //-----------------------------------------------------

    // Take int float char type input from users 
   
   /* int number;
    char character;
    float floatingNumber;
    scanf("%d %c %f", &num,&character,&floatingNumber);
    printf("%d %c %0.2f",num,character,floatingNumber);
    */
//--------------------------------------------------------

    // Input => 10% 20%  Output => 10% 20%
    int num1, num2;
    char character1;
    // also user this line -->  1. 
    scanf("%d%% %d%%",&num1,&num2);
    //  2.
    scanf("%d%c %d%c",&num1,&character1,&num2,&character1);
    printf("%d%% %d%% ",num1,num2); 

//----------------------------------------

    // Input => 10x 20y  Output => 10x 20y
    int a, b; 
    scanf("%dx %dy",&a,&b);
    printf("%dx %dy",a,b);


}