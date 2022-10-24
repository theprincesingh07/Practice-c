//  Greatest of three numbers
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int a,b,c;
    printf("Enter a :- ");
    scanf("%d",&a);
    printf("Enter b :- ");
    scanf("%d",&b);
    printf("Enter c :- ");
    scanf("%d",&c);
    system("clear");
    if (a>b && a>c)
    {
        printf(" b = %d is greatest  amoung a = %d , b= %d and c = %d\n",b,a,b,c);
    }
    else if (b>a && b>c)
    {
        printf(" b = %d is greatest  amoung a = %d , b= %d and c = %d\n",b,a,b,c);
    }
    else if (c>a && c>b)
    {
       printf(" c = %d is greatest  amoung a = %d , b= %d and c = %d\n",c,a,b,c);
    }
    
    

return 0;
}