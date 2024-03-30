#include<stdio.h>
int main(){
    int sunny = 100;
    printf("Sunny = %d \n", sunny);
    /*
    %d = int 
    %c = char
    %f = float
    */

   int rahim = 50, karim = 60;
   printf("Rahim = %d \nKarim = %d \n", rahim,karim);
//-------------------------------------------------
    float floatNumber = 3.4567;
    printf("floating Number = %f \n",floatNumber);
    printf("floating Number = %0.1f \n",floatNumber);
    printf("floating Number = %0.3f \n",floatNumber);

//-------------------------------------------------
    char word = 'A';
    printf("Word = %c", word);
    return 0;
}