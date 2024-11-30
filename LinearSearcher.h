#ifndef LINEARSEARCHER_H
#define LINEARSEARCHER_H

#include <bits/stdc++.h>
#include "Searcher.h"
using namespace std;

class LinearSearcher: public Searcher {
public:
    string getAlgorithm() override;
    int search(int value) override;
    LinearSearcher();
    LinearSearcher(vector<int> arr);
};

#endif // LINEARSEARCHER_H
