#include <iostream>
#include <locale.h>
#include <stdlib.h>
int func(char text[100], int word ) 
{
	for (int i = 0; i < strlen(text); i++) 
	{
		if (text[i-1] != ' ' && text[i] == ' ' && text[i+1] != ' ') 
		{
			word++;
		}
	}
	int i = strlen(text);
	if (text[0] != ' ' && text[i - 1] != ' ')
	{
		word++;
	}
	if (text[0] == ' ' && text[i - 1] == ' ')
	{
		word--;
	}
	printf("Количество слов: %d", word);
	return 0;
}
int main()
{ 
	setlocale(LC_ALL, "Rus");
	char text[100];
	   printf("Текст: ");
	   gets_s (text);
	   int word = 0;
	   func(text, word);
	return 0;
}

