//Elize Starr
// Homework 1 COP2000

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()

{
    cout << setprecision(2) << fixed;
    // RECIPIE FOR 6 PIES
    const float flour6 = 15.0;//cups
    const float sugar6 = 8.0;//tablespoons
    const float salt6 = 3.0;//tablespoons
    const float butter6 = 5.25;//cups
    const float eggs6 = 6.0;//large
    
    cout << " Welcome!\n";
    
    // ENTER NUMBER OF PIES TO BE MADE
    float num_of_pies = 3;
    
    // DIVIDING BY 6 AND THEN MULTIPLYING BY THE AMOUNT OF PIES REQUESTED
    float flourX = (flour6 / 6) * num_of_pies;
    float sugarX = (sugar6 / 6) * num_of_pies;
    float saltX = (salt6 / 6) * num_of_pies;
    float butterX = (butter6 / 6) * num_of_pies;
    float eggsX = (eggs6 / 6) * num_of_pies;
    
    // WORDS TO VIEWER
    cout << "Malachi's Pie Shop-Pie Crust Recipe\n";
    cout <<"-------------------------------\n";
    cout << "You wish to make " << num_of_pies<< " pies\n";
    cout << " The recipe is:\n";
    cout << "Flour " << flourX << " cups\n";
    cout << "Sugar " <<sugarX <<" tablespoons\n";
    cout << "Salt " << saltX << " tablespoons\n";
    cout << "Butter " << butterX << " cups\n";
    cout << "Eggs " << eggsX << " large eggs\n";
    return 0;
}

