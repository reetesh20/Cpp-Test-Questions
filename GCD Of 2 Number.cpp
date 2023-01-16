// GCD of 2 Numbers

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b != 0)
	return gcd(b, a % b);
	else
	return a;
}

int main()
{
	int a, b;
	cout << "Enter 1st number: ";
	cin >> a;
	cout << "Enter 2nd number: ";
	cin >> b;
	cout << "\nGCD of " << a << " and " << b << " is: "<< gcd(a,b);
	cout << endl;
	return 0;
}
