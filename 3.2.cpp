#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a=1, b;
    ifstream f("solbon");
    while (1){
        f>>b;
    cout<<a<<"."<<b<<"\n";
    a++;
    if (f.eof()) break;
    }
    f.close();    
    return 0;
}
