// Topic: String Processing (NLP)
// Problem: Check if a string is a Palindrome (reads the same forwards and backwards).
// Logic: Compare characters from the start and end simultaneously.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s", str); // Read string input
    
    int start = 0;
    int end = strlen(str) - 1;

    // Iterate until pointers meet
    while(start < end)
    {
        if(str[start] == str[end])
        {
            start++;
            end--;
        }
        else
        {
            // If mismatch found, it's not a palindrome
            printf("NO");
            return 0;
        }
    }
    
    printf("YES");
    return 0;
}