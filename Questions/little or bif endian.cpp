#include <iostream>
using namespace std;

int main() {
    int number = 0x11223344; // n = 0x11[17] 0x22[34] 0x33[51] 0x44[68]

    // Little Endian, upward storage starts from LSB
    // [0] = 44, [1] = 33, [2] = 22, [3] = 11

    // Big Endian, upward storage starts from MSB
    // [0] = 11, [1] = 22, [2] = 33, [3] = 44

    // create char pointer to number
    // use casting to make char pointer point to integer
    // We need char pointer to since we need byte
    // If we use int pointer, next location accessed will be + 32(outof bound)

    char *pointer = (char *)&number;

    char firstbyte = pointer[0]; char secondbyte = pointer[1];
    char thirdbyte = pointer[2]; char fourthbyte = pointer[3];

    cout << int(firstbyte) << endl;
    cout << int(secondbyte) << endl;
    cout << int(thirdbyte) << endl;
    cout << int(fourthbyte) << endl;

    if (int(firstbyte) == 68){
        cout << "Little Endian";
    }

    if (int(firstbyte) == 17){
        cout << "Big Endian";
    }
    return 0;
}
