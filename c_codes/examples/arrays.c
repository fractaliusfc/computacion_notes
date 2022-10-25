#include<stdio.h>
//Arreglos o Arrays

//main
main()
{
	int i,b;
	printf("Dame un numero\n");
	scanf("%d",&b);
	int a[b];
	int c[b];
	int d[5] = {1,2,3,4,5};
	int e[] = {6,7,8,9,10};
	for(i=0;i<b;i++)
	{
	printf("Dame la componente %d de a\n",i+1);
	scanf("%d",&a[i]);
	printf("Dame la componente %d de c\n",i+1);
	scanf("%d",&c[i]);
	}
	printf("El array a contiene los valores:\n");
	for(i = 0; i < b;i++ )
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("El array b contiene los valores:\n");
	for(i = 0; i < b;i++ )
	{
		printf("%d\t",c[i]);
	}
	printf("\n");
	printf("La suma a + b es:");
	for(i = 0; i < b;i++ )
	{
		printf("%d\t",a[i]+c[i]);
	}
	printf("\n");
	printf("El array d tiene los elementos:");
	for(i = 0; i < 5;i++ )
	{
		printf("%d\t",d[i]);
	}
	printf("\n");	
	int elem;
	elem = sizeof(e) / sizeof(int);
	printf("El array e tiene los elementos:");
	for(i = 0; i < elem;i++ )
	{
		printf("%d\t",e[i]);
	}
	printf("\n");
	printf("El producto punto entre a y b es:");
	int tmp = 0;
	for(i = 0; i < b;i++ )
	{
		tmp = tmp + a[i]*c[i];
	}
	printf("%d",tmp);
	printf("\n");
}
