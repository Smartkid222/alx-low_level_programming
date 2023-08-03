#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @str: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *str)
{
    int len = 0;
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        len++;
        end++;
    }

    end--;

    while (start < end)
    {
        if (*start != *end)
            return 0; /* Not a palindrome, return 0 */

        start++;
        end--;
    }

    return 1; /* Palindrome, return 1 */
}

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
