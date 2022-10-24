// Number of digits in an integer
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,count=0;


    printf("Enter n :- ");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++;

    }
    
    
    printf("%d\n",count);

    
return 0;
}