#include <iostream>
using namespace std;
int main()
{

        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        int lowNum = arr[0];
        int position = 1;
        for (int i = 1; i < size; i++) {
            if (arr[i] < lowNum) {
                lowNum = arr[i];
                position = i + 1;
            }
        }
        cout << lowNum << " " << position << endl;
        return 0;
}