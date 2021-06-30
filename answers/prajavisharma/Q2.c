

#include <stdio.h>
#include <stdlib.h>



struct pairSum {

	
	int first;

	
	int sec;

	int sum;
};


int compare(const void* a, const void* b)
{
	return ((*(pairSum*)a).sum - (*(pairSum*)b).sum);
}


bool noCommon(struct pairSum a, struct pairSum b)
{
	if (a.first == b.first || a.first == b.sec
		|| a.sec == b.first || a.sec == b.sec)
		return false;
	return true;
}


void findFourElements(int arr[], int n, int X)
{
	int i, j;


	int size = (n * (n - 1)) / 2;
	struct pairSum aux[size];


	int k = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			aux[k].sum = arr[i] + arr[j];
			aux[k].first = i;
			aux[k].sec = j;
			k++;
		}
	}

	
	qsort(aux, size, sizeof(aux[0]), compare);

	
	i = 0;
	j = size - 1;
	while (i < size && j >= 0) {
		if ((aux[i].sum + aux[j].sum == X)
			&& noCommon(aux[i], aux[j])) {
			printf("%d, %d, %d, %d\n", arr[aux[i].first],
				arr[aux[i].sec], arr[aux[j].first],
				arr[aux[j].sec]);
			return;
		}
		else if (aux[i].sum + aux[j].sum < X)
			i++;
		else
			j--;
	}
}


int main()
{
	int arr[] = { 10, 20, 30, 40, 1, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int X = 91;
	
	
	findFourElements(arr, n, X);
	return 0;
}
