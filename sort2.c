void sort2(int * a, int n)
{  
    int i, j;  
    int count[n]; 
    for (i = 0; i < n; i++)
        count[i] = 0;
 
    for (i = 0; i < n; i++)
        (count[a[i]])++;
 
    for (i = 0, j = 0; i < n; i++)  
        for(; count[i] > 0; (count[i])--)
            a[j++] = i;
}   