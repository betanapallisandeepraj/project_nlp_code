#include <locale.h>
#include <stdio.h>
#include <wchar.h>

unsigned int	all_telugu_vowels[] = {
	0x0C05, // అ
	0x0C06, // ఆ
	0x0C07, // ఇ
	0x0C08, // ఈ
	0x0C09, // ఉ
	0x0C0A, // ఊ
	0x0C0B, // ఋ
	0x0C60, // ౠ
	0x0C0E, // ఎ
	0x0C0F, // ఏ
	0x0C10, // ఐ
	0x0C12, // ఒ
	0x0C13, // ఓ
	0x0C14, // ఔ
	0       // Terminating with 0
};

unsigned int	all_telugu_consonants[] = {
	0x0C15, // క
	0x0C16, // ఖ
	0x0C17, // గ
	0x0C18, // ఘ
	0x0C19, // ఙ
	0x0C1A, // చ
	0x0C1B, // ఛ
	0x0C1C, // జ
	0x0C1D, // ఝ
	0x0C1E, // ఞ
	0x0C1F, // ట
	0x0C20, // ఠ
	0x0C21, // డ
	0x0C22, // ఢ
	0x0C23, // ణ
	0x0C24, // త
	0x0C25, // థ
	0x0C26, // ద
	0x0C27, // ధ
	0x0C28, // న
	0x0C2A, // ప
	0x0C2B, // ఫ
	0x0C2C, // బ
	0x0C2D, // భ
	0x0C2E, // మ
	0x0C2F, // య
	0x0C30, // ర
	0x0C31, // ఱ
	0x0C32, // ల
	0x0C33, // ళ
	0x0C35, // వ
	0x0C36, // శ
	0x0C37, // ష
	0x0C38, // స
	0x0C39, // హ
	0       // Terminating with 0
};

unsigned int	all_telugu_additional_marks[] = {
	0x0C3E, // ా
	0x0C3F, // ి
	0x0C40, // ీ
	0x0C41, // ు
	0x0C42, // ూ
	0x0C43, // ృ
	0x0C44, // ౄ
	0x0C46, // ె
	0x0C47, // ే
	0x0C48, // ై
	0x0C4A, // ొ
	0x0C4B, // ో
	0x0C4C, // ౌ
	0x0C4D, // ్
	0x0C02, // ం
	0x0C03, // ః
	0       // Terminating with 0
};

#define MAX_GUNINTHAM_LETTERS 16

unsigned int	any_gunintham[MAX_GUNINTHAM_LETTERS][3] = {0};

void	display_telugu_vowels(void)
{
	unsigned int	i;

	setlocale(LC_ALL, "");
	for (i = 0; all_telugu_vowels[i] != 0; i++)
		wprintf(L"%lc\t", all_telugu_vowels[i]);
	wprintf(L"\n");
}

void	display_telugu_consonents(void)
{
	unsigned int	i;

	setlocale(LC_ALL, "");
	for (i = 0; all_telugu_consonants[i] != 0; i++)
		wprintf(L"%lc\t", all_telugu_consonants[i]);
	wprintf(L"\n");
}

void	display_telugu_additional_marks(void)
{
	unsigned int	i;

	setlocale(LC_ALL, "");
	for (i = 0; all_telugu_additional_marks[i] != 0; i++)
		wprintf(L"%lc\t", all_telugu_additional_marks[i]);
	wprintf(L"\n");
}

void	display_gunintham(unsigned int consonent)
{
	unsigned int	i;

	setlocale(LC_ALL, "");
	for (i = 0; i < MAX_GUNINTHAM_LETTERS; i++)
		any_gunintham[i][0] = consonent;
	for (i = 0; i < MAX_GUNINTHAM_LETTERS - 3; i++)
		any_gunintham[i + 1][1] = all_telugu_additional_marks[i];
	any_gunintham[14][1] = all_telugu_additional_marks[14];
	any_gunintham[15][1] = all_telugu_additional_marks[15];
	for (i = 0; i < MAX_GUNINTHAM_LETTERS; i++)
		wprintf(L"%ls\t", any_gunintham[i]);
	wprintf(L"\n");
}

void	display_double_consonants(void)
{
	unsigned int i, j, consonent[4] = {0};
	for (i = 0; all_telugu_consonants[i] != 0; i++)
	{
		for (j = 0; all_telugu_consonants[j] != 0; j++)
		{
			consonent[0] = all_telugu_consonants[i];
			consonent[1] = all_telugu_additional_marks[13];
			consonent[2] = all_telugu_consonants[j];
			wprintf(L"%ls\t", consonent);
		}
		wprintf(L"\n");
	}
}

void	display_triple_consonants(void)
{
	unsigned int i, j, k, consonent[6] = {0};
	for (i = 0; all_telugu_consonants[i] != 0; i++)
	{
		for (j = 0; all_telugu_consonants[j] != 0; j++)
		{
			for (k = 0; all_telugu_consonants[k] != 0; k++)
			{
				consonent[0] = all_telugu_consonants[i];
				consonent[1] = all_telugu_additional_marks[13];
				consonent[2] = all_telugu_consonants[j];
				consonent[3] = all_telugu_additional_marks[13];
				consonent[4] = all_telugu_consonants[k];
				wprintf(L"%ls\t", consonent);
			}
		}
		wprintf(L"\n");
	}
}

// void	display_telugu_vowels(void)
// {
// 	unsigned int	i;

// 	setlocale(LC_ALL, "");
// 	for (i = 0x0C05; i <= 0x0C14; i++)
// 	{
// 		if (i == 0x0C0C)
// 			i = 0x0C60;
// 		if (i == 0x0C11)
// 			continue ;
// 		wprintf(L"%lc\t", i);
// 		if (i == 0x0C60)
// 			i = 0x0C0D;
// 	}
// 	wprintf(L"\n");
// }

// void	display_telugu_consonents(void)
// {
// 	unsigned int	i;

// 	setlocale(LC_ALL, "");
// 	for (i = 0x0C15; i <= 0x0C39; i++)
// 	{
// 		if (i == 0x0C29 || i == 0x0C34)
// 			continue ;
// 		wprintf(L"%lc\t", i);
// 	}
// 	wprintf(L"\n");
// }

// void	display_telugu_additional_marks(void)
// {
// 	unsigned int	i;

// 	setlocale(LC_ALL, "");
// 	for (i = 0x0C3E; i <= 0x0C4D; i++)
// 	{
// 		if (i == 0x0C45 || i == 0x0C49)
// 			continue ;
// 		wprintf(L"%lc\t", i);
// 	}
// 	for (i = 0x0C02; i <= 0x0C03; i++)
// 		wprintf(L"%lc\t", i);
// 	wprintf(L"\n");
// }

// void	display_gunintham(unsigned int consonent)
// {
// 	unsigned int i = 0x0C3D, sound[3] = {0};

// 	setlocale(LC_ALL, "");
// 	sound[0] = consonent;
// 	do
// 	{
// 		if (i == 0x0C45 || i == 0x0C49)
// 		{
// 			i++;
// 			sound[1] = i;
// 		}
// 		wprintf(L"%ls\t", sound);
// 		i++;
// 		sound[1] = i;
// 	} while (i < 0x0C4D);
// 	for (i = 0x0C02; i <= 0x0C03; i++)
// 	{
// 		sound[1] = i;
// 		wprintf(L"%ls\t", sound);
// 	}
// 	wprintf(L"\n");
// }

void	display_telugu_vowels_consonants_additional_marks(void)
{
	display_telugu_vowels();
	display_telugu_consonents();
	display_telugu_additional_marks();
}
