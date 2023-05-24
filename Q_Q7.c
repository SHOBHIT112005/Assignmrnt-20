#include<stdio.h>
void strvovncons(char (*p)[21])
{
    int vov = 0,cons = 0;
    for(int i = 0;(*p)[i] != '\0';i++)
    {
        if(((*p)[i] == 'a')||((*p)[i] =='e')||((*p)[i] =='i')||((*p)[i] =='o')||((*p)[i] =='u')
        ||((*p)[i] == 'A')||((*p)[i] =='E')||((*p)[i] =='I')||((*p)[i] =='O')||((*p)[i] =='U'))
        {vov++;}
        else if(((*p)[i] != ' ')&&((*p)[i] != '\0')&&((*p)[i] != '\n'))
        cons++;
    }
    printf("The number of vovels in %s are %d\n",p,vov);
    printf("The number of consonants in %s are %d",p,cons);
}
int main()
{
    char a[21];
    printf("Enter a string of max 20 characters\n");
    fgets(a,21,stdin);
    strvovncons(&a);
    return 0;
}