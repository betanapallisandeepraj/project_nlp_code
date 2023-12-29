#include "print_all_telugu_letters.h"

int	main(void)
{
	unsigned int i, j, k;
	display_telugu_vowels_consonants_additional_marks();
	display_double_consonants();
	display_triple_consonants();
	display_root_of_telugu_consonents();
	display_root_of_double_consonants();
	display_root_of_triple_consonants();
	for (i = 0; all_telugu_consonants[i] != 0; i++)
		display_single_consonent_gunintham(all_telugu_consonants[i]);
	for (i = 0; all_telugu_consonants[i] != 0; i++)
		for (j = 0; all_telugu_consonants[j] != 0; j++)
			display_double_consonent_gunintham(all_telugu_consonants[i],
				all_telugu_consonants[j]);
	for (i = 0; all_telugu_consonants[i] != 0; i++)
		for (j = 0; all_telugu_consonants[j] != 0; j++)
			for (k = 0; all_telugu_consonants[k] != 0; k++)
				display_trible_consonent_gunintham(all_telugu_consonants[i],
					all_telugu_consonants[j], all_telugu_consonants[k]);
	return (0);
}
