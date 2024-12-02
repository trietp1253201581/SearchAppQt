#ifndef INTERPOLATIONSEARCHER_H
#define INTERPOLATIONSEARCHER_H

#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
using namespace std;

class InterpolationSearcher: public NeedSortedSearcher {
public:
    string getAlgorithm() override;
    int search(int value) override;
    InterpolationSearcher();
    InterpolationSearcher(vector<int> arr);
};

#endif // INTERPOLATIONSEARCHER_H
