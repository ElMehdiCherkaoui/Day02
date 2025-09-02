#include <stdio.h>
int main()
{
    int i, nb,multipler,last;

    printf("Give number of elements you want: ");
    scanf("%d", &nb);

    int arr[nb];
    for (i = 0; i < nb; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Give number of multiple you want: ");
    scanf("%d", &multipler);
    for (i = 0; i < nb; i++) 
    {
        last = arr[i];
        arr[i] *= multipler;
        printf("%d*%d = %d\n", last, multipler,arr[i]);
    }
}