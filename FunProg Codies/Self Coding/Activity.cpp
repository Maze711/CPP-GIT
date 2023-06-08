#include <iostream>
#include <string>

using namespace std;

int main(){
    string name, address, emailaddress;
    long long int contact;
    float temp;
    //Getting your name
    cout << "Enter your Full Name: ";
    getline(cin, name);
    cout << "Welcome " << name << endl;

    //Getting your add
    cout << "Enter your Address: ";
    getline(cin, address);
    cout << "Your address is: " << address << endl;

    //Getting your email add
    cout << "Enter your Email Address: ";
    getline(cin, emailaddress);
    cout << "Your Email Address is: " << emailaddress << endl;

    //Getting your contact
    cout << "Enter your Phone number: ";
    cin >> contact;
    cout << "Your Contact is: " << (long long)contact << endl;

    //Getting your temp.
    cout << "Enter your Temperature: ";
    cin >> temp;
    cout << "Your Temp is: " << (float)temp << endl;
}