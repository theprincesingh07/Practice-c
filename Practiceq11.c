// Greatest of two numbers
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int a,b;

    printf("Enter a :- ");
    scanf("%d",&a);
    printf("Enter b :- ");
    scanf("%d",&b);
    system("clear");
    if (a<b)
    {
        printf(" b = %d is greatest  amoung a = %d and b= %d \n",b,a,b);
    }else{
        printf(" a = %d is greatest  amoung a = %d and b= %d \n",a,a,b);

    }
    
return 0;
}