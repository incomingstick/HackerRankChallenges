#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    vector<int> ret;

    stringstream ss(str);
    
    int in;
    char dump;
    
    while (!ss.eof()) {
        if (ss.peek() != ',') {
            ss >> in;
            ret.push_back(in);
        } else ss >> dump;
    }

    return ret;
}

int main() {
    string str;

    getline(cin, str);

    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << endl;
    }

    return 0;
}
