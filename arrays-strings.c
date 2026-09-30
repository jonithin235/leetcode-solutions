#include <stdio.h>
#include <string.h>

void reversethestring(char str[],int length)
{
    int i;
    char temp;
    for(i=0;i<length/2;i++)
    {
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    printf("Reversed string is: %s",str);
}

int main()
{
    char str[100];   
    int length=0;
     printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    printf("Entered string is: %s",str);
     //code to reverse this string.  
     length = strlen(str);
    //code to reverse this string.
    reversethestring(str,length);
     return 0;
}