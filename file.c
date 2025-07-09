#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* new;
    char *status;
    char buffer[100];
    new = fopen("stack.txt","r");
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    status = fgets(buffer, 100, new);
    printf("%s %s", buffer, status);
    fclose(new);
}