#include <iostream>

using namespace std;

int main(){

    char vowels[] {'a', 'e','i','o','u'};
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;
    cout  << "=============" << endl;

    double hiTemps[] {27.0,32.4,29.3,35.1};
    cout << "\nThe first high temperature is " << hiTemps[0] << endl;

    hiTemps[0] = 31.9;//replacing the first element in the array
                      //with a new value
    cout << "The new high temperature is " << hiTemps[0] << endl;
    cout  << "=============" << endl;

    int testScores[]{100,90,80,70,60};
    cout << "First score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 3: " << testScores[3] << endl;
    cout << "Fith score at index 4: " << testScores[4] << endl;


    cout << "\nPlease enter 5 Test scores: ";
    cin >> testScores[0];
    cin >> testScores[1];
    cin >> testScores[2];
    cin >> testScores[3];
    cin >> testScores[4];

    cout << "New First score at index 0: " << testScores[0] << endl;
    cout << "New Second score at index 1: " << testScores[1] << endl;
    cout << "New Third score at index 2: " << testScores[2] << endl;
    cout << "New Fourth score at index 3: " << testScores[3] << endl;
    cout << "New Fith score at index 4: " << testScores[4] << endl;
    
    cout << "Outputting array name: " << testScores << endl;
    

    return 0;
}