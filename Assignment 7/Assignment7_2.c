#include<stdio.h>
int Countodd(int iNo)
{
	int icnt=0;
  if(iNo<0)
 {
 iNo = -iNo;
 }
  while(iNo>0)
 {
    if(((iNo%10)%2)!=0)
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
 iRet = Countodd(iValue);
 printf("%d",iRet);
 return 0;
} 