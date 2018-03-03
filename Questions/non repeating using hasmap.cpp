#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main() {
    char str[100] = "xyzwx"; //hashvalues will be 21112
    int i,len,j;

    map<char,int> hash;
    len = strlen(str);


    // key = character, value = count
    // when element is found, value changed from 0 to 1
    // for 2nd x, final hashvalue will changed from 1 to 2

    for(i = 0; i < len; i++){

            hash[str[i]]= hash[str[i]] + 1;
            // hash[x] = 1, hash[y] = 1
            // hash[x] = 2---- when it sees x again
    }

    cout <<"Final hash values are" << endl;
    for(i = 0; i < len; i++){
        cout << hash[str[i]] << endl;
    }


    // Print element with count = 1

    for(j=0;j<len;j++)
        {

            // If the character is not repeated, its hash value will be eqaul to 1
            int finalHashValue = hash[str[j]];
            //cout << finalHashValue << endl;
            if (finalHashValue==1)
            {
                cout<<"First non-repeated character is "<<str[j];
                break;
            }
        }
    return 0;
}
