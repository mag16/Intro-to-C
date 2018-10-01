#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
    for (int i = 0; i < 100; i++)
        if (n % 3 == 0 && n % 5 == 0) 
        {
            return 'fizzbuzz';
        }
        elif (n % 3 == 0)
        {
            return 'fizz';
        }
        elif (n % 5 ==  0)
        {
            return 'buzz';
        }

        elif (n % 3 != 0 || n % 5 != 0)
        {
            return n;
        }
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
