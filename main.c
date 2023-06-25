#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int factorial = 1; // Change this to float or double according to your needs
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", num, factorial);
    return 0;
}
