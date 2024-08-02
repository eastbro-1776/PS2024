#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n)
{
	if (n < 2) return false;
	for (long long i = 2; i <= sqrt(n) ; i++)
		if (n % i == 0) return false;
	return true;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		while (!isPrime(n)) {
			n++;
		}
		cout << n << '\n';
	}
}