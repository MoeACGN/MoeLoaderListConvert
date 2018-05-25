#include <iostream>

using namespace std;

int main()
{
    char Tmp[10240];
    while (true)
    {
        cin.getline(Tmp, 10240);
        if (Tmp[0] == '\0')
        {
            break;
        }
        for (int i = 0; i < 10239; i++)
        {
            if (Tmp[i + 1] == '|')
            {
                Tmp[i + 1] = '\0';
                cout << Tmp << endl;
                break;
            }
        }
    }
    return 0;
}
