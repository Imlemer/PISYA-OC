// cout<<"String's length is : "<<s.length()<<endl;
#include <iostream>
#include <cstdlib>
#include <fstream>

// g++ string_counter.cpp -o c

using namespace std;
int main () {
    cout << "This is a character counter! Type in your text to see how many characters it has! (NO SPACES!)" << endl;
    string inp="hi";
    cin >> inp;
    cout << "String's length is " << inp.length () << endl;
    
    system("pause>nul");
    return 0;
}