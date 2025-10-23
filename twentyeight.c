// Write a C program to check whether the input number is a Neon number
#include<stdio.h>
int main(){
    int num, sq, sum=0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num*num;

    while(sq > 0){
        digit = sq % 10;
        sum += digit;
        sq = sq/10;
    }
    if (sum == num){
        printf("%d is a Neon Number.", num);
    }
    else{
        printf("%d is not a Neon Number.", num);
    }
    return 0;
}