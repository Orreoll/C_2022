#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main ( )
{
	int a, b; 
	ofstream f; 
	f.open ( " solbon " );
	cout<<" b = "; cin>>b;
	cout<<" a = "; cin>>a;
	for ( a; a<=b; a++);
	f <<(a*3)<<"\n";
	f.close ( ); 
return 0;
}
