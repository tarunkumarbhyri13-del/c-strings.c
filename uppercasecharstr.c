// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char str[26];
    printf("Enter the string:\n");
    scanf("%s",str);
    for(int i=0;i<=strlen(str)-1;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            printf("%c\t",str[i]);
        }
    }
    return 0;
}