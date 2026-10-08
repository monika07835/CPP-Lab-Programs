#include <iostream>
#include <string>
using namespace std;

// level default to 1(INFO): only the message is mandatory
void logmsg(const string& msg, int level = 1)
{
    const string tag[] = {"", "INFO", "WARN", "ERROR"};
    cout << "[" << tag[level] << "] " << msg << endl;
}

// Simple interest with default rate of 7.5%
double interest(double principal, double years, double rate = 7.5)
{
    return principal * rate * years / 100.0;
}

int main()
{
    logmsg("System started");       // uses default level=1
    logmsg("Low memory", 2);        // overrides default

    cout << "Interest = " << interest(10000,2) << endl;       // default rate
    cout << "Interest = " << interest(10000,2,9.0) << endl;  // custom rate

    return 0;
}