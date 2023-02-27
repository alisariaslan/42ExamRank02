#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int nbr1;
	int nbr2;

	if (argc == 3)
	{
		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}

/////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int s1 = 0, s2 = 0; 
    if(ac == 3)
    {
        s1 = atoi(av[1]);
        s2 = atoi(av[2]);
        if(s1 > 0 && s2 > 0)
        {
            while(s1 != s2)
            {
                if(s1 > s2)
                    s1 -= s2;
                else
                    s2 -= s1;
            }
            printf("%d",s1);
        }
    }
    printf("\n");
}


//EBOB

/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$

*/