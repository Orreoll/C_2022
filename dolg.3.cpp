#include <iostream>

using namespace std;

int main()
{
    int a,b,t=1;
    cout << "Введите a - " << "\n";
    cin>>a;
    cout << "Введите b - " << "\n";
    cin>>b;
    int Numbers[a][b];
    for(int i=0; i<a; i++){
        for (int k=0; k<b; k++){
            Numbers[i][k]=t++;
        }
    }
    for(int n=0; n<a; n++){
        cout<<"\n";
        for (int m=0; m<b; m++){
            cout<<Numbers[n][m]<<" ";
        }
    }
    return 0;
}
