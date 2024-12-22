#include <stdio.h>

void bubbleSort(int array[], int size)
{
	for(int step = 0; step < size - 1; ++step)
	{
		for(int i = 0;i < size - step - 1;++i)
		{
			if (array[i] > array [i+1])
			{
				int temp = array [i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}	
	}	
}

void printArray(int array[], int size)
{
	for (int i = 0;i < size;++i)
	{
		printf("%d ", array[i]);
	}	
	printf("\n");
}


int main(){
	int data[] = {80, 40, 20, 76, 11, 35};
	int size = sizeof(data) / sizeof(data[0]);
	bubbleSort(data, size);
	printf("Sorted Array in acascending Order:\n");
	printArray(data,size);
}
