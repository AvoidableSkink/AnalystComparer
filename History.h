//
// Created by klind on 2/1/2017.
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
    int load(std::ifstream&);
    int getSimulationDays();
    int getInitialMoney();
    int computeProfitLossPerDay();
    int computeTotalProfitLoss();
    int getPSaleCount();
    std::string getCurrentSymbol();
    void resetIteration();
    PSale nextPurchaseSale();
};


#endif //ANALYSTCOMPARER_HISTORY_H
