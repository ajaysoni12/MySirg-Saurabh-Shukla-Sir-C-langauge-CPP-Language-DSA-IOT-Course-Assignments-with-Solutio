#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many number, cube you want to print: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i * i * i);
    return 0;
}