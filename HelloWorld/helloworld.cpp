#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    ofstream outfile;
    outfile.open("helloworld.txt");
    outfile << "Hello World" << endl;
    outfile << "TEST1" << endl;
    outfile.close();
    return 0;
}