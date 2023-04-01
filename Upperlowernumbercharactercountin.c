#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
int main(void)
{
    char a[SIZE];
    scanf("%[^\n]%*c", &a);
    int l = strlen(a);
    int upr = 0, low = 0, dig = 0, symb = 0;
    for (int i = 0; i < l; i++)
    {
        if (a[i] == ' ')
        {
            continue;
        }
        if (isupper(a[i]))
        {
            upr += 1;
            continue;
        }
        if (islower(a[i]))
        {
            low += 1;
            continue;
        }
        if (isdigit(a[i]))
        {
            dig += 1;
            continue;
        }
        else
        {
            symb += 1;
        }
    }
    printf("Upper-%d\n", upr);
    printf("Lower-%d\n", low);
    printf("Digits-%d\n", dig);
    printf("Special Characters-%d\n", symb);
}