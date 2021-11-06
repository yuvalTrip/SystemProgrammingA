#ifndef _NUMCLASS_H_
#define _NUMCLASS_H_

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
*/
int isArmstrong(int);
/* will return if a number is a palindrome */
int isPalindrome(int);
/* will return if a number is prime*/
int isPrime(int);
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int);

#endif
