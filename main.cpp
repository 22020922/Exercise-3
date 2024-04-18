#include <iostream>

using namespace std;

int main() {
    int height = 0;
    int looks = 0;

    cout << " Enter your looks (1-10) " << endl ;
    cin >> looks;

    cout << " Enter your height (cm) " << endl;
    cin >> height;

    if (looks > 6) {
        if (height < 180) {
            cout << "You stand a chance, let's go out" << endl;
        } else {
            cout << "Try someone else" << endl;
        }
    } else if (looks <= 6) {
        if (height >= 180) {
            cout << "You don't look the part and you're also too tall" << endl;
        } else if (height < 165) {
            cout << " You don't look the part and you're too short" << endl;
        } else {
            cout << "You don't look the part" << endl;
        }
    } else {
        cout << "Please enter valid information" << endl;
    }

    return 0;
}