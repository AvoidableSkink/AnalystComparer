//
// Created by klind on 2/4/2017.
//

#include <fstream>
#include "Analyst.h"

void Analyst::load(std::ifstream inputStream){
    std::string tmp;
    std::getline(inputStream, tmp);
    name = tmp;
    std::getline(inputStream, tmp);
    initials = tmp;
    history.load(inputStream);
}

float Analyst::getStockPerformance(std::string symbol){

}

std::string Analyst::getName(){
    return name;
}

std::string Analyst::getInitials(){
    return initials;
}

History Analyst::getHistory(){
    return history;
}