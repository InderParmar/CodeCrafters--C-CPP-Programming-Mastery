// BodyMassMain.c - main program for the body mass index

#include <stdio.h>
#include "Stocks.c"
#include "Utilities.c"

int main()
{
    // struct HealthCareProvider provider;
    struct Company companies[NUM_COMPANIES];
    for (int i = 0; i < NUM_COMPANIES; ++i) {
    printf("Enter the company name: ");
    scanf("%[^\n]%*c", companies[i].name); // Read until newline and consume the newline character

    printf("Enter %s's stock symbol: ", companies[i].name);
    scanf("%[^\n]%*c", companies[i].stock_symbol); // Read until newline and consume the newline character

    printf("Enter %s's current stock price: ", companies[i].name);
    scanf("%lf", &companies[i].stock_price);
    utilClearInputBuffer(); // Clear out the carriage return of the previous scanf

    printf("Enter %s's annual dividend per share: ", companies[i].name);
    scanf("%lf", &companies[i].annual_dividend_per_share);
    utilClearInputBuffer(); // Clear out the carriage return of the previous scanf

    CalculateYield(&companies[i]);

    printf("\n");
}

    // Print a report
    printf("%-25s %-10s  %-10s %-10s %-10s %-25s\n", "COMPANY", "SYMBOL", "PRICE", "DIV", "YIELD", "VALUATION");
    for (int i = 0; i < NUM_COMPANIES; ++i)
    {
        printf("%-25s %-10s  %-10.2lf %-10.3lf %-10.3lf",
               companies[i].name, companies[i].stock_symbol, companies[i].stock_price, companies[i].annual_dividend_per_share, companies[i].div__yield);
        CheckValuation(companies[i].div__yield);
    }
    return 0;
}