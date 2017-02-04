//
// Created by klind on 2/4/2017.
//

#ifndef ANALYSTCOMPARER_PSALE_H
#define ANALYSTCOMPARER_PSALE_H

#include <string>

class PSale {
private:
    std::string symbol;
    int quantity;
    int purchaseDateTime;
    int purhcasePrice;
    int purhcaseFee;
    int saleDateTime;
    int salePrice;
    int saleFee;
public:
    //functions i may use
    PSale(std::ifstream);
    std::string getSymbol();
    int getPurchaseDateTime();
    int getSaleDateTime();
    int computeInvestmentAmount();
    int computeProfitLoss();
};


#endif //ANALYSTCOMPARER_PSALE_H
