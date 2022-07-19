#include<iostream>
using namespace std;

int main() {


	int n ;
	cin>>n;
    
	int ans = (n / 5) + (n % 5 != 0); // ans = ( n / 5 ) + ( n % 5 != 0   ? 1  : 0 );

	cout<<ans<<endl;

	return 0 ;

}