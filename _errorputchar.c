#include <unistd.h>

/**
 * _errorputchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _errorputchar(char c)
{
	return (write(STDERR_FILENO, &c, 1));
}
