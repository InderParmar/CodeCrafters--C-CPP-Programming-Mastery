
#include "Stocks.h"
#include <stdio.h>
#include <stdbool.h>

double CalculateYield(struct Company *company)
{
    company->div__yield = 0.00;
    company->div__yield = 100 * company->annual_dividend_per_share / company->stock_price;
    return company->div__yield;
}

void CheckValuation(double Yield)
{
    if (Yield > 5)
    {
        printf("%-25s\n", "Under Valued");
    }
    else if (Yield < 5)
    {
        printf("%-25s\n", "Over Valued");
    }
    else
    {
        printf("%-25s\n", "Fully Valued");
    }
}