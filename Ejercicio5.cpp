//
// Created by Maor Roizman Gheiler on 7/11/19.
//

#include <iostream>
#include <string>
#include <strings.h>
#include <vector>
#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;
struct team {
    char name[100];
    int pt, win, lose, tie, score, invscore;

    void init(){
        pt, win, lose, tie, score, invscore = 0;
    }
    void write_team(int a, int b) {
        if(a > b){
            win++, pt += 3;
        } else if(a < b){
            lose++;
        }
        else{
            tie++, pt++;
        }
        score += a, invscore += b;
    }
    team(string name) {name = name; pt = 0; win = 0; lose = 0; tie = 0; score = 0; invscore = 0;}
};

bool comp(team a, team b){
    if(a.pt != b.pt)
        return a.pt > b.pt;
    if(a.win != b.win)
        return a.win > b.win;
    if(a.score - a.invscore != b.score - b.invscore)
        return a.score - a.invscore > b.score - b.invscore;
    if(a.score != b.score)
        return a.score > b.score;
    if(a.win + a.lose + a.tie != b.win + b.lose + b.tie)
        return a.win + a.lose + a.tie < b.win + b.lose + b.tie;
    return strcasecmp(a.name, b.name) < 0;
}

void football(){
    int T,nteams,games;
    scanf("%d\n",&T);
    char name[100];
    char buf[100];
    while(T--){
        string cup;
        getline(cin, cup);
        cin.ignore();
        cin >> nteams;
        for (int i = 0; i < nteams; i++){
            string name;
            getline(cin, name);

        }
        cin >> games;
        cin.ignore();
        while(games--){
            char name1[100], name2[100];
            int score1, score2;
            sscanf(buf, "%[^#]#%d@%d#%[^\n]", name1, &score1, &score2, name2);
            team(name1).write_team(score1, score2);
            team(name2).write_team(score2, score1);
        }
    }
}