
#include<stdio.h>
#include <math.h>
#include "NumClass.h"
void Check_Armstrong_pali_prime_strong (int,int);//this is for only armstrong
int main()
{
    int x,y;
    printf("Please enter two numbers:");
    scanf("%d %d", &x,&y);
    Check_Armstrong_pali_prime_strong(x,y);
}

void Check_Armstrong_pali_prime_strong(int a, int b){
  int maxNum,minNum;
  if (a>=b) 
  {
    maxNum=a;
    minNum=b;
  }
  else if (b>a)
  {
    maxNum=b;
    minNum=a;
  }
    printf("The Armstrong numbers are:");
    for (int i =minNum ; i <=maxNum; i++)
    {
        if(isArmstrong(i)==1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i =minNum ; i <=maxNum; i++) 
    {
        if(isPalindrome(i)==1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i =minNum ; i <=maxNum; i++) 
    {
       if(isPrime(i)==1)
        {
          printf("%d ", i);
        }   
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i =minNum ; i <=maxNum; i++) 
    {
      if(isStrong(i)==1)
      {
            printf("%d ", i);
      }
    }
    printf("\n");
}

/*int Check_Armstrong_pali_prime_strong (int,int);//this is for only armstrong
int main()
{
  int Number,Reminder,Reverse,Temp, Sum;
  int Minimum,Maximum;
  printf("\nPlease Enter the Minimum & Maximum Values\n");
  scanf("%d %d",&Minimum, &Maximum);
  printf("Armstrong Numbers Between %d and %d are:\n",Minimum, Maximum);
  Check_Armstrong_pali_prime_strong(Minimum,Maximum);
}
int Check_Armstrong_pali_prime_strong (int firstNumber ,int secNumber)
{
  isPalindrome(firstNumber);
}*/