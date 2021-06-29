//day3 q5  
#include <stdio.h>
#define INT_MIN -2147483648

int main()

{
    int arr[50], i, Size;
	int first, second;
	printf("Please Enter the Number of elements in an array : ");
	scanf("%d", &Size);
	printf("Please Enter elements: \n", Size);

	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	first = second = INT_MIN;  
	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
	}

	if(second == 0)
	{
		printf("The Second Largest Number in this Array =  %d", INT_MIN);
	}
	else
		printf("The Second Largest Number in this Array =  %d", second);

	return 0;
} 
