#include <iostream>

using namespace std;

int main(){
int N;
float X;
cout«"Введите длину массива N: "«"\n";
cin»N;
float Ratios[N];
cout«"Введите делитель X: "«"\n";
cin»X;

for(int i=0; i<N; i++)
Ratios[i] = (i+1) / X;
cout«"Массив: " «"\n" ;
for(int i=0; i<N; i++)
cout« Ratios[i] « ' ' ;
return 0;
}
