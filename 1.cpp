/*Напишите программу проверяющую N чисел на четность. В программе гарантируется, что все числа целые и их не менее одного*/ 
#include <iostream> 

using namespace std; 

int main() 
{ 
int a, N; 
cin >> N; 
for(int i=0; i<N ; i++) 
{ 
cin >> a; 
if(a%2==0) 
{ 
cout << a << " - EVEN" << endl; 
} 
else{cout<< a << " - ODD" << endl; 
} 
} 
return 0; 
}
