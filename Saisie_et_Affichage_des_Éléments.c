#include <stdio.h>

int main()
{
    int i, nb;

    printf("Give number of elements you want: ");
    scanf("%d", &nb);

    int arr[nb];
    for (i = 0; i < nb; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements you entered are:\n");
    for (i = 0; i < nb; i++)
    {
        printf("%d\n", arr[i]);
    }

}
