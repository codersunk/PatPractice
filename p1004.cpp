#include <iostream>
#include <string>
using namespace std;

int main()
{
    int max = 101, min = 0, socre, n;
    cin >> n;
    string name, number, maxname, minname, maxnum, minnum;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> number >> socre;
        if (max < socre)
        {
            max = socre;
            maxname = name;
            maxnum = number;
        }
        if (min > socre)
        {
            min = socre;
            minname = name;
            minnum = number;
        }
    }
    cout << maxname << " " << maxnum << endl
         << minname << " " << minname;
    return 0;
}