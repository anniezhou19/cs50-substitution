# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int n,i,j,k;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        
        for (k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
