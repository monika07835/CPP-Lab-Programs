#include <iostream>
using namespace std; // std::now optional for cout, cin, endl

// Swap using REFERENCES (clean, no &, or & at call site)
void swapRef(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

// Swap using POINTERS (the C way... shown for contrast)
void swapPtr(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 10, y = 20;

    swapRef(x, y);
    cout << "After swapRef = x = " << x << " y = " << y << endl;

    swapPtr(&x, &y);
    cout << "After swapPtr x = " << x << " y = " << y << endl;

    int &alias = x; // alias is another name for x
    alias = 99;     // change x too

    cout << "x via alias = " << x << endl;

    return 0;
}