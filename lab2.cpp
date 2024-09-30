#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include "lab2.h"
using namespace std;

int main(){
	int h,m;
	int a,b;
	float c;
	value BMIValue;

	ifstream inFile("infile.txt",ios::in);
	ofstream outFile("outfile.txt",ios::out);

	if(!inFile){
		cerr<<"Failed Opening"<<endl;
		exit(1);
	}
	if(!outFile){
		cerr<<"Failed Opening"<<endl;
	}
	
	for(int x=0;x<6;x++){
		inFile>>h;
		inFile>>m;
		cout<<h<<"   "<<m<<endl;
		b=h;
		a=m;
		BMIValue.setHeight(b);
		BMIValue.setMass(a);
		c=BMIValue.bmivalue(a,b);
		//cout<<"   "<<c<<"   "<<BMIValue.Category(c)<<endl;
		outFile<<c<<"   "<<BMIValue.Category(c)<<endl;
	}
	return 0;
}
