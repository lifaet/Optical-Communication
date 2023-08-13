#include <iostream>
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
//Text To Binary//
string textToBin(string text){
    string binary = "";
    for (char& _char : text){
        binary +=bitset<8>(_char).to_string();
    }
    return binary;
}
//Binary To Text//
int numerical(string temp){
    int tempVal = 0;
    reverse(temp.begin(), temp.end());
    int base = 1;
    for (int i = 0; i < temp.length(); i++){
        if (temp[i] == '1')
            tempVal += base;
        base = base * 2;
    }
    return tempVal;
}
string binToText(string binary){
    int n = int(binary.size());
    if (n % 8 != 0){
        return "No possible answer";
    }
    string text = "";
    for (int i = 0; i < n; i += 8){
        string temp = binary.substr(i, 8);
        int num_val = numerical(temp);
        char c = (char)(num_val);
        text += c;
    }
    return text;
}

int main()
{
    int selector ;
    bool valid_input = false;
    do{
        int selector ;
        cout <<"Select a option below..\n1.Text To Binary.\n2.Binary To Text.\n";
        cin>>selector;
        if(selector == 1){
            valid_input = true;
            while(true){
                string text ;
                cout << "Text:";
                cin >> text;
                cout << "Binary: " << textToBin(text) << "\n";
            }
        }
        else if (selector == 2){
            valid_input = true;
            while(true){
                string binary;
                cout << "Binary:";
                cin >> binary;
                cout << "Text:" << binToText(binary) <<"\n";
            }
        }
        else{
            valid_input = false;
            cout << "Worng Input!\n";
        }
    }
    while (valid_input == false);
    return 0;
}

