#include <stdio.h>
#include <stdlib.h>
/* bubble sort
 * pior caso n², melhor caso n
 */

//Irineu A. Silva
void bubble_sort(int *v, int tam);
int main()
{
	int *vetor, tam, i;
	printf("Tam: %d", &tam);
	vetor=(int*)malloc(sizeof(int)*tam);
	for(i=0; i<tam; i++)
	{
		scanf("%d", &vetor[i]);
		fflush(stdin);
	}
	bubble_sort(vetor, tam);

	return 0;
}

void bubble_sort(int *v, int tam)
{

}
