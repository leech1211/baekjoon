#include <iostream>
using namespace std;

string toBinary(int n)
{
    string r;
    while (n != 0) {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}

int main()
{
	int X;
	string binary;
    int length;
    int sol = 0;

	cin >> X;
    binary = toBinary(X);
    length = binary.length();

    for (int i = 0; i < length; i++)
    {
        if (binary[i] == '1')
        {
            sol++;
        }
    }

    cout << sol;
	
}