#include <iostream>
#include <vector>//must be included to use vetors 


using namespace std;

int main(){

    //vector<int> testScores {100,95};
    //cin >> testScores.at(5); *Causes an error because its out of bounds,
    //compiler catches it in terminal 

    /* vector<char> vowels {'a','e','i','o','u'};
    cout << vowels.at(0) << endl;
    cout << vowels.at(4);
 */

    //vector<int>testScores(3);//initalise vector with 3 elements all 0
    //vector<int> testScores(3,100);//initalise vector with 3 elements all 100
                                 
    vector<long long unsigned int> testScores{100,98,89};

    //display using array syntax
    /* for (int i = 0; i  < testScores.size(); i++)
    {
        cout << testScores[i] << endl;
    } */
    
    
    //display using vector syntax                    
    for (int i = 0; i < testScores.size(); i++)
    {
        cout << testScores.at(i) << endl;
    }
    cout << "There are " << testScores.size() <<
    " test results in the vector " << endl;

    cout << "=============" << endl;

    cout << "Please enter 3 test results" << endl;
    for (int i = 0; i  < testScores.size(); i++){
        cin >> testScores.at(i);
        
    }
    cout << "\nThe updated test results are as follows:" << endl;
    for (long long unsigned int i = 0; i < testScores.size(); i++)
    {
        cout << testScores.at(i) << endl;
    }

    cout << "=============" << endl;
    cout << "Enter a test score to add to the vector" << endl;
    int scoreToAdd {0};
    cin >> scoreToAdd;

    testScores.push_back(scoreToAdd);
    cout << "The Test scores are now as follow: " << endl;
    for (int i = 0; i < testScores.size(); i++)
    {
        cout << testScores.at(i) << endl;
    }
    //cout << "\nCauses Exception!" << testScores.at(10);

    //Declaring 2-D vectors
    vector <vector<int>> filmRatings {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };
    cout << "\n==========" << endl;
    //Display using array syntax
  /*   for (int i = 0; i < filmRatings.size(); i++)
    {
        for (int j = 0; j < filmRatings[i].size(); j++)
        {
            cout << filmRatings[i][j] << endl;
        }
        
    }
     */

    //Display using vector syntax
    for (int i = 0; i < filmRatings.size(); i++)
    {
        for (int j = 0; j < filmRatings[i].size(); j++)
        {
            cout << filmRatings.at(i).at(j);
        }
        cout << "\n";
    }
    
    return 0;
} 