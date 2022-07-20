#include<iostream>
using namespace std;

int main() {


	short int  V, T, S, D ;
	cin>> V>>T>>S>>D;

	if (D > (V*S) || D < (T*V))
	
		cout<<"Yes"<<endl;

	

	else
		cout<<"No"<<endl;
		
	  return 0 ;
}
