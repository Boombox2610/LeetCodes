#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 2;
        result += to_string(sum % 2);
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string a = "11";
    string b = "1";
    cout << "Sum: " << addBinary(a, b) << endl;

    a = "1010";
    b = "1011";
    cout << "Sum: " << addBinary(a, b) << endl;

    return 0;
}
