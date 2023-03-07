/*Write a program to create a person structure having age and weight as structure 
variables. Get the data and print the data using pointers. Use concept of pointers 
with structure. */
#include<stdio.h>

struct person
{
int age;
int weight;
};

void main()
{
struct person info;
struct person *ptr;
ptr=&info;
printf("Enter age: ");
scanf("%d",&info.age);
printf("Enter weight: ");
scanf("%d",&info.weight);
printf("agr= %d\n",(*ptr).age);
printf("Weight= %d",(*ptr).weight);
}