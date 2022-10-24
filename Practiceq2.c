// A character is an alphabet or not
#include<stdio.h>
#include<string.h>
int main(){
    char c;
    printf("Enter a char:- ");
    scanf("%c",&c);
    if ((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
    {
        printf("Alphabet");
    }else{
        printf("not an alphabet");

    }
    

return 0;
}