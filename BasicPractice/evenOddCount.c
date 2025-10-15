#include<stdio.h>
int main()
{
    int N=5;
    int ara[N];
    int even=0, odd=0, i;


    for(i=1;i<=N;i++){
        scanf("%d", &ara[i]);
    }
    
    for(i=1;i<=N;i++){
        if(ara[i]%2 == 0){
            even ++;
        }else{odd++;}
    }

    printf("Out of %d numbers total even number is: %d\n", N, even);
    printf("Out of %d numbers total odd number is: %d", N, odd);

    return 0;
}