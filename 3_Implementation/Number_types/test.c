#include "unity.h"

extern void automated_test_prime_numbers();
extern void automated_test_perfect_numbers();
extern void automated_test_armstrong_numbers();
extern void automated_test_palindrome_numbers();

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_test_prime_numbers);
    RUN_TEST(automated_test_perfect_numbers);
    RUN_TEST(automated_test_armstrong_numbers);
    RUN_TEST(automated_test_palindrome_numbers);

    return (UnityEnd());
}
