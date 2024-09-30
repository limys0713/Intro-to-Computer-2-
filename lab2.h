#include<iostream>
#include<string>
using namespace std;

class value{
	public:
		void setMass(int Mass){
			mass=Mass;
		}
		int getMass(){
			return mass;
		}
		void setHeight(int Height){
			height=Height;
		}
		int getHeight(){
			return height;
		}

		float bmivalue(int Mass,int Height){
			float heightinm=float(Height)/100;
			float BMI=Mass/(heightinm*heightinm);

			return BMI;
		}

		string Category(float BMI){

			string category;

			if(BMI<15){ category="Very Severely Underweight";}
			else if(BMI>15&&BMI<16) {category="Severely Underweight";}
			else if(BMI>16&&BMI<18.5) {category="Underweight";}
			else if(BMI>18.5&&BMI<25) {category="Normal";}
			else if(BMI>25&&BMI<30) {category="Overweight";}
			else if(BMI>30&&BMI<35) {category="Obese Class 1";}
			else if(BMI>35&&BMI<40) {category="Obese Class 2";}
			else if(BMI>40) {category="Obese Class 3";}
			else category="FAIL TO LOAD";

			return category;
		}
	private:
		int mass;
	       	int height;
};
