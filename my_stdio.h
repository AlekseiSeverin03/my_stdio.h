#include <stdio.h>

const int OK = 1;

int my_puts (const char *s)
{
	if (s != NULL)
	{
		for (int i = 0; s[i] != '\0'; i++)
		{
			putchar(s[i]);
		}
		return OK;
	}
	
	return EOF;
}

char *my_strchr (const char *str, char chr)
{
	int i = 0;

	for (i = 0; (str[i] != chr) && (str[i] != '\0'); i++) {;}
	
	if (str[i] != '\0')
	{
		return (str + i);
	}
	
	return NULL;
}

int my_strlen (const char *str)
{
	char *pointer;

	for (pointer = str; *pointer != '\0'; pointer++) {;}
	
	return (pointer - str);
}

char *my_strcpy (char *new_str, const char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	
	new_str[i] = '\0';

	return new_str;
}

char *my_strncpy (char *new_str, const char *str, int nsymbol)
{
	int i = 0;

	for (i = 0; str[i] != '\0' && i < nsymbol; i++)
	{
		new_str[i] = str[i];
	}
	
	while (i < nsymbol)
	{
		new_str[i] = '\0';
		i++;
	}
	
	new_str[i] = '\0';

	return new_str;
}	

char *my_strcat (char *str, const char *plus_str)
{
	my_strcpy (str + my_strlen (str), plus_str);
	
	return str;
}

char *my_fgets (char *str, int n, FILE *stream)
{
	int i;	
	
	for (i = 0; (str[i] = fgetc (stream)) != '\n' && str[i] != EOF && i < (n - 1); i++)
		
	if (str[i] == EOF)
	{
		return NULL;
	}

	str[i+1] = '\0';
	
	return str;
}
