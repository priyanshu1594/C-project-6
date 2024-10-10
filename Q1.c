#include <stdio.h>

int main() {
    char str[100];
    int start, end, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    for (end = 0; str[end] != '\0'; end++);

    end--;

    for (start = 0; start < end; start++, end--) {
        if (str[start] != str[end]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is not a Palindrome.\n");

    return 0;
}
