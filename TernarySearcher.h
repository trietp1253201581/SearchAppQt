#ifndef TERNARYSEARCHER_H
#define TERNARYSEARCHER_H

#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
using namespace std;

class TernarySearcher: public NeedSortedSearcher {
public:
    string getAlgorithm() override;
    int search(int value) override;
    TernarySearcher();
    TernarySearcher(vector<int> arr);
};

#endif // TERNARYSEARCHER_H
