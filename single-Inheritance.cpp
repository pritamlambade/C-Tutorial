#include<iostream>
using namespace std ;

class Dimensions{
	public:
	float side=10.65;
	
};

class Square :public Dimensions {
	public :
		double area(double x){
			return(x*x);
		}
};

int main(){
	Square s1;
	cout<<"Area : "<<s1.area(s1.side)<<endl;

	return 0;
}
