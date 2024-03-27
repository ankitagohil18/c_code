#include<stdio.h>
#include<string.h>
int main()
{
    char shabdo[]="Ankita Gohil";
    printf("%s",shabdo);
    int i;
    while(shabdo[i]!='\0')
    {
        ++i;
    }
    printf("\n length is : %d",i);
}