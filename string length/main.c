#include <stdio.h>
#include <string.h>

int main()
{
   char str[400];          // space for up to 39 characters + null
    int length;

    printf("Enter a string (max 99 chars): ");
    scanf(" %39[^\n]", str); //  safe width

    length = strlen(str);   // get the length of the string

    printf("You entered: %s\n", str);
    printf("Length: %d\n", length);



    return 0;
}
