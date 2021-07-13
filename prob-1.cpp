/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. */
#include <iostream>
using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0;

    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum1 += i;
        }
    }
    for (int j = 0; j < 1000; j++)
    {
        if (j % 15 == 0)
        {
            sum2 += j;
        }
    }
    cout << sum1 - sum2;

    return 0;
}