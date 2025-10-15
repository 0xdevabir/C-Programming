#include<stdio.h>
int main(){
    printf("\n");



    int N=5;
    int ara[N];
    int Max=ara[0], sum=0, i;

    for ( i = 1; i <= N; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &ara[i]);
    }

    for ( i = 1; i <= N; i++)
    {
        if(Max<ara[i]){
            Max = ara[i];
            printf("Current max is: %d \n", Max);
        }
        sum += ara[i];
    }
    
    
    printf("Ultimate max num is: %d \n", Max);
    printf("And total sum of this number is: %d", sum);



    printf("\n");
    return 0;
}