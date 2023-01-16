// Robot wants to move through a cave

#include <iostream>
using namespace std;

int ways(int cr,int cc, int r, int c)
{
	if(cr>r || cc>c)
	{
		return 0;
	}
	if(cr==r && cc==c)
	{
		return 1;
	}
	return ways(cr,cc+1,r,c)+ways(cr+1,cc,r,c);
}

int main()
{
	int m,n;
	cout<<"Enter no. of rows and columns : ";
	cin>>m>>n;
	
	cout<<"Number of ways to reach the destination : "<<ways(0,0,m-1,n-1);
	return 0;
}

