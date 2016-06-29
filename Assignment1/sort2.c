#include "sort2.h"

void sort2(int *a, int n) {

	for(int x=0; x < n; x++)

	{

		int index_of_min = x;

		for(int y = x; y < n; y++)

		{

			if(a[index_of_min]>a[y])

			{

				index_of_min = y;

			}

		}

		int temp = array[x];

		a[x] = array[index_of_min];

		a[index_of_min] = temp;

	}

}   
