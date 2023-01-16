// Emperor Program

#include <iostream>
using namespace std;

int power_of_a_number(int base, int exponent)
{
if (exponent != 0)
return (base * power_of_a_number(base, exponent-1));
else
return 1;
}

int main()
{
int base, exponent;
cout << "\nEnter the base number : ";
cin >> base;
cout << "\nEnter the exponent value : ";
cin >> exponent;

cout << "\nResultant is : " << power_of_a_number(base, exponent) << endl;
return 0;
}

