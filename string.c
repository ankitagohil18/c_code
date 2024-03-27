#include<stdio.h>
#include<string.h>

int main()
{
    char shabdo[50]="Ankita Gohil";
    printf("%s",shabdo);
    
    
    //length
    int i,j,temp;
    while(shabdo[i]!='\0')
	{
	   ++i;
	}
    printf("\nlength = %d",i);
    //revers
    for(i=strlen(shabdo)-1;i<j;--i)
	{temp=shabdo[j];
	shabdo[j]=shabdo[i];
	shabdo[i]=temp;
	j--;
	}
	printf("\nrevers is : %s",shabdo);
}