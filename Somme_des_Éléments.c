#include <stdio.h>

int main()
{
    int i, nb , somme = 0;

    printf("Give number of elements you want: ");
    scanf("%d", &nb);

    int arr[nb];
    for (i = 0; i < nb; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < nb; i++)
    {
        somme = somme + arr[i];
    }
    printf("somme : %d",somme);

}
