#include <stdio.h>

void printArray(int array[],int size)
{
	for (int i = 0; i < size;i++)
	{
		printf("%d ",array[i]);
	}	
	printf("\n");
}

void insertionSort(int array[],int size)
{
	for(int step = 1;step < size;step++)
	{
		int key = array[step];
		int j = step - 1;
		while (key < array[j] && j >= 0)
		{
			array[j + 1] = array[j];
			--j;
		}
		array[j + 1] = key;
	}
}

int main()
{
	int data[] ={80, 40, 20, 76, 11, 35};
	int size = sizeof(data) / sizeof(data[0]);
	insertionSort(data,size);
	printf("Sorted Array in Acsending Order;\n");
	printArray(data, size);	
}
