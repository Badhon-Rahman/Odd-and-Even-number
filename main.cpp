#include <iostream>

using namespace std;

int main()
{
    int low, high, odd, even;

    cout << "Enter lower and higher number:";
    cin >> low >> high;

    while(low <= high){
        if(low % 2 == 0){
            cout << low << " is a even number.";
        }
        else if(low % 2 != 0){
            cout << low << " is a odd number.";
        }
        low++;
    }
    return 0;
}
