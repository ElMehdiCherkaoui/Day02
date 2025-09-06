char *ft_strrev(char *str)
{
    int count_str_size = 0;
    char tmp;
    int i = 0;
    while(str[count_str_size] != '\0')
    {
        count_str_size++;
    }
    while (i < count_str_size / 2)
    {
        tmp = str[i];
        str[i] = str[count_str_size - 1];
        str[count_str_size - 1] = tmp;
        i++;
        count_str_size--;
    }
    return str;
}
#include <stdio.h>
int main()
{
    char str[100];
    printf("Give the character you want it inversed : ");
    scanf("%s",str);
    printf("%s", ft_strrev(str));
}