#include <stdio.h>
#include <string.h>

int main()
{
    int key;
    printf("Key: ");
    scanf("%d", &key);

    char plain[77];
    printf("Plaintext: ");
    gets(plain);

    int cipher = 0;

    for (int i = 0; i < strlen(plain); i++)
    {
        cipher = plain[i];

        if (plain[i] == ' ') {
            cipher = ' ';
        } else if (plain[i] >= 'A' && plain[i] <= 'Z') {
            cipher = ((plain[i] + key - 'A') % 26) + 'A';
        } else if (plain[i] >= 'a' && plain[i] <= 'z') {
            cipher = ((plain[i] + key - 'a') % 26) + 'a';
        }

        printf("%c", cipher);
    }

    printf("\n");

    return 0;
}
