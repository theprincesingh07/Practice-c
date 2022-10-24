// A number is positive or negative
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int num;
    printf("enter a number:- ");
    scanf("%d",&num);
    system("clear");
    if (num>=0)
    {
        printf("Postive number:- %d\n",num);
    }else{
        printf("Negative number :- %d\n",num);

    }
    

return 0;
}