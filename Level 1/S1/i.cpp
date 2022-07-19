#include<iostream>
using namespace std;

int main() {


	short int n , m;
	cin>>n>>m;
    
	short int ans = (m * (n / 2)) + (( n % 2) * (m / 2)); // u have it in ur notebook

	cout<<ans<<endl;

	return 0 ;

}