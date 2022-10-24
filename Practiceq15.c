// Sum of N natural numbers :- Natural numbers are the numbers that start from 1 and end at infinity
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,sum=0;
    printf("enter :- ");
    scanf("%d",&n);
    system("clear");
    for (int i = 0; i<=n; i++)
    {
        sum=sum+i;

    }
    printf("Sum of all natural numbers from 1 to %d is = %d\n",n,sum);

return 0;
}