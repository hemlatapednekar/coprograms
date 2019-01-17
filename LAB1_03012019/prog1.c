#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void decimal_binary(int);
void binary_decimal(int);
int main()
{

    int num,ch;
    do
    {
        printf("\n1.Decimal to binary");
        printf("\n2.Binary to decimal");
        printf("\n3.exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the decimal number: ");
                   scanf("%d",&num);
                   decimal_binary(num);
                   break;
            case 2:printf("Enter the binary number: ");
                   scanf("%d",&num);
                   binary_decimal(num);
                   break;
            case 3:exit(1);
            default:printf("Invalid choice!!!");
        }
    }while(ch!=4);
    return(0);
}


void decimal_binary(int n)
{
    int i,j,p[10],num;
    num=n;//store the original number //
    for(i=0;n>0;i++)
        {
            p[i]=n%2;//remainder
            n=n/2;        //quotient
        }

    printf("The binary equivalent of %d is: ",num);
    for(j=i-1;j>=0;j--)
     printf("%d",p[j]);
     printf("\n\n");
}



void binary_decimal(int n)
{
    int sum=0,binary,base=1,rem,num;
    num=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*base;
        n=n/10;
        base=base*2;
    }
    printf("Decimal equivalent of the binary number %d is:%d",num,sum);
    printf("\n\n");
}
