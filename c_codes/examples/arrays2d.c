#include<stdio.h>
//Arreglos o Arrays

//main
main()
{
	int i,j;
	int a[2][2];
	int b[2][2];
	int c[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j]=i+j;
			b[i][j]=1+j;
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\n",c[i][j]);
		}
	}
	printf("El arreglo a es:\n");
	printf("\t 0 \t 1\n");
	for(i=0;i<2;i++)
	{
		printf("%d",i);
		for(j=0;j<2;j++)
		{
			
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	printf("El arreglo b es:\n");
	printf("\t 0 \t 1\n");
	for(i=0;i<2;i++)
	{
		printf("%d",i);
		for(j=0;j<2;j++)
		{
			
			printf("\t %d",b[i][j]);
		}
		printf("\n");
	}	
	printf("La suma de a + b es:\n");
	printf("\t 0 \t 1\n");
	for(i=0;i<2;i++)
	{
		printf("%d",i);
		for(j=0;j<2;j++)
		{
			
			printf("\t %d",c[i][j]);
		}
		printf("\n");
	}
}
