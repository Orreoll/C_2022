#include <iostream>
using namespace std;

class Bucket
{
public:
double volume;
double used;
    Bucket (int b, int n) {
    volume = b, used = n
    ;}
    void flush(){
    used = 0;
    }
    double fill(double c){
    double rest = c - (volume - used);
    used = used + c;
    if (used >=  volume) {
    used =  volume;}
    if (rest <= 0){
    rest = 0;}
    return rest;}
private:};
int main(){
    Bucket mini(12, 3);
    cout << "1)Обьем в литрах и сколько налито - " << mini.volume << ", " << mini.used << "\n";
    int rest = mini.fill(14);
    cout << "2) - " << mini.used << ", " << rest << "\n";
    mini.flush();
    rest = mini.fill(8);
    cout << "3) - " << mini.used << ", " << rest << "\n";
    return 0;
    }
