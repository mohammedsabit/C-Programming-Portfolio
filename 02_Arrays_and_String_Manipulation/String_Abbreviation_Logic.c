// Topic: String Parsing
// Problem: Abbreviate long words (length > 10) by keeping first/last char and count of middle chars.
// Logic: String Length calculation and formatted printing.
// Example: "localization" -> "l10n" (Used in software internationalization).

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // Number of test cases

    for (int i = 1; i <= t; i++)
    {
        char str[101];
        scanf("%s", str);
        
        int length = strlen(str);

        if (length > 10)
        {
            // Logic: Print First Char + (Total Length - 2) + Last Char
            printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}