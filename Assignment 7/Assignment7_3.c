#include<stdio.h>
int CountRange(int iNo)
{
int icnt=0;
int iDigit=0;
  if(iNo<0)
 {
 iNo = -iNo;
 }
  while(iNo>0)
 {
	iDigit=iNo%10;
    if((3<iDigit)&&(iDigit<7))
	{
		icnt++;
	}
	iNo=iNo/10;
 }
 return icnt;
}

int main()
{
 int iValue = 0;
 int iRet = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet = CountRange(iValue);
 printf("%d",iRet);
 return 0;
} 