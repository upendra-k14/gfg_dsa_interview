#include <bits/stdc++.h>
using namespace std;

/*
Check whether the given number is palindrome
*/

int check_palindrome(int n) {
    int copy_n = n;
    int reverse_n = 0;

    while(copy_n > 0)
    {
        reverse_n = 10 * reverse_n + copy_n%10;
        copy_n = copy_n / 10;
    }
    //cout << reverse_n << endl;

    return ((n == reverse_n) ? 1 : 0);
}
int main()
{
    int n = 7007;
	if (check_palindrome(n) == 1) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}