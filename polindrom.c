
#include <stdio.h>
#include <string.h>

int main() {
    char str[100],temp, rev[100] ;
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        temp = rev[i];
        rev[i]=rev[i-len-1];
        rev[i-len-1] = temp;
    }
    if (strcmp(str,rev)==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

