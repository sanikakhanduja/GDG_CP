#include <bitset>
#include <iostream>
using namespace std;

int main() {
    bitset<8> b(6);

    cout << "b = " << b << endl;
    cout << "count(): " << b.count() << endl;
    cout << "size(): "  << b.size()  << endl;

    b.flip(2);
    cout << "flip(2): " << b << endl;

    b.set(0);
    cout << "set(0): " << b << endl;

    b.reset(4);
    cout << "reset(4): " << b << endl;

    cout << "all(): "  << b.all()  << endl;
    cout << "any(): "  << b.any()  << endl;
    cout << "none(): " << b.none() << endl;
}
