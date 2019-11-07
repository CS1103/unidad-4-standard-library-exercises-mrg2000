//
// Created by Maor Roizman Gheiler on 7/11/19.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>

using namespace std;


void permutation_arrays() {
    int n, count = 0;
    cin>>n;
    cin.ignore(2,' ');
    while (count!=n){

        vector<int> v1;
        vector<float> v2(v1.size());

        int xx;
        string s1,s2;
        int number;
        float real;

        getline(cin,s1);
        stringstream s(s1);

        while (s>>number)
            v1.push_back(number);


        getline(cin,s2);
        stringstream ss(s2);

        while (ss>>real)
            v2.push_back(real);


        vector<pair<int,float>> v3;


        for(int i=0; i < v1.size(); i++)
            v3.push_back(make_pair(v1.at(i),v2.at(i)));

        sort(v3.begin(),v3.end());

        for(auto &item:v3)
            cout << item.second<< endl;


        count++;
    }


}
