#include<stdio.h>
#include<string.h>
void re(char[]);
int main()
{
        char a[]="gopala";
        re(a);
}
void re(char a[])
{
        int i,j;
        for(i=0;a[i];i++)
        {
                for(j=i+1;a[j];j++)
                {
                        if(a[i]==a[j])
                        printf("%c",a[i]);
                }
        }
}
