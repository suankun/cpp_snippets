#ifndef PROFIT_REPORT_H 
#define PROFIT_REPORT_H 
 
#include "Company.h" 
#include "ProfitCalculator.h" 

#include <string>
#include <map>

std::string getProfitReport(Company* from, Company* to, std::map<int, ProfitCalculator> & calcs) {
    std::ostringstream ostr;
    
    while (from != to + 1)
    {
        int profit = calcs[from->getId()].calculateProfit(*from);

        ostr << from->getName() << " = " << profit << std::endl;

        from++;
    }
    

    return ostr.str();
}


#endif // !PROFIT_REPORT_H 
