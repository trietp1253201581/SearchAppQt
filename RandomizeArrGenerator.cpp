#include <bits/stdc++.h>
#include "ArrGenerator.h"
#include "RandomizeArrGenerator.h"
using namespace std;

void RandomizeArrGenerator::generate(int size) {
    arr.clear();
    for (int i = 1; i <= size; i++) {
        arr.push_back(i);
    }

    random_device rd;
    mt19937 generator(rd());

    shuffle(arr.begin(), arr.end(), generator);
}
