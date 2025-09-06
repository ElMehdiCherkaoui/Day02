int ft_is_even_odd(int n)
{
    if( n % 2 == 0)
        return 0;

    else if(n %2 == 1)
        return 1;
}
#include <stdio.h>
int main()
{
    int n;
    printf("give number you want to check if odd or even : ");
    scanf("%d",&n);
    int check = ft_is_even_odd(n);
    if(check == 0)
        printf("even");
    if(check == 1)
        printf("odd");  
}