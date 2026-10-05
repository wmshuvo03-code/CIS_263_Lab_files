#include <stdio.h>
#include <string.h>

int main(){

//character input 
char d;
printf("Enter your character: ");
scanf("%c", &d);
printf("grade: %c", d);

//string input
char name[50];
printf(" Enter your name: ");
scanf("%s", name);
    printf("Name: %s\n", name);
printf("Array size: %d\n", sizeof (name));
printf("String length: %d\n", strlen(name));

char str[50];
printf("Enter a string: ");
scanf(" %[^\n]", str);
printf("you entered: %s\n", str);

return 0;

}