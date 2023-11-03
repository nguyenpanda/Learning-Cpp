
#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    size_t s, e;
    float a;
    
    int i = 0;
    s=clock();
    while (i<=1000000)
    {
        cout << i << endl;
        i++;
    }
    e=clock();
    a=(float)(e-s) / CLOCKS_PER_SEC;
    cout << a;
    
    return 0;
}
