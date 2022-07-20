#include<iostream>
using namespace std;

int main() {


	long long n, k;
	cin>>n>>k;

	if (k <= (n+1)/2)
		cout<< (2 * k) - 1 <<endl;

	else
		cout<<2*(k - ((n+1)/2)) <<endl;	

	
		
	  return 0 ;
}

/*

#include<iostream>
using namespace std;

int main() {


	long long n, k;
	cin>>n>>k;

	long long half = n/2;
    
	if (half % 2 == 1)
		half++;

	if (k <= half){
		long long odd = (2 * k ) - 1;
	
		cout<<odd<<endl;
    }
	else{
		long long reset_pos = k - half;
		long long even = 2 * reset_pos;
		cout<<even <<endl;		

	}

	  return 0 ;
}
*/