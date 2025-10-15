#include<stdio.h>
int main()
{

    int N, M, araNum, newValue;
    int ara[200000];
    
    scanf("%d", &N);

    for(int i=1;i<=N;i++){
        scanf("%d", &ara[i]);
    }

    scanf("%d", &M);

    for(int i=1;i<=M;i++){
        scanf("%d", &araNum);
        scanf("%d", &newValue);
        ara[araNum] += newValue;
    }

    for(int i=1;i<=N;i++){
        printf(" %d ", ara[i]);
    }
    return 0;
}