// Sum of numbers in a given range

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int a,b,sum=0;
    printf("Enter  a number  = ");
    scanf("%d",&a);
    printf("Enter  a number  = ");
    scanf("%d",&b);

    for (int i = a; i <=b; i++)
    {
        sum=sum+i;
    }
    printf("Sum of numbers from %d to %d is %d",a,b,sum);
    

return 0;
}