#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


//THIS THE WRONG FILE. HW3_1.JAVA IS THE CORRECT FILE

int main() {
    int input;
    string charInput;

    cin >> input;
    int n = pow(2, input);

    cin >> charInput;
    string arr[input];
    arr = {charInput};

    for(int i = 0; i < input; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
