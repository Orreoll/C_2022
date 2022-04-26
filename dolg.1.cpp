#include <iostream>

using namespace std;

class properties{
//
public:
int size;
int used;
float delet(int a){
return used = used - a;
}
float write(int a){
return used = used + a;
}
properties (int a, int b){
size = a;
used = b;
}
};

int main()
{
properties sd_card(256, 175);
cout « "1)" « sd_card.size « ',' « sd_card.used « "\n";
int t = sd_card.delet(75);
cout « "2)" « sd_card.used « "\n";
t = sd_card.write(150);
cout « "3)" « sd_card.used « "\n";
return 0;
}
