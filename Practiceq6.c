//A number is even or odd

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter a number to check if a number is odd or even:- ");
    scanf("%d",&num);
    system("clear");
    if (num%2==0)
    {
        printf("%d is a odd number \n",num);
    }else{
        printf("Not a valid  number ");

    }
    
return 0;
}