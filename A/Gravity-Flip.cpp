#include <iostream>
#include <vector>
using namespace std;

ostream &operator<<(ostream &out, vector<int> elemnts)
{
    for (int elemnt : elemnts)
    {
        cout << elemnt << " ";
    }
    return out;
}
void bubbleSort(vector<int> &elements)
{
    int nSwap = -1;
    while (nSwap != 0)
    {
        nSwap = 0;
        for (int i = 0; i < elements.size() - 1; i++)
        {
            if (elements[i] > elements[i + 1])
            {
                swap(elements[i], elements[i + 1]);
                nSwap++;
            }
        }
    }
    cout << elements;
}

int main()
{
    int sizeArray, element;
    cin >> sizeArray;
    vector<int> colmsArray;
    for (int i = 0; i < sizeArray; i++)
    {
        cin >> element;
        colmsArray.push_back(element);
    }
    bubbleSort(colmsArray);
    return 0;
}