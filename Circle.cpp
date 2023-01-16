// Circle
#include<iostream>
using namespace std;
int circle(int n, int k) 
{ 
if (n == 1) 
	return 1; 
else
	return (circle(n - 1, k) + k-1) % n + 1; 
} 
 
int main() 
{ 
	int n, k;
	cout<< " Total number of people : ";
  	cin>>n;
  	cout<< " Kth person to be killed : ";
  	cin>>k;
  	cout<<"Position of the person who will survive all N-1 rounds : ";
    cout<< circle(n, k); 
    return 0; 
}
