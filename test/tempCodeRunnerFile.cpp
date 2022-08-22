#include <iostream>
using namespace std;

void print (int n)
{
	if (n)
	{
		
		
	}
	cout<< n;
	print (n-1);
	
}

int main()
{
	print (5);
}