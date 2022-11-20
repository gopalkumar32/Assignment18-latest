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
	int i;
	for(i=0;a[i];i++);
	printf("%d",i);
	
}
