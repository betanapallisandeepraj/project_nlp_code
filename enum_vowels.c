#include <stdio.h>

// Define an enum for Telugu characters with their Unicode code points
enum	TeluguCharacters
{
	TELUGU_A = 0x0C05,
	TELUGU_AA = 0x0C06,
	TELUGU_I = 0x0C07,
	TELUGU_II = 0x0C08,
	TELUGU_U = 0x0C09,
	TELUGU_UU = 0x0C0A,
	TELUGU_RU = 0x0C0B,
	TELUGU_RRU = 0x0C60,
	TELUGU_E = 0x0C0E,
	TELUGU_EE = 0x0C0F,
	TELUGU_AI = 0x0C10,
	TELUGU_O = 0x0C12,
	TELUGU_OO = 0x0C13,
	TELUGU_AU = 0x0C14
};

int	main(void)
{
	// Example usage: Print the Unicode code point for 'అ'
	printf("Unicode code point for 'అ': U+%04X\n", TELUGU_A);
	// You can use other enum constants in a similar manner
	// For example: printf("Unicode code point for 'ఆ': U+%04X\n", TELUGU_AA);
	return (0);
}
