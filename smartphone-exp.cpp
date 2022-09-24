#include<iostream>
#include<cstring>
using namespace std;

class smartphone{  
	//Data Members(Properties) 
	string model; 
	int year_of_manufacture; 
	bool _5g_supported; 
	public: 
//	//default constructor 
//	smartphone(){ 
//		model ="unknown";
//		year_of_manufacture =0; 
//		_5g_supported =false;
//		 } 
	//parameterized constructor 
	smartphone(string model_string,int manufacture,bool _5g_){
				//initialising data members 
				model = model_string;
				year_of_manufacture = manufacture;
				_5g_supported = _5g_; } 
				// copy constructor
				smartphone(smartphone &obj){ 
				// copies data of the obj parameter 
				model = obj.model; 
				year_of_manufacture = obj.year_of_manufacture;
				_5g_supported = obj._5g_supported; 
		 }
		 
		 void printDetails()
			{
				cout<<"The model of smartphone is "<<this->model<<" and The manufacture date is "<<this->year_of_manufacture<<" , it supported 5G :"<<this->_5g_supported<<endl;
				cout<<"Note: 1 - it supported 5G and 0 - it not supported 5G"<<endl ;
			} 
	 };



int main(){ 
	//creating objects of smartphone class 
	// using default constructor  
//	smartphone unknown; 
	// using parameterized constructor 
	smartphone iphone("iphone 11",2019,false);
	 // using copy constructor 
	 smartphone iphone_2(iphone); 
	 
	 iphone.printDetails(); 
	 
	 return 0 ;
 }
