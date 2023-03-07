/*Write a program to swap 2 values of a variables by using pointer. */
#include<stdio.h>
void swap(int *a,int *b);

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

void main()
{
    int x,y;
    printf("Enter x; ");
    scanf("%d",&x);
    printf("Enter y; ");
    scanf("%d",&y);

printf("x=%d \ny=%d\n",x,y);

printf("After swap\n");
swap(&x,&y);
printf("x=%d \ny=%d",x,y);

}