#include<stdio.h>
#include<stdlib.h>

void display(int [],int size);
void bubble_sort(int [],int size);
void selection_sort(int [],int size);
void insertion_sort(int [],int size);

int main(){
	int Pilihan,size;
	int data[] ={80, 40, 20, 76, 11, 35};
	int arr[size];
	
	while(1)
{
	printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n5. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&Pilihan);
    switch(Pilihan)
    {
    case 1:
        bubble_sort(arr,size);
        break;
    case 2:
        selection_sort(arr,size);
        break;
    case 3:
        insertion_sort(arr,size);
        break;
    case 4:
        return 0;
    default:
        printf("\nPlease Select only 1-5 option ----\n");
    }
}
return 0;
}

void printArray(int array[], int size)
{
	for (int i = 0;i < size;++i)
	{
		printf("%d ", array[i]);
	}	
	printf("\n");
}

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
	int size = sizeof(data) / sizeof(data[0]);
	selectionSort(data,size);
	printf("Sorted Array in Acsending Order;\n");
	printArray(data, size);		
}

