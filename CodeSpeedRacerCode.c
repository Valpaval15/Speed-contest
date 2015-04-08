#include <stdio.h>
#include <string.h>
int countString(char *string);
int main(void)
{
    char myString[10];
    printf("Input a string: \n");
    scanf("%s", myString);
    printf("%s\n", myString);
    printf("%s\n", myString);
    int count = countString(myString);
    printf("Count is %i\n", count);
    return 0;
}

int countString(char *string) {
    return strlen(string);
}
