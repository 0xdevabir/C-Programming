#include<stdio.h>
int main()
{

    int N , equal, araEqual=0;
    int ara[200000];
    
    scanf(" %d", &N);


    for(int i=1;i<=N;i++){
        scanf("%d", &ara[i]);
    }
    equal=ara[1];
    for(int i=1;i<=N;i++){
        if(equal==ara[i]){
            araEqual++;
        }else{continue;}
    }

    if(araEqual==N){
        printf("YES");
    }else{printf("NO");}
    return 0;
}