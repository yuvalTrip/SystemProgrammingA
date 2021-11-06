
#include <stdio.h> 
#include <math.h>
 /* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
*/
int isArmstrong(int); //function decleration
int isArmstrongRec(int,int); //function decleration
int reverse(int,int);
int getLen (int);
/*int main()
{
    int num, ans;
    printf("Please enter a number:"); // Input any number from user
    scanf("%d", &num);
    printf("input is %d\n", num);
    int temp_forLen=num;
    while (temp_forLen!=0){//compute the lenght of the number
        temp_forLen=temp_forLen/10;
        count++; 
    }
    ans=isArmstrong(num); //call to the function
    if (ans==num) 
    {
        printf("this is yes\n");
        return 1;//if it is Armstrong return true
    }
    else
    {
        printf("this is no");
        return 0;//if it is not Armstrong return false
    }
} */
int getLen (int number)
{//function compute the lenght of the number
  int temp=number;
  int tempCount=0;
  while (temp!=0)
    {
        temp=temp/10;
        tempCount++; 
    }
    return tempCount;
} 
 int isArmstrong(int ArmNum)//function definition
 {
     //printf("%d  count=%d\n",ArmNum,count); //just to check
    int NumToCheck=isArmstrongRec(ArmNum,getLen (ArmNum));
    //printf("%")
    if (ArmNum==NumToCheck)
        {
            return 1;
        }
        else
        {
            return 0;
        }  
 }

 int isArmstrongRec (int ArmNum1, int len)
 {
        if (ArmNum1==0)
    {
        //printf("%d\n",ArmNum1);//just to check
        return 0;
    }
    else
    {
        //printf("%d\n",ArmNum1); //just to check
        return ((pow(ArmNum1%10,len)) +isArmstrongRec(ArmNum1/10,len));//recursive call
    }
 }

 /* will return if a number is a palindrome */
int isPalindrome(int);//function decleration
/*int main()
{
    int num;   
    printf("Please enter a number:");    // Input any number from user 

    scanf("%d", &num);
    
    if(isPalindrome(num) == 1)
    {
        printf("this is yes\n");
        return 1;
    }
    else
    {
        printf("this is no\n");
        return 0;
    }
}*/
int isPalindrome(int num){//function definition
    if(num == reverse(num,0))
    {
        return 1;
    }
    return 0;
}


int reverse(int num,int sum)
{
    int rem;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            return reverse(num/10,sum);
    }
        else
            return sum;   
} 