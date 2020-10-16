#include <stdio.h>
#include <string.h>
char* firstLetter(char str[]);
void main() {
	char str[100];
	printf("\nNhap chuoi: ");
	gets(str);
	firstLetter(str);
	printf("%s\r\n",str);
}

char* firstLetter(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		} 
		if (str[i-1] == ' ' || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
}