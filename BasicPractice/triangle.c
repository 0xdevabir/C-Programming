#include<stdio.h>
int main(){

    int i, j, c=1, aa=4;


    for(i=1;i<=5;i++){

        for(int a=1;a<=aa; a++){printf("   ");}
        aa--;
        for(j=1;j<=c;j++){
            printf(" * ");
        }c+=2;
        printf("\n");
        
    }

    return 0;
}