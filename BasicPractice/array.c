#include<stdio.h>
int main(){
    printf("\n");

    int N=5;
    int ara[N];
    int i;
    int sum=0;

        printf("How much money do you make over this %d days? \n", N);
    for(i=1;i<=N;i++){
        printf("Day %d:", i);
        scanf("%d", &ara[i]);
        sum += ara[i];
    }
    
        printf("Total money make over this %d days: %dtk", N, sum);


    printf("\n");
    return 0;
}