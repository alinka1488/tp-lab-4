//
// Created by Илья on 017 17.12.19.
//

#ifndef TASK1_MILK_H
#define TASK1_MILK_H


#include "CondimentDecorator.h"
#include "Beverage.h"

class Milk : public CondimentDecorator{
protected:
    Beverage* beverage;
    int val;
public:
    explicit Milk(Beverage* beverage, int val){
        this->beverage = beverage;
        this->val = val;
    }

    virtual string getDescription(){
        return beverage->getDescription() + " + milk";
    }

    virtual int getCost(){
        return beverage->getCost() + val;
    }
};


#endif //TASK1_MILK_H
