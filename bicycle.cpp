#include <iostream>
using namespace std;

int main() {
    
    int current_savings;
    int monthly_savings;
    int number_of_months;
    int totalsavings;

    cout<<"+=============================+ "<<endl;
    cout<<"| BIKE 3,000 Php |"<<endl;
    cout<<"+=============================+"<<endl;

    cout<<"Input your current savings: ";
    cin>>current_savings;

    cout<<"Input your monthly savings: ";
    cin>>monthly_savings;

    cout<<"How many months: ";
    cin>>number_of_months;

    totalsavings= current_savings + monthly_savings * number_of_months;

    cout<<"Total Savings: "<< totalsavings <<endl;

    if(totalsavings >= 3000)
    {
        cout<<"=========================== "<<endl;
        cout<<"You Can Purchase The Bike! "<<endl;
        cout<<"=========================== "<<endl;
    }
    else
    {
        cout<<"=========================== "<<endl;
        cout<<"Need more balance! "<<endl;
        cout<<"=========================== "<<endl;
    }
    return 0;
}