#include <stdio.h>
#include <stdlib.h>
/* insertion sort
 * pior caso n², melhor caso n
 * xn sendo x o numero de numero fora da ordem
 * bom para poucos intens fora de ordem
 */

//Irineu A. Silva
void insertion_sort(int *v, int tam);
int main()
{
	int *vetor, tam, i;
	printf("Tam:"); scanf("%d", &tam);
	vetor=(int*)malloc(sizeof(int)*tam);
	for(i=0; i<tam; i++)
	{
		scanf("%d", &vetor[i]);
		fflush(stdin);
	}
	insertion_sort(vetor, tam);

	return 0;
}

void insertion_sort(int *v, int tam)
{

}
