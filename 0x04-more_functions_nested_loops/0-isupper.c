#include "main.h"
/**
 * _isupper - Check if a letter is upper
 * @c: input for alphabet
 *
 * return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
