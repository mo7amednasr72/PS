#include<iostream>
using namespace std;

int main() {


	short int L, h, v;

	cin>>L>>h>>v;

	double dis_from_harry = h * (double(L)/ (h + v)); 

	cout<<dis_from_harry<<endl;

	
	return 0 ;

}