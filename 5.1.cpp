#include <iostream>
#include <cmath>
using namespace std;

    float SquaredSum(float a, float b) {
    float d;
    d = pow ((a + b), 2); //pow-возвращает значение base, возведенное в степень ехр
    return d;

    }

    int main()
    {
    float q, w, e, r;
    cout << "первая дробь:"<<endl;
    cin >> q >> w;
    cout << "вторая дробь:"<<endl;
    cin >> e >> r;

    float t, y;
    t = q / w;
    y = e / r;
    cout << SquaredSum(t, y) << endl;
    return 0;
    }
