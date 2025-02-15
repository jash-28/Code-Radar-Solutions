#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int temp=c;
    if(temp>=65 && temp<=90){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}