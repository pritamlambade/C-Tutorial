#include<iostream>
using namespace std;

int main(){
	int age;
	
	cout<<"Enter your age :"<<endl;
	cin>>age;
	
	switch (age)
	{
		case 10 :
			cout<<"You are 10 year old"<<endl;
			break;
			
		case 18 :
			cout<<"You are 18 year old"<<endl;
			break;
			
		default:
			cout<<"You are neither 10 nor 18 years old";
			break;
	}
	
	return 0;
}
