#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;

int gcd(int a, int b);
vector<int> getFactors (int a);

int gcd(int a, int b)
{
    if (a == 0 || b == 0) return a+b;
    
    vector<int> afac = getFactors(a);
    vector<int> bfac = getFactors(b);
    
    int GCD = 1;
    int i = 1, j = 1;
    

    while (i < afac.size() && j < bfac.size()){
        if (afac[i] < bfac[j])
            i++;
        else if (afac[i] > bfac[j]) 
            j++;
        else{ 
            GCD *= afac[i];
            i++;
            j++;
        }
    }

    return GCD;
}

vector<int> getFactors (int a)
{
    vector<int> factors;
    int i = 2;
    while (a != 1) {
        while(a % i == 0){
            factors.push_back(i);
            a /= i;
        }
        i++;
    }
    return factors;
}

int main() 
{
    int x, y;
    cout << "Enter 1st number : ";
    cin >> x;
    cout << "Enter 2nd number : ";
    cin>> y;
    
    int GCD = gcd(x, y);
    
    cout << "GCD of (" << x << "," << y << ") is  = " << GCD;
    return 0;
}
