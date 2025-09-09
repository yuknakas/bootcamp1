#include <stdio.h>
#include <stdbool.h>

bool	is_prime(int n)
{
	if (n < 2)
		return (false);
	if (n == 2)
		return (true);
	if (n % 2 == 0)
		return (false);
	
	for (int i = 3; i < (n / i); i += 2)
	{
		if (n % i == 0)
			return (false);
	}
	return (true);
}

int	main()
{
	int	number;
	int	ch;

	while (1)
	{
		printf("Enter number to check (0 to exit):\n");
		if (scanf("%i", &number) != 1) {
            printf("Invalid input.\n");
            while ((ch = getchar()) != '\n' && ch != EOF)
			{
                continue;
            }
			if (ch == EOF)
				break;
            continue;
        }
		if (number == 0)
			break;
		if (is_prime(number))
			printf("%i is a prime number.\n", number);
		else
			printf("%i is not a prime number.\n", number);
	}
	printf("Goodbye!\n");
	return (0);
}