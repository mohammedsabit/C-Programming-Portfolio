// Topic: String Processing
// Problem: Count the number of vowels in a string using Recursion.
// Logic: Check the current character, add to count if vowel, and recurse for the next index.

#include<stdio.h>
#include<string.h>

int count_vowels(char str[], int count, int index)
{
    // Base Case: End of String
    if(str[index] == '\0')
    {
        return count;
    }
    
    // Check if current char is a vowel (lower or upper case)
    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' || 
       str[index] == 'A' || str[index] == 'E' || str[index] == 'I' || str[index] == 'O' || str[index] == 'U')
    {
        count++;
    }
    
    // Recursive Call for the next character
    return count_vowels(str, count, index + 1);
}

int main()
{
    char str[201];
    fgets(str, 201, stdin); // Read string with spaces
    
    int initial_count = 0;
    int result = count_vowels(str, initial_count, 0);
    
    printf("%d", result);
    return 0;
}