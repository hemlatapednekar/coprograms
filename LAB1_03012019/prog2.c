#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void decimaltohexa(int num);

int main()
{

    int num,ch;
    do
    {
        printf("\n1.Decimal to hexa");
        printf("\n2.Binary to decimal");
        printf("\n3.exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the decimal number: ");
                   scanf("%d",&num);
                    decimal_hexadecimal(num);
                   break;

            case 2:exit(1);
            default:printf("Invalid choice!!!");
        }
    }while(ch!=1);
    return(0);
}




void decimal_hexadecimal(int num)
{
  int i=0,temp=0,n,j;
   n=num;
  char hexadecimal[10];
  while(n!=0)
  {
     temp=n%16;
     if(temp<10)
     {
        hexadecimal[i] = temp + 48;
        i++;
     }
     else
     {
        hexadecimal[i]=temp+55;
        i++;
     }
     n=n/16;
  }
  for(j=i-1;j>=0;j--)
  {
     printf("%c",hexadecimal[j]);
  }
}
