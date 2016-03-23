/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

int find(char *, int);
void count_vowels_and_consonants(char *str,int *consonants, int *vowels)
{
	int i = 0;
	*consonants = *vowels = 0;
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z'))
			{
				if (find(str, i))
				{
					(*vowels)++;
				}
				else
				{
					(*consonants)++;
				}
			}
		}
	}

}
int find(char *str, int i)
{
	char str1[11] = "aeiouAEIOU";
	int k = 0, value = 0;
	while (str1[k] != '\0')
	{
		if (str1[k] == str[i])
		{
			value = 1;
			break;
		}
		k++;
	}
	return value;
}
