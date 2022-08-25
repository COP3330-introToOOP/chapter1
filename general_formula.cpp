/*
                    Carlos Theran
                      COOP 3330
    This program finds the roots of a quadratic equation                  
*/
#include <iostream> // Library is use for cin and cout
#include <math.h> // Library for math functions
#include <iomanip> // Library is use to manipulate stream manipulators (setw and setprecision)
using namespace std; 

int main()
{
   double a = 0;
   double b = 0;
   double c = 0;
   double sol1 = 0;
   double sol2 = 0;
   
   string answer = "yes";
   string answer2 = "yes";

   while(!answer.compare(answer2)) 
   {
        cout<<"Please provide the coefficients of your equation: ";
        cin>>a>>b>>c;

        double determinant = pow(b,2) - 4*a*c;
        if(determinant >= 0)
        {
            sol1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
            sol2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;
            cout<< left <<"\nThe two solution for this equation are real."<<endl;
            cout<< left <<"First  solution --> "<<setw(4)<< right <<setprecision(3)<<sol1<<endl;
            cout<< left <<"Second solution --> "<<setw(4)<< right <<setprecision(3)<<sol2<<endl;   
        }   
        else
        {
            cout<<"The given quadratic equation does not have real solution, "
                "the descriminant values is "<< determinant <<endl;  
        }
        cout<<"\nDo you want to keep using the application? ";
        cin >> ws;
        getline(cin,answer);
   } 
   return 0;
}