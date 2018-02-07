#include<stdio.h>
    void main()
    {
                  int x, y;
                  printf("Enter any two integer numbers : ");
                  scanf("%d %d", &x, &y);
                  printf("\n The value of x before swapping is %d", x);
                  printf("\n The value of y before swapping is %d", y);
                  x = x + y;
                  y = x - y;
                  x = x - y;
                  printf("\n The value of x after swapping is %d", x);
                  printf("\n The value of y after swapping is %d", y);
    getch();
    }
