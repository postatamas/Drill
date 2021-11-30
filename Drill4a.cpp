#include "std_lib_facilities.h"

int main()
try {
    cout << "Success!\n";
    cout << "Success!\n";
    cout << "Success" << "!\n";
    cout << "Success!" << '\n';

    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
}