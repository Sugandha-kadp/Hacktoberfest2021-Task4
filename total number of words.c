#include <stdio.h>
#include <string.h>
int main(){
char str[100];
int i, total;
total = 1;
printf("\nPlease enter any String : ");
gets(str);
for(i = 0; str[i] != '\0'; i++)
{
if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
{
total++;
}
}
printf("\nThe total number of words in this string %s= %d", str, total);
}
