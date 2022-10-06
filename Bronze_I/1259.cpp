#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    while(true)
    {
        string input = "123";
        cin >> input;

        if(input == "0")
            break;

        string copy = input;
        reverse(copy.begin(), copy.end());

        if(input == copy)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" <<endl;
        }
    }

    return 0;
}