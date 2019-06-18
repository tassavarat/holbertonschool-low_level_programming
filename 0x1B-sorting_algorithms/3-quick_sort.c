#include "sort.h"

/**
 * 
 */
void swap(int *array, size_t size, int *i, int *j)
{
    int temp;

    temp = *j;
	*j = *i;
    *i = temp;
    if (*i != *j)
    {
        print_array(array, size);
    }
	
}
/**
 * 
 */
int partition(int *array, size_t size, int lo, int hi)
{
    int i = lo -1, pivot = array[hi];
    int j;

    for (j = lo; j <= hi - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(array, size, &array[i], &array[j]);
        }
    }
    /**Do I imcrement i by 1 here?
     * if I do not then hi works as expected,
     * if I do then pivot works
     * how to get both?
     */
    swap(array, size, &array[i + 1], &array[hi]);
    return (i + 1);
}
/**
 * 
 */
void sort(int *array, int lo, int hi, size_t size)
{
    int p;
    if (lo < hi)
    {

        p = partition(array, size, lo, hi);
        sort(array, lo, p - 1, size);
        sort(array, p + 1, hi, size);
        
    }
}
/**
 * 
 */
void quick_sort(int *array, size_t size)
{

    sort(array, 0, size - 1, size);
}
