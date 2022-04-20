#include <iostream>

using namespace std;

int main()
{
int i=1,sum;
for (i;i<1000;i++)
{
if (i%7==0) {
sum=sum+i;
}

}
cout << sum <<"\n";
return 0;
}
