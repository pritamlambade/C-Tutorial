#include<iostream>
using namespace std;

int main(){
//	int arr[3] = {5,9,2};
//	
//    cout<<arr[0] ;
//    

	int marks[5];
	
	for(int i  = 0;i<5 ; i++)
		{
			cout<<"Enter the marks of "<<i<<"th stydent : "<<endl ;
			cin>>marks[i] ;
		}
		
		for(int i  = 0;i<5 ; i++)
		{
			cout<<"Marks of "<<i<<"th student is  "<<marks[i]<<endl ;
			
		}
    return 0;
}
