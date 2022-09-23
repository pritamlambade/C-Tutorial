#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char c1[] = "Pritam" ;
	char c2[] = "Lambade" ; 
	
	cout<<"copy :"<<strcpy(c1,c2)<<endl;
	cout<<"concatenates :"<<strcat(c1,c2)<<endl;
	cout<<"length :"<<strlen("ABC")<<endl;
	
	return 0;
}
