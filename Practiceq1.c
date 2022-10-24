#include<stdio.h>
#include<string.h>
int main(){
    char c;
    printf("Enter a char:- ");
    scanf("%c",&c);
    if (c=='a'|| c=='e'||c=='i'|| c=='o'||c=='u'|| c=='A'||c=='E'|| c=='I'||c=='O'|| c=='U')
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is consonant\n");
    }
    
return 0;
}