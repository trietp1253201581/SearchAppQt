#ifndef RANDOMIZEARRGENERATOR_H
#define RANDOMIZEARRGENERATOR_H

#include "ArrGenerator.h"

class RandomizeArrGenerator: public ArrGenerator {
public:
    virtual void generate(int size) override;
};

#endif // RANDOMIZEARRGENERATOR_H
