#include<stdio.h>
void binarytodec(int);
void dectobinary(int);

int main()
{
      int n,b,d;

      printf("\n 1 to convert binary to decimal \n 2. to convert decimal to binary ");
      printf("\n Enter ur choice");
      scanf("%d",&n);
      switch(n)
      {
        case 1:printf("\n Enter binary number");
               scanf("%d",&b);
               binarytodec(b);

        case 2:printf("\n Enter decimal no ");
               scanf("%d",&d);
               dectobinary(d); equivant is %d",)
      }

    return 0;


}


void binarytodec(int b)
{
    int sum=0;
    while(b>0)
    {

    }


}


void dectobinary(int d)
{
   int num,rem;
   while(d>0)
   {
     num=d%2+10;
     num=d%2;
     rem=num/10;
     printf("\n number is %d",num);
   }
