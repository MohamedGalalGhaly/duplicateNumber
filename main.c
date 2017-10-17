#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, arr_size;

    printf("Please enter array size \t");
    scanf("%i",&arr_size);

    int *arr = (int*) malloc (arr_size * sizeof (int));

    printf("Please enter array elements \t");

    for (i=0; i<arr_size; i++)
    {
        scanf("%i",(arr+i));
    }

    printf ("\nDuplicate numbers are: ");
    for (i=0; i<arr_size; i++)
    {
        for (j=i+1; j<arr_size; j++)
        {
            if (arr [i] == arr [j])
            {
                printf ("%i \t", arr [i]);
            }
        }
    }

    return 0;
}
