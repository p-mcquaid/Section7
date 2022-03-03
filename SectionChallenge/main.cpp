#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector 1 Element 1: " << vector1.at(0) << endl;
    cout << "Vector 1 Element 2: " << vector1.at(1) << endl;
    cout << "Size of vector 1 : " << vector1.size();


    cout << "\n=========" << endl;
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 2 Element 1: " << vector2.at(0) << endl;
    cout << "Vector 2 Element 2: " << vector2.at(1) << endl;
    cout << "Size of vector 2: " << vector2.size() << endl;

    cout << "\n==========" << endl;

    vector<vector<int>> vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    cout << "\n2D Vector row 0 col 0: " << vector2D.at(0).at(0);
    cout << "\n2D Vector row 0 col 1: " << vector2D.at(0).at(1);
    cout << "\n2D Vector row 1 col 0: " << vector2D.at(1).at(0);
    cout << "\n2D Vector row 1 col 1: " << vector2D.at(1).at(1);

    cout << "\n==========" << endl;
    vector1.at(0) = 1000;
    cout << "Changed element 1 in Vector1 to 1000" << endl;
    cout << "\n2D Vector row 0 col 0: " << vector2D.at(0).at(0);
    cout << "\n2D Vector row 0 col 1: " << vector2D.at(0).at(1);
    cout << "\n2D Vector row 1 col 0: " << vector2D.at(1).at(0);
    cout << "\n2D Vector row 1 col 1: " << vector2D.at(1).at(1);

    cout << "\n==========" << endl;
    cout << "Vector 1 Element 1: " << vector1.at(0) << endl;
    cout << "Vector 1 Element 2: " << vector1.at(1) << endl;
    cout << "Size of vector 1 : " << vector1.size();


    return 0;
}