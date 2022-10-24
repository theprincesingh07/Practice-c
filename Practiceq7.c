// Swap two numbers without third variable

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    system("clear");
    printf("You entered a = %d\n",a);
    printf("You entered b = %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("**********Swaped*********\n");
    printf("Your  a = %d\n",a);
    printf("Your  b = %d\n",b);
    


return 0;
}