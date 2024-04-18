#include <iostream>

using namespace std;

int main(){

int a;
cout << " Input a number " << endl;
cin >> a;

if(a < 0){
cout << a << " is negative " << endl;
}else if(a == 0){
cout << a << " is zero " << endl;
}else{
cout << a << " is postive " << endl;
}

return 0;
}