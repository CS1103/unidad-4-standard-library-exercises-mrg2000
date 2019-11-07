//
// Created by Maor Roizman Gheiler on 7/11/19.
//

#include <iostream>
#include <fstream>
#include <fstream>
#include <vector>

using namespace std;

void endians(){
    vector<int> v;
    int num;
    for(int i =0; i < 5; i++){
        cin >> num;
        v.push_back(num);
    }
    int y,i;

    for(auto it:v){
        y = 0;
        for(i = 0; i < 4; i++){
            y = (y<<8) | ((it>>(8*i))&255);
        }
        cout << it << " converts to " << y;
        cout << endl;
    }
}