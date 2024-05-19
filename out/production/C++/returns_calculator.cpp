#include <iostream>
#include<cmath>

using std::cout;
using std::cin;

void onetime (long*, long*, long*,int* , double*);
void monthly(long*, long*, long*, int*, double*);


int main()
{
    
    long investment_amount;
    long investment_amount_dummy;
    int tenure;
    double rate;
    long returns = 0;
    short choice;

    cout << "Enter the investment amount: ";
    cin >> investment_amount;
    investment_amount_dummy = investment_amount;
    cout << "Enter the tenure in years: ";
    cin >> tenure;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter your choice: " << std::endl;
    cout << "1. One-time\n";
    cout << "2. Monthly\n";
    cin >> choice;

    if(choice == 1)
    {
        onetime(&investment_amount_dummy, &investment_amount, &returns, &tenure, &rate);
    }
    else if(choice == 2)
    {
        monthly(&investment_amount_dummy, &investment_amount, &returns, &tenure, &rate);
    }
    
    system("pause");
    

    return 0;
}


void onetime(long* investment_amount_dummy, long* investment_amount, long* returns, int* tenure, double* rate)
{
    for(int i = 0; i<(*tenure)*10 && i<100; i++)
    {
        (*returns) = round((*investment_amount_dummy) + (*investment_amount_dummy)*(*rate)/100);
        investment_amount_dummy = returns;
        if((i+1)%(*tenure)==0)
        {
            cout << "In " << i+1 << " years, your returns will be " << *returns << " rupees if you invest " << *investment_amount << " rupees." << std::endl;
            *investment_amount = *investment_amount_dummy;
        }
    
    }
    return;
}


void monthly(long* investment_amount_dummy, long* investment_amount, long* returns, int* tenure, double* rate)
{
    (*investment_amount_dummy) *= 10.7231;
    for(int i = 0; i<(*tenure); i++)
    {
        (*returns) = round((*investment_amount_dummy) + (*investment_amount_dummy)*(*rate)/100);
        (*investment_amount_dummy) = (*returns) + ((*investment_amount)*10.7541);
    }
    cout << "In " << *tenure << " years, your returns will be " << *returns << " rupees if you invest " << *investment_amount << " rupees." << std::endl;
    return;
}


