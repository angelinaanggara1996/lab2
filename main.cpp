#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "BMI.h"

using namespace std;

int main()
{
	string line;
    float mass,height,x;
	BMI bmi;
    ifstream inFile("file.in",ios::in);
    if(!inFile){
           cerr<<"Failed opening"<<endl;
           exit(1);
    }
	ofstream outFile("file.out",ios::out);
    if(!outFile){
           cerr<<"Failed opening"<<endl;
           exit(1);
    }
	while(inFile>>height>>mass)
	{
		bmi.SetValue(height,mass);
		bmi.BM();
		bmi.setType();
		x=bmi.getResult();
		line=bmi.getType();
		outFile<<x<<"\t"<<line<<endl;
	}
	outFile.close();
    return 0;
}

