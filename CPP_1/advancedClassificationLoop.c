#include <stdio.h> 
#include <math.h>
#include "NumClass.h"
/*int main()
{
    int n; 
    printf("Please enter a number");  // Input any number from user
    scanf("%d", &n); 
    if(isArmstrong(n)==1)
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

 /*int main()
 {
    int n; 
    printf("Please enter a number"); // Input any number from user 
    scanf("%d", &n); 
    if(isPalindrome(n)==1)
    {
        printf("this is yes");
        return 1;//if it is Palindrome return true
    }
        else
        {
            printf("this is no");
            return 0;//if it is not Palindrome return true
        } 
}*/

int isPalindrome(int n){//function definition
    int temp =n; 
    int ans=0; 
    int mod; 
    
    while (temp!=0){
        mod= temp%10; 
        ans = (ans*10)+mod; 
        temp= temp/10; 
    }
    if (ans==n)
    {
        return 1;
    }
     else return 0 ; 

 }

 int isArmstrong(int n ){
    int temp_forLen =n; 
    int temp_forCompute =n; 
    int ans=0; 
    int mod;
    int count =0;
    while (temp_forLen!=0){//find the lenght of the number
        temp_forLen=temp_forLen/10;
        count++; 
    }
    while (temp_forCompute!=0)
    {
        mod = temp_forCompute%10; 
        ans =ans + pow(mod,count);
        temp_forCompute= temp_forCompute/10; 
    }
    if (ans==n)
    {
        return 1;
    }
     else 
     {
         return 0 ; 
     }

 }

 
