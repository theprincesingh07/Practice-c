// Factorial of a number
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    int fact=1;
    printf("Enter a number to calculate its factorial :- ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)

    {
        fact=fact*i;
        printf(" * %d ",i);
    }
    printf("= %d ",fact);
    
return 0;
}