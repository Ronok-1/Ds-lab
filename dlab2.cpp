#include <iostream>
#include <string>

using namespace std;

string encode(const string& s, int j) {
    string encoded = s;
    for (int i = 0; i < s.length(); i++) {
        if (i % (j + 1) == j) {
            encoded[i]++;
        }
    }
    return encoded;
}

string decode(const string& s, int j) {
    string decoded = s;
    for (int i = 0; i < s.length(); i++) {
        if (i % (j + 1) == j) {
            decoded[i]--;
        }
    }
    return decoded;
}

int main() {
    string input;
    int j;

    cout << "Enter a string: ";
    cin >> input;
    cout << "Enter an integer j: ";
    cin >> j;

    string encoded = encode(input, j);
    cout << "Encoded string: " << encoded << endl;

    string decoded = decode(input, j);
    cout << "Decoded string: " << decoded << endl;

    return 0;
}





