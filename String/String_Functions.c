#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Hello";
    char str2[]=" World";
    // Using strtcat()function that combine the string
    printf("%s",strcat(str1,str2));  
    // Output : Hello World

    // Using strlen() to find out the length of the string
    printf("%d",strlen(strcat(str1,str2)));
    // Output : 11

    // Using strrev() to reverse a string 
    printf("%s",strrev(str1));
    // Output : olleH

    // Using strcpy() function to copy a string from one another
    char cpstr[35];
    strcpy(cpstr,strcat(str1,str2));
    // printf("%s",cpstr);
    // Output : Hello World

    // Using strcmp() function is used to commapre two string fro ASCII value and giving +ve for Greater Value
    printf("%d",strcmp(str1,str2));
    // Output : 1 Bcs str1 strats with H and str2 starts with w so H is capital and hence ggreater value than w i.e it returns 1 else it gives -1
    return 0;
}