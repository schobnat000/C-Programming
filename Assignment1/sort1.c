#include "sort1.h"

void sort1(int *a, int n) {
  int i;
  for(i = 0; i < n; ++i) {

    int j;
    for (j = 0; j < n-1; j++) {

      if(a[j] > a[j+1]) {

        int temp = a[j+1];

        a[j+1] = a[j];

        a[j] = temp;

      }
    }
  }
}

/*

  for(int x=0; x<n; x++)

  {

    for(int y=0; y<n-1; y++)

    {

      if(array[y]>array[y+1])

      {

        int temp = array[y+1];

        array[y+1] = array[y];

        array[y] = temp;

      }

    }

  }
  */