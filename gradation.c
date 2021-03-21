#include <stdio.h>
int main()
{
    int a;
    printf("Enter your marks:");
    scanf("%d", &a);

    if (a >= 90)
    {
        printf("Your grade is A\n Excellent");
    }
    else if (a<90 && a>80)
    {
        printf("Your grade is B\n Very Good");
    }
    else if (a<80 && a>70)
    {
        printf("Your grade is C\n Good");
    }
    else
    {
        printf("Your grade is D\n You can do better");
    }
    return 0;
}