//Alan Escamilla
//COSC 1436, C++, (10550), M, 6 pm ,Central
//Chapter: 2
//Excercise: #4
//Assignment Name: Source Code – Restaurant Bill
//Due Date:  3/10/2020

//=====================================

//This program will compute the tax and tip on a restaurant bill for a patron.

#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
    // naming input 
    
    double _mealCost, _comwTax, _comwtaxAdded, _comwtaafterTip;
    
    // naming constants 
    
    const double _mealtaxRate = .0675;
    const double _mealtipRate = .20;
    
    // set the desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;
    
    // ask user for input
    
    cout <<"Enter cost of meal:$";
    cin >> _mealCost;
    
    // Adding line of receipt
    cout << "======================" << endl;
    
    // Function for cost of meal
    cout << right << "Cost of meal:  ";
    
    cout << "$"<< _mealCost <<endl;
    
    _comwTax = (_mealCost * _mealtaxRate); 
    
    // function of tax 
    
    cout << right << "Tax:(6.75%):   " << "$" << _comwTax << endl;
    
    // function for tip 
    
    
    _comwtaxAdded = _mealCost + _comwTax;
    _comwtaafterTip = (_comwtaxAdded *  _mealtipRate);
    
    cout << right << "Tip:(20%):     " << "$" << _comwtaafterTip << endl;

    cout << "======================" << endl;
    // the total cost of a meal with tax and tip calulated after cost and tip
    
    cout << right << "Total Bill:    " << "$"<< _mealCost + _comwTax + _comwtaafterTip << endl;
    
    
    
    

    return 0;
    
}

