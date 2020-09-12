#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char Alphabet[1000];
	int i,sumA=0,suma=0;
	scanf("%s", Alphabet);
	for (i = 0; Alphabet[i] >= 0 && Alphabet[i] <= 127 && Alphabet[i] != '\0'; i++)
	{
		if (Alphabet[i] >= 65 && Alphabet[i] <= 90)
		{
			sumA++;
		}
		else if (Alphabet[i] >= 97 && Alphabet[i] <= 122)
		{
			suma++;
		}
		else 
		{
			printf("ERROR");
			return 0;
		}
	}
	if (sumA != 0 && suma == 0)
	{
		printf("All Capital Letter");
	}
	else if (suma != 0 && sumA == 0)
	{
		printf("All Small Letter");
	}
	else
	{
		printf("Mix");
	}
	return 0;
}