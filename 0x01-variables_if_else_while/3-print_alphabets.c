/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++ ; ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
		putchar(ch);
		putchar('\n');
	}

		return (0);
}  
