// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char str[10];
    printf("Enter the string:\n");
    scanf("%s",str);
    for(int i=0;i<=strlen(str)-1;i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            printf("%c\t",str[i]);
        }
    }
    return 0;
}