#include<stdio.h>
#include"unity.h"
int armstrong_numbers(int n)
{
    int i,k,r;
    i=n;
    k=0;
    while (n>0)
    {
        r=n%10;
        k=k+(r*r*r);
        n=n/10;
    }
    if(i==k)
    return i;
}
int palindrome_numbers(int n)
{
   int i,k,r;
   i=n;
    k=0;
    while (n>0)
    {
        r=n%10;
        k=(k*10)+r;
        n=n/10;
    }
    if(i==k)
    return i;
}
void automated_test_armstrong_numbers()
{
    TEST_ASSERT_EQUAL(153, armstrong_numbers(153));
    TEST_ASSERT_EQUAL(370, armstrong_numbers(370));
    TEST_ASSERT_EQUAL(407, armstrong_numbers(407));
    TEST_ASSERT_EQUAL(1634, armstrong_numbers(1634));
    TEST_ASSERT_EQUAL(9474,  armstrong_numbers(9474));
    TEST_ASSERT_EQUAL(54748, armstrong_numbers(54748));
        
}
void automated_test_palindrome_numbers()
{
    TEST_ASSERT_EQUAL(121, palindrome_numbers(121));
    TEST_ASSERT_EQUAL(77, palindrome_numbers(77)); 
    TEST_ASSERT_EQUAL(545, palindrome_numbers(545));
    TEST_ASSERT_EQUAL(6336, palindrome_numbers(6336));
    TEST_ASSERT_EQUAL(8998, palindrome_numbers(8998));
    TEST_ASSERT_EQUAL(9999, palindrome_numbers(9999));  
}

#if 0
int main()
{
  automated_test_armstrong_numbers();
  automated_test_palindrome_numbers();
  return 0;
}
#endif
