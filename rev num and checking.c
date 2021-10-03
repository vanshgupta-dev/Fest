#include<stdio.h>

int main()
{
    int num, n, revnum=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while(num!=0)
    {
        revnum = revnum * 10;

        revnum = num % 10 + revnum;
        num = num/10;
    }
    printf("Reversed Number of %d is %d\n",n, revnum);

    if (n==revnum)
        printf("Input Number %d & Reversed Number %d are equal", n, revnum);
    else
        printf("Input Number %d & Reversed Number %d are not equal", n, revnum);

   return 0;
}