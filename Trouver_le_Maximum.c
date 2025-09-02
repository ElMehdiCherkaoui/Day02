#include <stdio.h>
int main()
{
    int i, nb, c;

    printf("Give number of elements you want: ");
    scanf("%d", &nb);

    int arr[nb];
    for (i = 0; i < nb; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    c = arr[0]; 
    for (i = 1; i < nb; i++) 
    {
        if (arr[i] > c)
        {
            c = arr[i]; 
        }
    }

    printf("max est : %d\n", c);

}
