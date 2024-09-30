#include<iostream>
using namespace std;

int main(){

	int n, check;

	cout << "Input a number: ";
	cin >> n;
	cout << n << " ";

	while (n!=1){

		check = n%2; //check whether n%2 got remainder
	
	if (check==1){
		n = 3*n+1;
		cout << n <<" ";
	}
	else{
		n = n/2;
		cout << n <<" ";
	}
	}
	return 0;
}
