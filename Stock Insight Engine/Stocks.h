//BodyMassIndex.h - header file for body mass index

#define MAX_STR 32
#define NUM_COMPANIES 5

struct Company {
	char name[MAX_STR];
    char stock_symbol[MAX_STR];
    double stock_price;
    double annual_dividend_per_share;
    double div__yield;
};

struct MaxCompanies {
	struct Company maxfive[NUM_COMPANIES];
};
double CalculateYield(struct Company* company);
void CheckValuation(double Yield);