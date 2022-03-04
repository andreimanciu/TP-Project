#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f = fopen("in.txt", "rt");
	FILE *g = fopen("out.txt", "wt");
	char s[100], a[100]; /// in vect s se citesc elem iar in a se construieste secventa cu paranteze
	int t = 0, j, p = 0, k = 0, i, x,r;
	if (f == NULL)
	{
		printf("nu s a putut efectua deschiderea");
		exit(0);
	}
	else
	{
		while (!feof(f))
		{
			fscanf(f, "%s", s);
		}
			for (i = 0; i < strlen(s); i++)
			{
				r = (int)(s[i]) - '0';				///in r se retin caracterele transformate in numere
				if (r > p)
				{
					for (j = p; j < r; j++)
					{
						a[k++] = '(';
					}
					p = r;							///p=r pt ca valoarea sa nu se piarda
				}
				else if (r < p)
				{
					for (j = p; j > r; j--)
					{
						a[k++] = ')';
					}
					p = r;
				}
				a[k++] = s[i];
			}
			for (i = p; i > 0; i--)
			{
				a[k++] = ')';
			}
			a[k] = NULL;			///ultimul caracter ia terminatorul de sir
			for (i = 0; i <= k; i++)
			{
				fprintf(g, "%c", a[i]);
			}
		fclose(f);
		fclose(g);
		system("pause");
		return 0;


	}
}
