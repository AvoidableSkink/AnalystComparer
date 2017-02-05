//
// Created by klind on 2/4/2017.
//

#ifndef ANALYSTCOMPARER_ANALYST_H
#define ANALYSTCOMPARER_ANALYST_H

#include <string>
#include "History.h"

class Analyst {
private:
    std::string name;
    std::string initials;
    History history;
public:
    void load(std::ifstream&);
    float getStockPerformance(std::string symbol);
    std::string getName() const;
    std::string getInitials() const;
    History getHistory();
};


#endif //ANALYSTCOMPARER_ANALYST_H
