#ifndef EXPONENTIALSEARCHER_H
#define EXPONENTIALSEARCHER_H

#include "NeedSortedSearcher.h"
#include <bits/stdc++.h>
using namespace std;

class ExponentialSearcher: public NeedSortedSearcher {
public:
    string getAlgorithm() override;
    int search(int value) override;
    ExponentialSearcher();
    ExponentialSearcher(vector<int> arr);
};

#endif // EXPONENTIALSEARCHER_H
