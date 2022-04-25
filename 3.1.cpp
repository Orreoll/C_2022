#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main ( )
{
	int a, b; 
	ofstream f; 
	f.open ("solbon");
	cout<<" b = "; cin>>b;
	cout<<" a = "; cin>>a;
	while (a<=b){
	      f<<(a*3)<<"\n";
	     a++;
	      
	}
	f.close ( ); 
return 0;
}
  
