// Reverse a given number
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n ;
    int reverse=0;
    int rem;
    printf("Enter a number to reverse it:- ");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;

    }
    printf("Reverse no is %d\n",reverse);
    
return 0;
}