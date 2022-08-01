#include <iostream>

using namespace std;

float meters; //global variable

float howmany_inches(float m) // header of function //m is formal argument
{
    return m*39.37;// body of function
}

float howmany_yards(float y);

void howmany_miles(float m)
{
    cout<<"In Miles: "<<m*0.0006213;
}


int main()
{
    cout << "This program converts given number of meters into yards, inches and miles" << endl;
    cout<<"Give number of meters"<<endl;
    cin>>meters;

    cout<<"Inches:"<<howmany_inches(meters)<<endl; //actual argument
    cout<<"Yards:"<<howmany_yards(meters)<<endl;
    howmany_miles(meters);
    cout<<endl<<"Press any key to exit";
    getchar();
    getchar();
    return 0;
}

float howmany_yards(float y)
{
    return y*1.0936;
}
