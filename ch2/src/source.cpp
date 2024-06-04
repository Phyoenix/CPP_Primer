#include <iostream>

using std::cout, std::endl;

int global_int = 42;

int main()
{
    int unique = 0;
    cout << global_int << " " << unique << endl;
    int global_int = 0;
    cout << global_int << " " << unique << endl;
    cout << ::global_int << " " << unique << endl;
    return 0;
}
