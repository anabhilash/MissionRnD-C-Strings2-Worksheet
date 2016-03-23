/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	if (str != NULL)
	{
		char *str1;
		int i=0,j=0,start = -1, end = -1;
		for (i = 0; str[i] != '\0'; i++)
		{
			while (str[i] == ' '&&str[i]!='\0') i++;
			if (str[i] == '\0')
			{
				break;
			}
			start = i;
			while (str[i] != ' '&&str[i] != '\0') i++;
			i=end = i - 1;
		}
		if (start != -1 && end != -1)
		{
			str1 = (char *)malloc((end - start) + 1);
			for (i = start; i <= end; i++)
			{
				str1[j] = str[i];
				j++;
			}
			str1[j] = '\0';
			return str1;
		}
		return "";
		
	}
	else
		return NULL;
}
