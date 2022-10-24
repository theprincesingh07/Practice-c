// LCM of two numbers
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int a,b;
    int gcd,lcm,product;
    
    
    printf("Enter a :- ");
    scanf("%d",&a);
    printf("Enter b :- ");
    scanf("%d",&b);
    product=a*b;
    system("clear");
    for (int i = 2; i < a ;i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
        
    } 
    lcm=product/gcd;
    printf("Product is :- %d \n",product);
    printf("Gcd is %d\n",gcd);

    printf("Lcm of %d and %d is %d \n",a,b,lcm);

    
return 0;
}