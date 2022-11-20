#include<stdio.h>
#include<string.h>
void len(char[]);
int main()
{
	char a[]="Gopal";
	len(a);
}
void len(char a[])
{
    printf("%s",strupr(a));	
}
