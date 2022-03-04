//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	FILE *f = fopen("in.txt", "rt");
//	FILE *g = fopen("out.txt", "wt");
//	int t,n, q, i,j,s,z=0,nr=0,x1,y1;
//	int a[50][50],b[1001],c[1001],contorbc=-1;
//	//i-contor pt construirea matricei //de linie
//	//j- contor pt construirea matricei //de coloana
//	//t- contor pt construirea matricei //pentru forma zig zag
//	//s-numarul maxim 2^2*n, din acesta construim toate celelalte elem al matricei
//	//z- contor care ajuta la trecerea urmatorilor patrati de dedesubt 
//	//x1- coord x a elem
//	//y1-coord y a elem
//	//a-matricea cu elem
//	//b-vector ce retine toate coord x
//	//c-vector ce retine toate coord y
//	//contorbc-contor cu ajutorul caruia adaugam elem in vectorii b si c
//	if (f == NULL)
//	{
//		printf("nu s a putut deschide");
//		exit(0);
//	}
//	else
//	{
//		fscanf(f, "%d", &n);
//		fscanf(f, "%d", &q);
//		while (!feof(f))
//		{
//			fscanf(f, "%d", &x1);
//			fscanf(f, "%d", &y1);
//			contorbc++;
//			b[contorbc] = x1;
//			c[contorbc] = y1;
//		}
//	}
//	/*do {
//		printf("n=");
//		scanf("%d", &n);
//	} while (n <= 0 || n> 8);*/
//	if (n == 1)nr = 1;
//	else
//		nr = pow(2, n - 1);
//	/*Fiecare matrice se imparte in mai multe patrate care depinde de nr principal n
//	nr precizeaza cate patrate sunt pe latimea matricei*/
//	/*Calculand obtinem relatia de 2^n-1 patrate pe latime pt orice matrice, pt orice n*/
//	/*do {
//		printf("q=");
//		scanf("%d", &q);
//	} while (q <= 0 || q > 1000);*/
//	s = pow(2, (2 * n));
//	i = 1;
//	j = 1;
//	while (s != 0)
//	{
//			if (z < nr)
//			{
//				t = i + 1;
//				a[i][j] = s--;
//				a[i][j + 1] = s--;
//				a[t][j] = s--;
//				a[t][j + 1] = s--;
//				j = j + 2;
//				z++;
//			}
//			else 
//			{
//				z = 0;
//				i = i + 2;
//				j = 1;
//			}
//		
//	}
//	/*Pt a afisa matricea se observa ca fiecare matrice va avea 2^n linii si coloane*/
//	printf("matricea este:\n");
//	for (i = 1;i <=pow(2,n) ;i++)
//	{
//		for (j = 1;j <=pow(2,n) ;j++)printf("%d\t", a[i][j]);
//	printf("\n");
//	}
//	/*Pt a afisa elem cautate trecem prin coord x si y din vect b respectiv c
//	acestea fiind indicii pt matricea a in care am inserat toate elementele
//	in forma zig zag*/
//	for (i = 0;i <= contorbc;i++)
//		fprintf(g,"%d\n", a[b[i]][c[i]]);
//	fclose(f);
//	fclose(g);
//	system("pause");
//	return 0;
//}