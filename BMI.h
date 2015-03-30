#ifndef BMI_H
#define BMI_H
#include<iostream>
#include <string>
using namespace std;

class BMI
{
public:
	void SetValue(float, float);
	void BM();
	void setType();
	float getResult();
	string getType();	
private:
	float height;
	float mass;
	float result;
	string type;
};
#endif
