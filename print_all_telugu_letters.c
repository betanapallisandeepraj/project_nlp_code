#include "print_all_telugu_letters.h"

int	main(void)
{
	unsigned int	i;

	display_telugu_vowels_consonants_additional_marks();
	for (i = 0; all_telugu_consonants[i] != 0; i++)
		display_gunintham(all_telugu_consonants[i]);
	display_double_consonants();
	display_triple_consonants();
	return (0);
}
