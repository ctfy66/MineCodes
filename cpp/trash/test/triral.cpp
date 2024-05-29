#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;

    cout << "Please enter some text, press Enter to finish:" << endl;
    getline(cin, input);

    cout << "You entered: " << input << endl;
    
    return 0;
}
