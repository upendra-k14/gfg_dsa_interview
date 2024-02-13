#include <bits/stdc++.h>
using namespace std;

/*
Count number of digits in an integer
*/

int count_digit(long long n)
{
    if(n == 0)
    {
        return 1;
    }

    else
    {
        int count = 0;
        while(n > 0)
        {
            n = n / 10;
            count++;
        }
        return count;
    }
}

// Driver code
int main()
{
    long long n = 345289467;
	cout << "Number of digits : " << count_digit(n) << endl;
	return 0;
}