#include<stdio.h>
int main(){
    printf("\n");


    char sentence[2000];
    int vowelCounter=0;

    fgets(sentence,sizeof(sentence),stdin);

    int i=0;
    while (sentence[i]!='\0')
    {
        if(sentence[i]=='a')
            vowelCounter++;
        else if(sentence[i]=='e')
            vowelCounter++;
        else if(sentence[i]=='i')
            vowelCounter++;
        else if(sentence[i]=='o')
            vowelCounter++;
        else if(sentence[i]=='u')
            vowelCounter++;
        else if(sentence[i]=='A')
            vowelCounter++;
        else if(sentence[i]=='E')
            vowelCounter++;
        else if(sentence[i]=='I')
            vowelCounter++;
        else if(sentence[i]=='O')
            vowelCounter++;
        else if(sentence[i]=='U')
            vowelCounter++;
        // else{continue;}
        i++;
    }
    
    printf("Total Vowel count is: %d", vowelCounter);

    printf("\n");

    return 0;
}