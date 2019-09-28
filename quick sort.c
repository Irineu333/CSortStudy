#include <stdio.h>
#include <stdlib.h>
/* quick sort
 *
 */

//Irineu A. Silva
void quick_sort(int *v, int tam);
int main()
{
	int *vetor, tam, i;
	printf("Tam:"); scanf("%d", &tam);
	vetor=(int*)malloc(sizeof(int)*tam);
	for(i=0; i<tam; i++)
	{
		scanf("%d", &vetor[i]);

	}
	quick_sort(vetor, tam);

	return 0;
}

void quick_sort(int *v, int tam)
{

}
