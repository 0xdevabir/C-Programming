#include<stdio.h>
int main()
{


    int n, ara[100];
    int m_n=1;

    scanf("%d", &n);


    for(int i=1; i<n; i++){
        scanf("%d", &ara[i]);
    }


    for(int i=1; i<=n; i++){
        if(m_n==ara[i]){
            m_n++;
        }else continue;;
    }

    printf("Missing number is: %d", m_n);

    return 0;
}