//
// Created by klind on 2/1/2017.
//

#include <fstream>
#include "Analyst.h"

void Analyst::load(std::ifstream& inputStream){
    std::string tmp;
    std::getline(inputStream, tmp);
    name = tmp;
    std::getline(inputStream, tmp);
    initials = tmp;
    history.load(inputStream);
}

float Analyst::getStockPerformance(std::string symbol){
    history.
}

std::string Analyst::getName() const{
    return name;
}

std::string Analyst::getInitials() const{
    return initials;
}

History Analyst::getHistory(){
    return history;
}