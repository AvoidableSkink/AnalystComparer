//
// Created by klind on 2/4/2017.
//

#include "pSale.h"
#include "Utils.h"
#include <fstream>

pSale::pSale(std::ifstream input){

}

//return symbol
std::string pSale::getSymbol() {
    return symbol;
}

//return purchaseDateTime
int pSale::getPurchaseDateTime(){
    return purchaseDateTime;
}

//return saleDateTime
int pSale::getSaleDateTime(){
    return saleDateTime;
}

//calculate and return the investment amount
int pSale::computeInvestmentAmount(){
    return quantity*purhcasePrice + purhcaseFee + saleFee;
}

//calculate and return the profit loss
int pSale::computeProfitLoss(){
    int tmp = quantity*salePrice - computeInvestmentAmount();
    return tmp;
}