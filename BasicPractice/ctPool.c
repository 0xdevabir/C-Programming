#include<stdio.h>
int main()
{   printf("\n");

    int i, Year=4, Month=(Year*12);
    float  Coin=20;
    
    for(i=1;i<=Month;i++){
        Coin += (Coin*0.08)+20;
        printf("Total Coin in %d Month: %f \n", i, Coin);
    }
    // printf("Total Coin is: %f \n", Coin);

    return 0;
}