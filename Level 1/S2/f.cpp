#include<iostream>
using namespace std;

int main() {


	int m;
	cin>>m;

	int frist_digit = m % 10;
	int last_digit = m / 100;
 
	if ( frist_digit == last_digit )
		 cout<<"Yes"<<endl;

	else
		cout<<"No"<<endl;	 



				 
	
	  return 0 ;
}
