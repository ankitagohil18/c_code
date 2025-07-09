
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str), isPalindrome = 1;
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

