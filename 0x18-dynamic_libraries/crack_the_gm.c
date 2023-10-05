#include <unistd.h>
int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 - 9", 16);
	write(1, "Congratulations, you win the Jackpot!", 37);
	return (0);
}
