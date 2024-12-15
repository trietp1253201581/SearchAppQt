#ifndef FIBONACCISEARCHER_H
#define FIBONACCISEARCHER_H

#include "NeedSortedSearcher.h"
#include <bits/stdc++.h>
using namespace std;

class FibonacciSearcher: public NeedSortedSearcher {
public:
    string getAlgorithm() override;
    int search(int value) override;
    FibonacciSearcher();
    FibonacciSearcher(vector<int> arr);
};


#endif // FIBONACCISEARCHER_H
