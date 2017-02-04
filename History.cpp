//
// Created by klind on 2/4/2017.
//

#include <fstream>
#include "History.h"

//Load the history data from the given ifstream
int History::load(std::ifstream inputStream){
    std::string tmp;
    std::getline(inputStream, tmp);
    simulationDays = atoi(tmp.c_str());
    std::getline(inputStream, tmp);
    seedMoney = atoi(tmp.c_str());
    std::getline(inputStream, tmp);
    pSaleCount = atoi(tmp.c_str());

    for (int i = 0; i < pSaleCount; ++i) {
        PSale tmp = new PSale(inputStream);
        pSales.push_back(tmp);
    }
}

//return simulation days
int History::getSimulationDays(){
    return simulationDays;
}

//return initial money
int History::getInitialMoney(){
    return seedMoney;
}

//compute and return the profit loss per day
int History::computeProfitLossPerDay(){

}

//maybe I'll use these???
void resetIteration();
PSale nextPurchaseSale();