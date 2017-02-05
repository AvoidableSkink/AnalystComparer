//
// Created by Stephen Clyde on 1/16/17.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include "Comparer.h"
#include "Utils.h"

int Comparer::load(int argc, char* argv[])
{
    if (argc<3)
    {
        std::cout << "Invalid parameters" << std::endl;
        std::cout << "usage: AnalystComparer <output file> <input file 1> <input file 2> ..." << std::endl;
        return -1;
    }

    m_outputFilename = argv[1];
    m_analystCount = argc - 2;
    // TODO: Allocate a container, like an array of pointers, to hold the analysts
    //
    // Example Code:
    // m_analysts = new Analyst*[m_analystCount];

    int analystIndex = 0;
    for (int i = 0; i < m_analystCount; i++)
    {
        std::ifstream inputStream(argv[2 + analystIndex]);

        Analyst tmp;
        tmp.load(inputStream);
        analysts.push_back(tmp);
        // TODO: Create a new analyst, load it from the input stream, and put it into the container if that load succeeded
        //
        // Example code:
        // m_analysts[analystIndex] = new Analyst();
        // if (m_analysts[analystIndex]->load(inputStream) < 0)
        // {
        //     std::cout << "Failed to load " << argc[analystIndex] << std::endl;
        // }
        // else
        //      analystIndex++;
    }

    loadSymbols();

    int result = 0;
    if (analystIndex < m_analystCount)
        result = -1;

    return result;
}

int Comparer::compare() const
{
    if (m_analystCount < 2)
    {
        std::cout << "Cannot do comparison with " << m_analystCount << " analysts" << std::endl;
        return -1;
    }

    if (m_outputFilename == "")
    {
        std::cout << "Cannot do comparison because no output file is specified" << std::endl;
        return -1;
    }

    std::ofstream outputStream(m_outputFilename);
    outputInvestorNames(outputStream);
    outputOverallPerformance(outputStream);
    outputStockPerformance(outputStream);

    return 0;
}

void Comparer::loadSymbols()
{
    m_symbolsCount = 0;
    for (int i = 0; i < m_analystCount; ++i) {
        History history = analysts[i].getHistory();
        history.resetIteration();
        while (i < history.getPSaleCount())
        {
            std::string symbol = history.getCurrentSymbol();
            std::string *existingSymbol = std::find(std::begin(m_symbols), std::end(m_symbols), symbol);
            if (existingSymbol == std::end(m_symbols)) {
                m_symbols[m_symbolsCount++] = symbol;
            }
        }
    }
}


void Comparer::outputInvestorNames(std::ofstream& outputStream) const
{
    // TODO: Write out investor names
}

void Comparer::outputOverallPerformance(std::ofstream& outputStream) const
{
    // TODO: Write out Overall Performance table.  The classes from the FormattedTable example might be helpful.
};

void Comparer::outputStockPerformance(std::ofstream& outputStream) const
{
    // TODO: Write out Stock Performance table.  The classes from the FormattedTable example might be helpful.
}
