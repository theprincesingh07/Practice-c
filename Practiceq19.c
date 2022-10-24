// Fibonacci series upto n value
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int sum,a,b,n;
    sum=0;
    a=0;
    b=1;
    printf("Enter a value :- ");
    scanf("%d",&n);
    while (sum<=n)
    {
        printf("%d",sum);
        a = b; // swap elements
        b = sum;
        sum = a + b; // next term is the sum of the last two terms 
    }
    
    
    
    
   
return 0;
}