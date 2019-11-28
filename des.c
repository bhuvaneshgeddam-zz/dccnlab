#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char pwd[20];
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    int num[20], i, n, key;
    clrscr();
    printf("\nEnter the password:");
    scanf("%s", &pwd);
    n=strlen(pwd);
    for(i = 0; i < n; i++)
        num[i] = toascii(tolower(pwd[i])) - 'a';
    printf("\nEnter the key:");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
        num[i] = (num[i] + key) % 26;
    for(i = 0; i < n; i++)
        pwd[i] = alpha[num[i]];
    printf("\nThe key is:%d", key);
    printf("\nEncrypted text is:%s", pwd);
    for(i = 0; i < n; i++)
    {
        num[i] = (num[i] - key) % 26;
        if(num[i] < 0)
            num[i] = 26 + num[i];
        pwd[i] = alpha[num[i]];
    }
    printf("\nDecrypted text is:%s", pwd);
    getch();
}
