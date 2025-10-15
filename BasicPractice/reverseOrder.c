#include<stdio.h>
int main()
{

    int N;
    int ara[200000];

    printf("Total Numbers: ");
    scanf("%d", &N);

    for(int i=1;i<=N;i++){
        printf("Number %d : ", i);
        scanf("%d", &ara[i]);
    }

    for(int i=N;i>=1;i--){
        printf(" %d ", ara[i]);
    }

    return 0;
}