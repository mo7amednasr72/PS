#include<iostream>
using namespace std;

int main() {


	int a, b;

	cin>>a>>b;

	int sum  = a + b ;

	int subtraction = a - b ;
	
	int multiplication = a * b;

	if (sum >= subtraction && sum >= multiplication)
		cout<<sum<<endl;

	else if ( subtraction >= multiplication)
		cout<<subtraction<<endl;

	else
		cout<<multiplication<<endl;			 
	
	  return 0 ;
}
