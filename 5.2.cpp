#include <iostream>
using namespace std;
int main ( )
{
	int n= 11, i , b, j;
	float y [ n ];
	for ( i =0; i<n; i++) 
	{
		cout<<"  \n Y [ "<<i<<" ]= ",;
		cin>>y [ i ];
	}
	for ( j =1; j<n; j++) //Упорядочивание элементов в массиве по убыванию их значений.
		for ( i =0; i<n-j; i++)
		if ( y [ i ]<y [ i +1 ]) //Если текущий элемент меньше следующего
		{
			b=y [ i ]; 
			y [ i ]=y [ i + 1 ]; //Заменить текущий элемент следующим
			y [ i +1]=b; //Заменить следующий элемент на сохранённый в b
		}
	for ( i =0; i<n; i++) cout<<y [ i ]<<" \n "; 
	return 0;
}
