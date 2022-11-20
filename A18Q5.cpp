#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="Gopal32";
	int i,count=0;
	for(i=0;a[i];i++)
	{
		if(a[i]>=48&&a[i]<=58)
		count++;
	}
	if(count>=1)
	printf("Given string is alphanumeric");
	else
	printf("Given string is not alphanumeric");
}
	
