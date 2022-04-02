#include<stdio.h>
#include"unity.h"
int prime_numbers(int n)
{
    int i,k;
    i=1;
    k=0;
    while (i<=n)
    {
        if(n%i==0)
        k=k+1;
        i++;
    }
    if(k==2)
    return n;
}
int perfect_numbers(int n)
{
    int i,k;
    i=1;
    k=0;
    while (i<n)
    {
        if(n%i==0)
        k=k+i;
        i++;
    }
    if(k==n)
    return n;
}

void automated_test_prime_numbers()
{
    TEST_ASSERT_EQUAL(71, prime_numbers(71));
    TEST_ASSERT_EQUAL(43, prime_numbers(43));
    TEST_ASSERT_EQUAL(107,prime_numbers(107));
    TEST_ASSERT_EQUAL(137,prime_numbers(137));
    TEST_ASSERT_EQUAL(293,prime_numbers(293));  
    TEST_ASSERT_EQUAL(997,prime_numbers(997));
}
void automated_test_perfect_numbers()
{
    TEST_ASSERT_EQUAL(6, perfect_numbers(6));
    TEST_ASSERT_EQUAL(28, perfect_numbers(28));
    TEST_ASSERT_EQUAL(496, perfect_numbers(496));
    TEST_ASSERT_EQUAL(8128, perfect_numbers(8128));
    TEST_ASSERT_EQUAL(33550336, perfect_numbers(33550336));
    TEST_ASSERT_EQUAL(8589869056, perfect_numbers(8589869056));
}

#if 0
int main()
{
    automated_test_prime_numbers();
    automated_test_perfect_numbers();
    return 0;
}

#endif
