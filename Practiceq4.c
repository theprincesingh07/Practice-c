// Uppercase, Lowercase or special character
#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    printf("Enter to check  :- ");
    scanf("%c",&ch);
    if (ch>='A'&& ch<='Z')
    {
      printf("Uppercase letter :- %c\n",ch);
    }
    else if (ch>='a'&& ch <='z')
    {
        printf("Lowercase letter  :- %c\n",ch);
    }
    else
    {
        printf("Special Character ");

    }
    
    
return 0;
}