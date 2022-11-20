#include<stdio.h>
#include<string.h>
int main()
{
        char a[]="MADAM";
        int i=0,j=strlen(a);
        while(i<=j)
        {
                if(a[i]!=a[j])
                break;
                i++,j--;
        }
        if(i>j)
        printf("Not palindrome");
        else
        printf("Palindrome");
        
}
