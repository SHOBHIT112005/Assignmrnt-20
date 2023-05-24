#include<stdio.h>
void strleng(char (*p)[21])
{
    int len = 0;
    for(int i = 0;(*p)[i] != '\0';i++)
    {
        len++;
    }
    printf("The length of the entered string is %d",len-1);
}
int main()
{
    char a[21];
    printf("Enter a string of max 20 characters\n");
    fgets(a,21,stdin);
    strleng(&a);
    return 0;
}