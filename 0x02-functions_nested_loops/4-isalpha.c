#include "main.h"
/**
 *  _isalpha - shows 1 if the input is a
 *  letter Another cases, shows 0
 *
 *  @c: The character in ASCII code
 *
 *  Return: 1 for letter, 0 for the rest
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
