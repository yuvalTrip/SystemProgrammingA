#include <stdio.h> 
#include <math.h>
#include "NumClass.h"

/*int main()
{
    int n; 
    printf("Please enter a number:");  // Input any number from user
    scanf("%d", &n); 
    if(isStrong(n)==1)
    {
        printf("this is yes");
        return 1;
    }
    else 
    {
    printf("this is no");
    return 0;
    }
    
}*/
 
int Factorial (int);

int isStrong(int n) {
     if (n==0)
     {
         return 0;//because 0 is not a strong num (0!=1)
     }
    int temp =n; 
    int ans=0; 
    int mod; 
    //printf("Enter a Number");
    while (temp!=0){
        mod= temp%10; 
        ans =ans+ Factorial(mod); 
        temp= temp/10; 
    }
    if (ans==n)
    {
        return 1;
    }
     else return 0 ; 
 }
 int Factorial (int n){
     int ans=1; 
     if (n==0)
     {
         return 1;
     }
     for ( int i = 1; i <=n ; i++)
     {
         ans= ans* i;
     }
     return ans;
 }

/*int main()
{
    int n; 
    printf("Please enter a number:");  // Input any number from user
    scanf("%d", &n); 
    if(isPrime(n)==1)
    {
        printf("this is yes prime");
        return 1;
    }
    else 
    {
    printf("this is no prime");
    return 0;
    }   
}*/
 int isPrime(int n)
 {  
     for ( int i = 2; i <=n/2 ; i++)
     {
         if (n%i==0)
         {
             return 0;
         }     
     }
    return 1;
}