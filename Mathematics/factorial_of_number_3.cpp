#include <bits/stdc++.h>
using namespace std;

long long factorial_n(int n)
{

    long long t_product = 1;
    
    while(n > 0)
    {
        t_product = (t_product * (long long)n);
        n--;
    }

    return t_product;
}


int main()
{
    int num = 5;
	cout << "Factorial of " << num << " is "
		<< factorial_n(num) << endl;
	return 0;
}