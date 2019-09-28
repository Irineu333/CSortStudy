#include <stdio.h>
#include <stdlib.h>
/* merge sort
 * nlogn em todos os casos
 */

//Irineu A. Silva
void merge_sort(int *v, int tam);
int main()
{
	int *vetor, tam, i;
	printf("Tam:"); scanf("%d", &tam);
	vetor=(int*)malloc(sizeof(int)*tam);
	for(i=0; i<tam; i++)
	{
		scanf("%d", &vetor[i]);

	}
	merge_sort(vetor, tam);

	return 0;
}

void merge_sort(int *v, int tam)
{

}
