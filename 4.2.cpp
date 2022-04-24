#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char solbon[30];
cin >> solbon;
int a = 0;
while (a < strlen (solbon))
{
int ascii = (int)solbon[a];
if (ascii == 77)
{
ascii = (int)solbon[a] - 15; //для буквы z->a
}
else ascii = (int)solbon[a] + 1;
cout << (char)ascii;
++a;
}
char c;
return 0;
}
