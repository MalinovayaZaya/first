#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int q=a;
    for(int i=1; i<b; i++){
        q*=a;
    }
    if(q<100000000){
        cout << q%c << endl;
    }
     return 0;
}
