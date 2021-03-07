#include<stdio.h>
int CountDiff(int iNo)
{
	int icnt=0; 
	int icnt1=0;
if(iNo<0)
 {
 iNo = -iNo;
 }
 while(iNo>0)
 {
	if(((iNo%10)%2)==0)
	{
		icnt=icnt+(iNo%10);
	}
	else
	{
		icnt1=icnt1+(iNo%10);
	}
	iNo=iNo/10;
 }
 return icnt-icnt1;
}
int main()
{
 int iValue = 0;
 int iRet = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet = CountDiff(iValue);
 printf("%d",iRet);
 return 0;
}