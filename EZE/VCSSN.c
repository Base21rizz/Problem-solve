#include <stdio.h>
#include <string.h>
int main()
{
    int consonant = 0, vowel = 0, spaces = 0, number = 0, special_charecters = 0;
    char s[1000];
    printf("Enter a String: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i')
            {
                vowel++;
            }
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            number++;
        }
        else if(s[i] == ' ')
        {
            spaces++;
        }
        else if(s[i] != '\n' && s[i] != '\0')
        {
            special_charecters++;
        }
    }
    printf("Consonant: %d\n",consonant);
    printf("Vowel: %d\n",vowel);
    printf("Numbers: %d\n",number);
    printf("Special Charecters: %d\n",special_charecters);
    printf("Spaces: %d\n",spaces);
    return 0;
}