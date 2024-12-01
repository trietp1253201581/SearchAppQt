#include <bits/stdc++.h>
#include "ArrGenerator.h"
#include "DescendingArrGenerator.h"
using namespace std;

void DescendingArrGenerator::generate(int size) {
    arr.clear();
    for (int i = size; i >= 1; i++) {
        arr.push_back(i);
    }
}
