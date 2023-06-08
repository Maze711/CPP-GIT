#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    ofstream file ("name.txt");

    vector<string>names;

    names.push_back("Maze");
    names.push_back("Pogi");
    names.push_back("Mo");

    for(string name:names){
        file << name << endl;
    }
    return 0;
    
}