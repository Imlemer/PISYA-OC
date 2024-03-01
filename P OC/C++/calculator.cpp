#include <iostream>
#include <cstdlib>
#include <fstream>

// g++ c.cpp -o c

using namespace std;
int main () {
    system("chcp 1251>nul");
    cout << "This is a calculator! Best tool to help you on math exams! " << endl;
    double x=1;
    string y="2";
    double z=3;
    cout << "Enter the first number" << endl;
    cin >> x;
    cout << "Enter the method (+;-;*;/.)" << endl;
    cin >> y;
    cout << "Enter the second number" << endl;
    cin >> z;
   if (int(x) == x)
   {
    if (y == "+")
    {
        double an=x+z;
        cout << "Answer:" << an << endl;
        system("pause>nul");
        return 0;
    }
    else if (y == "-")
    {
        double an=x-z;
        cout << "Answer:" << an << endl;
        system("pause>nul");
        return 0;
    }
    else if (y == "*")
    {
        double an=x*z;
        cout << "Answer:" << an << endl;
        system("pause>nul");
        return 0; 
    }
    else if (y == "/")
    {
        double an=x/z;
        cout << "Answer:" << an << endl;
        system("pause>nul");
        return 0; 
    }
    else
    {
        std::ofstream outfile ("LATEST_LOG.txt");

        outfile << "App closed with error: wrong input type!" << std::endl;

        outfile.close();
        return 0;
    }
   }
   
}