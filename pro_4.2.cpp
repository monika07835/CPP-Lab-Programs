#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char *data;

public:

    MyString(const char *s)
    {
        data = new char[strlen(s)+1];
        strcpy(data,s);
    }

    ~MyString()
    {
        delete[] data;
    }

    void print() const
    {
        cout << data << endl;
    }
};

int main()
{
    MyString a("hardware");

    MyString b = a;

    a.print();
    b.print();

    return 0;
}