#include "main.h"

/**
 * _isalpha - Check if character is a alphabet character.
 * @a: char
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
