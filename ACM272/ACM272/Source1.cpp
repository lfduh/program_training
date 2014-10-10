#include <stdio.h>
#include <stdlib.h>

int main2()
{
	char c;
	int i = 1;

	while ((c = getchar()) != EOF){
		if (c == '"'){
			if (i == 1){
				putchar('`');
				putchar('`');
				i = 0;
			}
			else{
				putchar('\'');
				putchar('\'');
				i = 1;
			}

		}
		else
			putchar(c);

	}

	return 0;

}