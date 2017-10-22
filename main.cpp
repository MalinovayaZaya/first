#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;
  if (a==1)
  {
      cout << a << ":UNIT" << endl;
  }
  else{
    for(int i=2; i<a/2; i++)
    {
        if(a%i==0){
            cout << a << ":COMPOSITE" << endl;
            i=a/2;
        }
        else{
                if(i==a/2){
            cout << a << ":PRIME" << endl;
                }
        }
    }
  }
    return 0;
}
