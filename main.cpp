//Elize Starr COP2000 HW3


#include <iostream>
#include <cmath>

using namespace std;

void calcInt(float);

int main ()
{
    
    const float GOLD = .01;
    const float SILVER = .02;
    const float BRONZE = .04;
    
    
    int rate = 0;
    int membership_level = 0;
    
    cout << "Welcome to Ronda’s Strikeforce Gym!! \n";
    cout << "************************\n";
    cout << "Membership Fee Calculato";
    cout << "1. Gold \n";
    cout << "2. Silver\n";
    cout << "3. Bronze\n";
    cout << "4. Quit\n";
    cout << "Please enter a your membership level (1-3 Enter 4 to Quit) \n";
    cin >> membership_level;
    
    
    switch (membership_level)
    {
        case 1:
            calcInt (GOLD);
            break;
        case 2:
            calcInt (SILVER);
            break;
        case 3:
            calcInt (BRONZE);
            break;
        case 4:
            cout << "Quitting...goodbye";
            break;
        default:
            cout << "Invalid choice";
            break;
    }
}

void calcInt(float rate)
{
    const int base_rate_formula = 1200;
    const int power_formula = 10;
    int years_wanted = 1;
    int result = 0;
    
    for (years_wanted; years_wanted <= 10; years_wanted++)
    {
        
        result = pow((1 + rate), power_formula) * base_rate_formula;
        cout << "Year " << years_wanted << ": " << result << endl;
    }
    
    
}

