//
// Created by Maor Roizman Gheiler on 7/11/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct {
    int in, order;
} Order;

int cmp(const void *i, const void *j) {
    Order *a, *b;
    a = (Order *)i, b = (Order *)j;
    if(a->order != b->order)
        return a->order - b->order;
    return a->in - b->in;
}
void dnasorting() {
    int tests, dnass, len_dna;
    char dna[101][101];
    scanf("%d", &tests);
    while(tests--) {
        scanf("%d %d", &len_dna, &dnass);
        Order Dnas[101];
        for(int i = 0; i < dnass; i++) {
            scanf("%s", dna[i]);
            int cnt = 0;
            for(int j = 0; j < len_dna; j++) {
                for(int k = j+1; k < len_dna; k++) {
                    if(dna[i][j] > dna[i][k]) {
                        cnt++;
                    }
                }
            }
            Dnas[i].order = cnt, Dnas[i].in = i;
        }
        qsort(Dnas, dnass, sizeof(Order), cmp);
        for(int j = 0; j < dnass; j++) {
            puts(dna[Dnas[j].in]);
        }
        if(tests)
            cout << endl;
    }
}
