#include <stdio.h>
#include <stdlib.h>
/* seletion sort
 * n² em todos os casos, é o pior
 */

//Irineu A. Silva
void seletion_sort(int *v, int tam);

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
	seletion_sort(vetor, tam);

	return 0;
}
void seletion_sort(int *v, int tam)
{

}
