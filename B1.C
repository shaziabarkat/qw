#include<stdio.h>
#include<conio.h>
void main()
{
  int num,reverse=0,temp;
  printf("enter the no: ");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
  {

    reverse=reverse * 10 + temp%10;
    temp=temp/10;
  }
  if(num==reverse)
  {
   printf("palindrome");
   }
   else
   {
   printf("not palindrome");
   }
   getch();
}