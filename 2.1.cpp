#include <stdio.h>
using namespace std;
int main()
{
    int a = 0;
    do {
        if (a%3==0) {
        printf("A = : %d\n",a);
        }
        a++;
    }
    while (a<101);
    return 0;
}
