#include <bits/stdc++.h>
#include "ArrGenerator.h"
#include "AscendingArrGenerator.h"
using namespace std;

void AscendingArrGenerator::generate(int size) {
    arr.clear();
    for (int i = 1; i <= size; i++) {
        arr.push_back(i);
    }
}
