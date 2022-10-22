/*
Auther: Mohamed Eladwy.
Date: 6 / 8 / 2022.
Language: C++
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    (num <= 2 || num % 2 != 0) ? cout << "NO" : cout << "YES";
    return 0;
}