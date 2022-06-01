#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,r;
	printf("\n ingrese el numero para tabla:   ");
	scanf("%d",&n);
	for(i=1;i<=12;i++)
	{
		r=n*i;
		printf("%dx%d=%d\n",n,i,r);
	}
  getch();
}

