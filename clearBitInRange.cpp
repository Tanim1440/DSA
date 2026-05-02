#include <iostream>
using namespace std;

int clearBitInRange(int num, int i, int j)
{
    int first = (~0) << (j + 1);
    int second = (~((~0) << i));
    int bitMusk = first | second;

    num= num & bitMusk;
    cout<<num<<endl;
}

int main()
{
    clearBitInRange(31, 1, 3);
}