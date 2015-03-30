#include<iostream>
#include<string>
#include<cstdlib>
#include "BMI.h"
using namespace std;
	
	void BMI::SetValue(float h, float m)
	{
		height=h/100;
		mass=m;
	}
	void BMI::BM()
	{
		if(height!=0)
			result= mass/(height*height);
		else 
			exit(1);
	}
	void BMI::setType()
	{
		if(result<15){type="Very Severely underweight";}
		else if(result>15 && result<16){type="Severely Underweight";}
		else if(result>16 && result<18.5){type="Underweight";}
		else if(result>18.5 && result<25){type="Normal";}
		else if(result>25 && result<30){type="Overweight";}
		
		else if(result>30 && result<35){type="Obese Class I (Moderately Obese)";}
		else if(result>35 && result<40){type="Obese Class II (Moderately Obese)";}
		else if(result>=40){type="Obese Class III (Moderately Obese)";}
	}	
	float BMI::getResult()
	{
		return result;
	}
	string BMI::getType()
	{
		return type;
	}
