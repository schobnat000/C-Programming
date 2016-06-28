#include "sort1.h"

void sort1(int * a, int num)
 {
   int i, j, temp;
 
   for (i = 1; i < num; i++)
    {
      for (j = 0; j < num - 1; j++)
       {
         if (a[j] > a[j + 1])
          {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
          }
         }
      }
   }
}