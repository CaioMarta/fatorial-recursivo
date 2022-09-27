#include <stdio.h>

int fatorial ( int n)
{	
	if ( n==0)
	{
		return 1;
	}
	else
	{
		return (n * fatorial (n-1));	
	}		
}

int main()
{
	int n, resp;
	printf("Digite um Numero: ");
	scanf("%d", &n);
	resp = fatorial (n);
	printf("Fatorial de %d = %d",n , resp);
}