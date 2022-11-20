#include<stdio.h>
#include<string.h>
int main()
{
        char a[20],b[20];
        int l;
        printf("Entre the first string\n");
        scanf("%s",a);
        printf("Entre the second string\n");
        scanf("%s",b);
        l=strcmp(a,b);
        if(l==0)
        printf("Both are same string");
        else
        printf("Both are not same string");
}
