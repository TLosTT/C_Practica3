#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
class Prob
{
public:
    float a, b, x = -8, y;
    int c = 1;
    string s;
    float probeg(float a)
    {
        float b;
        if (a < -4)
        {
            b = -3;
        }
        else if (a < -3)
        {
            b = 2 * a + 6;
        }
        else if (a < 3)
        {
            b = sqrt(9 - pow(x, 2));
        }
        else if (a < 8)
        {
            b = (3 * a - 9) / 5;
        }
        else
        {
            b = 3;
        }
        return b;
    }
    void zapis()
    {
        ofstream prout("text2.txt");
        for (x; x < 10; x++)
        {
            prout << c << " ";
            c++;
            y = probeg(x);
            prout << y << "\n";
        }
        prout.close();
    }
    void chtenie()
    {
        ifstream prin("text2.txt");
        while (getline(prin, s))
        {
            cout << s;
            cout << "\n";
        };
        prin.close();
    }
};

int main()
{
    Prob Prob1;
    Prob1.zapis();
    Prob1.chtenie();
}