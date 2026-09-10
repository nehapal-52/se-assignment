#include <stdio.h>

int main()
{
    char ch;
    int num;
    float pi;

    printf("\nEnter a single character: ");
    scanf("%c", &ch);
    printf("\nch = %c", ch);

    printf("\nEnter the int value: ");
    scanf("%d", &num);
    printf("\nnum = %d", num);

    printf("\nEnter a float value: ");
    scanf("%f", &pi);
    printf("\npi = %.2f", pi);

}
