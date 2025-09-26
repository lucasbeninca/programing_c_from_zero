#include     <iostream>
using namespace std;
// type inference
int main() {
    auto a = 1;
    auto b = 2.0;
    auto c = true;

    cout << typeid(a).name() << endl
         << typeid(b).name() << endl
         << typeid(c).name() << endl;

    return 0;
}