#include <stdio.h>
#include <string.h>
 
int main()
{
	int n;
	printf("enter string size\n");
	scanf("%d",&n);
    char string[n],string2[n];
    printf("Enter a string to check palindrome\n");
    scanf("%s",&string);
    strcpy(string2,string);
    strrev(string2);
    if(strcmp(string,string2) == 0)
	printf("the string is palindrome\n");
	else
	printf("the string is not palindrome\n");
	
   return 0;
}
