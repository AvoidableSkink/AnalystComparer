//
// Created by klind on 2/4/2017.
//

#include "PSale.h"
#include "Utils.h"

PSale::PSale(std::ifstream& inputStream){
    //get the first line from the inputStream and put it in a string variable
    std::string data;
    std::getline(inputStream, data);

    //split the data into chunks, place them in an array
    std::string tmp[7];
    split(data, ',', tmp, 8);

    //assign values to the data members
    symbol = tmp[0];
    quantity = atoi(tmp[1].c_str());
    purchaseDateTime = atoi(tmp[2].c_str());
    purhcasePrice = atoi(tmp[3].c_str());
    purhcaseFee = atoi(tmp[4].c_str());
    saleDateTime = atoi(tmp[5].c_str());
    salePrice = atoi(tmp[6].c_str());
    saleFee = atoi(tmp[7].c_str());
}

//return symbol
std::string PSale::getSymbol() {
    return symbol;
}

//return purchaseDateTime
int PSale::getPurchaseDateTime(){
    return purchaseDateTime;
}

//return saleDateTime
int PSale::getSaleDateTime(){
    return saleDateTime;
}

//calculate and return the investment amount
int PSale::computeInvestmentAmount(){
    return quantity*purhcasePrice + purhcaseFee + saleFee;
}

//calculate and return the profit loss
int PSale::computeProfitLoss(){
    int tmp = quantity*salePrice - computeInvestmentAmount();
    return tmp;
}