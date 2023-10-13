#include <iostream>
using namespace std;
int main() {

int number;
cout << "give any number for creating table";
cin >> number;

int length;
cout << "give any number for creating table";
cin >> length;

cout << "\n";
for (int i = 0; i <= length; i++) {
cout << number << "x" << i+1 << "=" << number * i << "\n";
}

}
