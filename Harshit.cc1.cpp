#include<iostream>

using namespace std;


	
	class Box{
		
		public:
		
		
		double length;
		
		double width;
		
		
		double height;
	};
	
	int main(){
		
	  Box Volume;
	  
	  Volume.length= 30;
	  
	  Volume.width= 25;
	  
	  Volume.height= 20;
	  
	  	
	cout<<"The volume of the box is"<<Volume.length * Volume.width * Volume.height<<" "<<endl;
}