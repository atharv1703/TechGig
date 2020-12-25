#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str[4], temp;

    for(int i = 0; i < 4; i++)
    {
        cin >> str[i];
    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }


    for(int i = 0; i < 4; i++)
    {
       cout << str[i] << endl;
    }
    return 0;
}