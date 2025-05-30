#include<stdio.h>
int main()
{
    char str[100];
    int l=0;
    int p=1;
    printf("Enter anything:");
    scanf("%s", &str);
    for(int i=0; str[i]!='\0'; i++)
    {
        l++;
    }
    for(int i=0; i<l/2; i++)
    {
        if(str[i]!=str[l-1-i])
        {
            p=0;
            break;
        }
    }
    if(p)
    {
        printf("Given string is Palindrome");
    }
    else
    {
        printf("Given string is Not Palindrome");
    }
    return 0;
}