#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    short b, x=0, *ukaz;
        char z[10];
    cout << "Символ" << "\n";
        cin >> z;
    cout<<"значение"<< "\n";
        b = strlen(z);
    while (1){
        ukaz=(short *) &z[x];
            (*ukaz)++;
         cout<<z[x];
            if(b==x) break;
            x++;
        }
    return 0;
}
