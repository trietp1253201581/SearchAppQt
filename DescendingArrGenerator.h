#ifndef DESCENDINGARRGENERATOR_H
#define DESCENDINGARRGENERATOR_H

#include "ArrGenerator.h"

class DescendingArrGenerator: public ArrGenerator {
public:
    virtual void generate(int size) override;
};

#endif // DESCENDINGARRGENERATOR_H
