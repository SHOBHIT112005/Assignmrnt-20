#include<stdio.h>
#include<string.h>
int i=0,j=0;
void rev(char (*p)[11],char n)
{
    char b[11]={0};
    for(i=0;(*p)[i]!='\0';i++)
    {j++;}
    for(i=0;(*p)[i]!='\0';i++)
    {
        b[i] = (*p)[i];
    }
    for(i=0;(*p)[i]!='\0';i++)
    {
        (*p)[j-1-i] = b[i];
    }
}
int main()
{
    char a[11] = {0};
    printf("Enter a string of max 10 elements\n");
    fgets(a,11,stdin);
    rev(&a,11);
    printf("The reversed string is :-%s\n",a);
    return 0;
    
}