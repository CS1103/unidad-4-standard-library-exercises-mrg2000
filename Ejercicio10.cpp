//
// Created by Maor Roizman Gheiler on 7/11/19.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

using namespace std;
void hardwoodspecies() {
    int n, cnt = 0;
    cin >> n;
    cin.ignore();
    cout << endl;
    for (int i = 0; i < n; i++) {
        string name;
        map<string, int> arboles;

        if (i == 0)
            getline(cin, name);
        while (getline(cin, name)) {
            if (name.length() == 0)
                break;
            else
                arboles[name]++;
            cnt++;
        }
        map<string, int>::iterator it;
        for (it = arboles.begin(); it != arboles.end(); it++) {
            cout << it->first << " " << fixed << setprecision(4) << it->second * 100.00 / cnt << endl;
        }
    }
}