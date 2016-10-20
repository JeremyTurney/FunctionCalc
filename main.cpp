/*
Jeremy Turney
023299492
April 17, 2015
Assignment 9
Calculator using <cmath>
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double answer;
    double val;
    char function;
    
    
    cout << "This calculator requires you to enter a function and a number" << endl;
    
    cout << endl;
    
    cout << "The functions are as follows " << endl;
    
        cout << "S- sine" << endl;
        
        cout << "C- cosine" << endl;
        
        cout << "T- tangent" << endl;
        
        cout << "R- square root" << endl;
        
        cout << "N- natural log" << endl;
        
        cout << "X- exit the program" << endl << endl;
    
    
    
    
    
    while (toupper(function) != 'X')
    {
        
        cout << "Please enter a function and a value " << endl;
        cin >> function;
    
            if (toupper(function) == 'S')
            {
                cin >> val;
                
                answer = sin(val);
               
                cout << "The sine of your value is " <<  answer << endl;
            }
        
            else if (toupper(function) == 'C')
            {
                cin >> val;
                
                answer = cos(val);
        
                cout << "The cosine of your value is " << answer << endl;
            }
        
           else if (toupper(function) == 'T')
           {
               cin >> val;
               
               answer = tan(val);
           
               cout << "The tangent of your value is " << answer << endl;
           }
            
           else if (toupper(function) == toupper('R'))
           {
               cin >> val;
               
               answer = sqrt(val);
               
               cout << "The square root of your value is " << answer << endl;
           }
        
           else if (toupper(function) == 'N')
           {
               cin >> val;
               
               answer = log(val);
               
               cout << "The natural log of your value is " << answer << endl;
           }
        
           else if (toupper(function) == 'X')
           {
               cout << "Thanks for using the calculator" << endl;
           }

           else
           {
               cout << "Please enter in a valid function" << endl;
           }
    
    }
    
    return 0;
    
    
}
