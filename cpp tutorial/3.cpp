#include<iostream>
using namespace std;

int main(){
	//camelCase natation
	int marksInMaths=85;
	cout<<"The marks of the student in maths is " <<marksInMaths<<endl ;
	
	//DataType
	short a;
	int b;
	long c;
	long long d;
	float score =45.25;
	double const score2 = 25.63;
	long double score3 = 60.35;
	//we can chenge the value any time 
	score = 50.55;
	
	//we can't change the constant score 
	//score2=60.55;
	
	cout<<"The score of float is" <<score<<endl;
	cout<<"The score of double is" <<score2<<endl;
	cout<<"The score of long double is" <<score3<<endl;
	
	return 0;
}
