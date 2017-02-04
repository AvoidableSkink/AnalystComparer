//
// Created by klind on 2/4/2017.
//

#ifndef ANALYSTCOMPARER_HISTORY_H
#define ANALYSTCOMPARER_HISTORY_H


#include <vector>
#include "PSale.h"

class History {
private:
    int simulationDays;
    int seedMoney;
    int pSaleCount;
    std::vector<PSale> pSales;
    int currentPSale;
public:
};


#endif //ANALYSTCOMPARER_HISTORY_H
