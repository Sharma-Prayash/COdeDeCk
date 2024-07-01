#include<iostream>           //Provides standard input and output stream objects like 'cin' 'cout' 'endl'

#include<iomanip>           //Provides facilities to manipulate the format of I/O operations, such as setting precision, width, etc. 
                            //Currently not used over here. Just looking good :)

#include<cstdlib>            // Provides facilities for general-purpose functions including dynamic memory management, random number generation, and system commands.
                             //Functions of this used: 'exit' 'abs'

#include<algorithm>          //Provides a collection of functions to perform common algorithmic operations like searching, sorting, and manipulating data.
                             //Functions of this used: '__gcd'

#include<string>             //Provides support for string manipulation.
                             //:)Looks nice
//#include<windows.h>       //  USED FOR THE WINDOWS LOCAL OPERATIOS LIKE Sleep() FUNCTION- ALTERNATIVE FOR "system("pause")"

using namespace std;
class Fraction
{
    int num, den;
    public:
        Fraction(int n = 1, int d = 1) : num(n), den(d) {}    //--------PARAMETERISED CONSTRUCTOR
        //------------INPUT FUNCTION--------------------------
         void input()
         {
            cout<<"Enter the numerator and denominator of the fraction ";
            cin>>num>>den;
            if (den == 0) {
            cout<<"The denominator entered is zero..." << endl;
            exit(0);
            }
         }
         //----------ADDITION------------------------------------------
         Fraction operator+(Fraction f0)
         {
            Fraction f1;
            f1.num = num * f0.den + den * f0.num;
            f1.den = den * f0.den;
            reduce(f1);
            return f1;
         }
         //----------SUBTRACTION----------------------------------------
         Fraction operator-(Fraction f0)
         {
            Fraction f1;
            f1.num = num * f0.den - den * f0.num;
            f1.den = den * f0.den;
            reduce(f1);
            return f1;
         }
         //----------MULTIPLICATION--------------------------------------
         Fraction operator*(Fraction f0)
         {
            int new_num = num * f0.num;
            int new_den = den * f0.den;
            int gcd0 = __gcd(new_num, new_den); // Simplify the fraction
            new_num /= gcd0;
            new_den /= gcd0;
            return Fraction(new_num, new_den);
         }
         //----------DIVISION---------------------------------------
         Fraction operator/(Fraction f0)
         {
            int new_num = num * f0.den;
            int new_den = den * f0.num;
            if(new_den == 0)
            {
                cout<<"The denominator is encountered 0...."<<endl;
                exit(0);
            }
            int gcd0 = __gcd(new_num, new_den); // Simplify the fraction
            new_num /= gcd0;
            new_den /= gcd0;
            return Fraction(new_num, new_den);
         }
         //-----------DISPLAY-------------ALTERNATIVE TO THE INSERTION OPERATOR OVERLOADING FUNCTION
//         void display(){
//            cout<<num<<"/"<<den<<endl;
//            system("pause");
//            system("cls");
            //Sleep(1000);
//         }
         friend ostream& operator<<(ostream& os, const Fraction& ob);   //---------FRIEND FUNCTION FOR THE INSERTION OPERATOR OVERLOADING
         //-----------REDUCE-----------------------------------------
         Fraction reduce(Fraction& f0){
             int n = abs(f0.num), d = abs(f0.den);
            for(int i=2; i<=n && i<=d; i++){
                if(f0.num%i==0 && f0.den%i==0){
                    f0.num/=i;
                    f0.den/=i;
                    i--;
                }
            }
            return(f0);
         }
};
//---------INSERTION OPERATOR OVERLOADING USED FOR PRINTING THE RESULT OF FRACTION
 ostream& operator<<(ostream& os, const Fraction& ob){
            os<<ob.num<<"/"<<ob.den<<endl;
            //Sleep(2000);
            //system("pause");                              //--BOTH SLEEP AND PAUSE COMMANDS ARE TERMINATING THE WHOLE PROGRAM!
            //system("cls");
         }
//void cleanupfunction(){                                  //--------------CLEAN UP FUNCTION USED TO DISPLAY THE MESSAGE BEFORE TERMINATION THE CODE
//    cout << "The denominator entered is zero..." << endl;
//}
//----------------------MAIN FUNCTION--------------------------------------------
int main()
{
//    atexit(cleanupfunction);
    Fraction f1, f2, opt;
    int choice;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"| INATOR IS ZERO THEN THE PROGRAM WILL TERMINATE |"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    do
    {
        cout<<"------------------------------"<<endl;
        cout<<"| Time to enter the fraction |"<<endl;
        cout<<"------------------------------"<<endl;
        f1.input();
        f2.input();
        cout<<"Enter your choice: \n1. Addition\n2. Subtraction\n3. Multiply\n4. Divide\n0. Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
                opt = f1 + f2;
                cout << "The sum of the two fractions is ";
                cout<<opt<<endl;
                break;
            case 2:
                // implement subtraction
                opt = f1 - f2;
                cout << "The difference of the two fractions is ";
                cout<<opt<<endl;
                break;
            case 3:
                // implement multiplication
                opt = f1 * f2;
                cout << "The product of the two fractions is ";
                cout<<opt<<endl;
                break;
            case 4:
                opt = f1 / f2;
                cout << "The quotient of the two fractions is ";
                cout<<opt<<endl;
                break;
            case 0:
             cout<<"Thanks for using...TERMINATING"<<endl;
        }
    }while(choice!=0);
}
