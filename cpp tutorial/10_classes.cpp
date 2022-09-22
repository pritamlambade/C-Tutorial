//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	return 0;
//}


#include<iostream>
#include<string>
using namespace std;

//ther are 3 type of classes public ,private ,protected
class Employee {
		public :
			string name;
			int salary ;
			
		void printDetails()
			{
				cout<<"The name of our employee is "<<this->name <<" and his salary is "<<this->salary<<" $."<<endl;
			}
	};

int main()
{
	Employee emp;
	emp.name = "Pritam" ;
	emp.salary = 500 ;
	emp.printDetails(); 
	
	return 0;
}
