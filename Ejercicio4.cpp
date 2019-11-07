//
// Created by Maor Roizman Gheiler on 7/11/19.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

void idcodes() {
    vector<string> v;
    string ss;
    while (getline(cin, ss))
        if (ss == "#")
            break;
        else{
            v.emplace_back(ss);
        }

    for(auto & item:v){

        bool val = next_permutation(item.begin(),item.end());
        if (val == false)
            cout << "No Successor"
                 << endl;
        else
            cout << item << endl;

    }
}