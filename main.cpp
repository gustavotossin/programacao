#include <iostream>


int main() {
	
	int v[10];
	int aux;
	int i;
	int n;
	
	for(i=0; i<10; i++)
	{
		printf("digite um numero:");
		scanf("%d", &v[i]);
	}
	
	printf("\ndigite um outro numero: ");
	scanf("%d", &n);
	
	for(i=0; i<10; i++)
	{
		if(v[i] < n)
		{
			printf("\n%d\n", v[i]);
		}
	}
	
	
	return 0;
}
