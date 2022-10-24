// Sum of digits of a number
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int n,sum=0;


    printf("Enter n :- ");
    scanf("%d",&n);
    while (n!=0)
    {
        sum=sum+n%10;
        n=n/10;

        

    }
    
    
    printf("%d\n",sum);

    
return 0;
}