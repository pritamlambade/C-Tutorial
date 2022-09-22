#include<iostream>
using namespace std;

int main(){
	int age;
	
	cout<<"Enter your age :"<<endl;
	cin>>age;
	if(age>120 || age<1){
		cout<<"Invalid age !";
	}
	else if(age>=18){
		cout<<"You can vote"<<endl;
	}
	
	else
	{
		cout<<"You can't vote"<<endl;
	}
	
	return 0;
}
