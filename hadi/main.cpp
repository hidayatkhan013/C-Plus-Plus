#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
   string str;
    string str1;
   long double data=0;
   int count=0;
   double pre=0;
   double max_x=0;
   double max_n=0;
   ifstream myFile("structureLoad-Lab5.txt");
   while (!myFile.eof()){
	         myFile>>str;
	         myFile>>str1;
			 data+=strtold(str1.c_str(), NULL);
	         count++;
	         pre=strtold(str1.c_str(), NULL);
	         if (max_n < pre){
	         	max_n=pre;
	         	max_x=strtold(str.c_str(), NULL);
			 }
	         
}
cout<<"Average is : "<<setprecision(10)<<data/count<<endl;
cout<<"location of maximum load on the rigid bar : "<<max_x<<endl;
   myFile.close();
   return 0;
}
