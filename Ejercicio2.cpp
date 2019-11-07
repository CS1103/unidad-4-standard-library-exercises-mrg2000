//
// Created by Maor Roizman Gheiler on 7/11/19.
//

#include<iostream>
#include<sstream>
#include<map>
using namespace std;


void newspaper(){
    int T, K, M;
    map <char, double>::iterator it;
    char c;
    double v, total;

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        map <char, double> mymap;
        total = 0;
        cin >> K;
        for(int i = 0; i < K; i++){
            cin >> c >> v;
            mymap[c] = v;
        }
        cin >> M;
        cin.ignore();

        for(int j = 0; j < M; j++){

            string line;
            line = "";
            getline(cin, line);
            int L = line.size();

            for(int l = 0; l < L; l++){
                it = mymap.find(line[l]);
                if(it != mymap.end())
                    total += it -> second;
            }
        }
        total = total/100;
        cout << total;
        mymap.clear();
    }

}