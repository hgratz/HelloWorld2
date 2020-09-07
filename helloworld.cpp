#include <iostream>
#include "testme.hpp"
#include "returnme.cpp"
using namespace std;

int main()
{  
    //add comment
    string r;
    cout << "Enter Something new again" << endl;
    cin>>r;
    cout << r << endl;
    cout << returnme();
    return 0;
}

