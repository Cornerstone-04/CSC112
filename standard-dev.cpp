#include <iostream>
#include <math.h>

using namespace std;

// declare function to calculate the standard deviation
double calculateStandardDeviation(double scoreOne, double scoreTwo, double scoreThree, double scoreFour)
{
    // first calculate value of the mean
    double mean = (scoreOne + scoreTwo + scoreThree + scoreFour) / 4.0;

    double squared_deviation_1, squared_deviation_2, squared_deviation_3, squared_deviation_4, standard_deviation;

    // subtract value of the mean from each score and find the square of the result
    squared_deviation_1 = pow((scoreOne - mean), 2);
    squared_deviation_2 = pow((scoreTwo - mean), 2);
    squared_deviation_3 = pow((scoreThree - mean), 2);
    squared_deviation_4 = pow((scoreFour - mean), 2);

    // calculate the sum of the squared deviations
    double totalSquaredDeviations = squared_deviation_1 + squared_deviation_2 + squared_deviation_3 + squared_deviation_4;

    // calculate the standard deviation
    standard_deviation = sqrt(totalSquaredDeviations / 4.0);

    return standard_deviation;
}

int main()
{
    double scoreOne, scoreTwo, scoreThree, scoreFour;

    // prompt user to enter value for score 1
    cout << "Score 1: ";
    cin >> scoreOne;

    // prompt user to enter value for score 2
    cout << "Score 2: ";
    cin >> scoreTwo;

    // prompt user to enter value for score 3
    cout << "Score 3: ";
    cin >> scoreThree;

    // prompt user to enter value for score 4
    cout << "Score 4: ";
    cin >> scoreFour;

    // print the standard deviaton of the four scores
    cout << "Standard deviation: " << calculateStandardDeviation(scoreOne, scoreTwo, scoreThree, scoreFour);

    return 0;
}
