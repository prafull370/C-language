#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }

    printf("The string is a palindrome.\n");

    return 0;
}