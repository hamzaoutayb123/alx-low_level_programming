#include <unistd.h>

/**
 * _putchar - function
 *
 * Description : a function that prints one character
 *
 * Return : Always return 0
*/

int _putchar(c){
	return (write(1,&c,1));
}
