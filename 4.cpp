//Напишите программу вычисляющую результат остатка при делении a^b на c. В программе гарантируется, что числа a и c целые, b - натуральное и не превосходят по модулю 10000. В программе запрещается использовать операцию **(возведение в степень). Результаты всех промежуточных вычислений не должны превосходить 100000000
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
