#include<iostream>
using namespace std ;

class GrandParents{
	public :
		string name ;
		
	void get_name(string n){
		name = n;
	}
	
	void put_name() {
		cout<<"Name is "<<name <<endl ;
	}
};

class Parents:public GrandParents{
	public :
		int  age ;
		
	void get_age(int a){
		age = a ;
	}
	
	void put_age(){
		cout<<"Age is "<<age<<endl;
	}
	
};

class Child:public Parents{
	public :
		string gender ;
		
	void get_gender(string g){
		gender = g ;
	}
	
	void put_gender(){
		cout<<"Gender is "<<gender<<endl;
	}
	
};

int main(){
	
	Child c ;
	c.get_name("Pritam");
	c.get_age(21);
	c.get_gender("male");
	
	c.put_name();
	c.put_age();
	c.put_gender();
	
	return 0;
	
}
