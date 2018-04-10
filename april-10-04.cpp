#include<iostream>
using namespace std;
int main()
{
    char first[30], last[30];

    cout << "\n\n Print the name reserved where last come first : \n";
    cout << "-----------------------------------------------------\n";

    cout << " Input the First name : ";
    cin >> first;

    cout << " Input the last name : ";
    cin >> last;

    cout << " Name in Reserved is " <<last << " " << first << endl;
    cout << endl;
    return 0;
}
