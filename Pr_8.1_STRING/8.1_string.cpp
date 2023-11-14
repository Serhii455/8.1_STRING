#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find("!!!", pos)) != string::npos)
    {
        pos += 3;  // Move past the found "!!!" to avoid counting overlapping sequences
        k++;
    }
    return k;
}


string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find("!!!", pos)) != string::npos)
    {
        s.replace(pos, 3, "** ");
        pos += 3;  // Move past the replaced sequence
    }
    return s;
}



int main()
{
    string str;

    cout << "Enter string:" << endl;

    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of '!!!'" << endl;

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
