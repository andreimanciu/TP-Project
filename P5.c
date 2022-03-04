//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n, *p, i,*a,c=0,k=0,aux,t=-1;
//	/*n -nr de elem.
//	p - vector alocat dinamic pt a retine elem.
//	a - retine pozitiile elem = cu'0' care apar in p
//	c- contor pt numărul minim de interschimbări necesare
//	k- contor pt apariitile elem =cu '0' din p
//	t- contor care ajuta la introducerea elem in ordine in a
//	aux- variabila auxiliara pt interschimbare*/
//	FILE *f = fopen("in.txt", "rt");
//	FILE *g = fopen("out.txt", "wt");
//	if (f == NULL)
//	{
//		printf("nu s a putu deschide ");
//		exit(0);
//	}
//	fscanf(f, "%d", &n);
//	/*do 
//	{
//		printf("n=");
//		scanf("%d", &n);
//	} while (n <= 0 || n>999);*/
//	p = (int*)malloc(n * sizeof(int));
//	a = (int*)malloc(n * sizeof(int));
//	for (i = 0;i < n;i++)
//	{
//		fscanf(f,"%d", &p[i]);
//		if (p[i] == 0)
//		{
//			k++;
//			t++;
//			a[t] = i;
//		}
//	}
//	for (i = 0;i < n;i++)
//		printf("%d ",p[i]);
//	if (k != 0)
//	{
//		/*printf("\n Pozitiile elem care s au interschimbat sunt:\n");*/
//		for (i = 0;i < k;i++)
//			if (p[i] == 1)
//			{
//				c++;
//				fprintf(g,"%d %d\n", i + 1, a[t] + 1);
//				aux = p[i];
//				p[i] = p[a[t]];
//				p[a[t]] = aux;
//				t--;
//			}
//		fprintf(g,"numarul minim de interschimbari necesare=%d", c);
//	}
//	printf("\n");
//	for (i = 0;i < n;i++)
//		printf("%d ", p[i]);
//	fclose(f);
//	fclose(g);
//	system("pause");
//	return 0;
//}