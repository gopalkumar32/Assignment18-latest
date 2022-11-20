#include<stdio.h>
#include<string.h>
int main()
{
        int i,count=0;
        char a[50];
        printf("Entre the sentence\n");
        fgets(a,50,stdin);
        for(i=0;a[i];i++)
        {
                if(a[i]==' ')
                count++;
        }
        printf("Total number word is %d ",count);
}
