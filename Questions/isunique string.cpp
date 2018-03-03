#include <iostream>
#include <cstring>
using namespace std;

bool uniqueCharacters(string str) {


    if (str.length() > 256)
        return false;
	char helper;

    int counterarray[256] = {0};

    for (int i = 0; i < str.length(); i++) {
		helper = str[i];

        //helper = k a p i l
        if (counterarray[int(helper)] == 1)
            return false;

        counterarray[int(helper)] = 1;
    }
    return true;
}

int main() {
    string str = "kapil";

    if (uniqueCharacters(str)) {
        cout << "The String " << str
             << " has all unique characters\n";
    }
    else {

         cout << "The String " << str
              << " has duplicate characters\n";
    }
    return 0;
}
