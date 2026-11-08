// MUHAMMAD IRFAN BIN ROZALI

#include <iostream>
using namespace std;

// Function prototypes
float getScore();
float calculateAverage(float scores[]);
void displayResult(float average);
void displayTitle();

int main()
{
    float scores[5];
    float average;

    // Function with no argument and no return value
    displayTitle();

    // Get 5 valid scores
    for (int i = 0; i < 5; i++)
    {
        scores[i] = getScore();
    }
    // Calculate average
    average = calculateAverage(scores);

    // Display average and grade
    displayResult(average);
    return 0;
}

// Function 1
// No argument + return value
float getScore()
{
    float score;

    do
    {
        cout << "Enter score: ";
        cin >> score;

        if (score < 0 || score > 100)
        {
            cout << "! ! ! INVALID SCORE" << endl;
        }

    } while (score < 0 || score > 100);
    return score;
}


// Function 2
// Argument + return value
float calculateAverage(float scores[])
{
    float total = 0;

    for (int i = 0; i < 5; i++)
    {
        total = total + scores[i];
    }
    return total / 5;
}


// Function 3
// Argument + no return value
void displayResult(float average)
{
    char grade;

    if (average >= 80)
    {
        grade = 'A';
    }
    else if (average >= 65)
    {
        grade = 'B';
    }
    else if (average >= 50)
    {
        grade = 'C';
    }
    else if (average >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    cout << endl;
    cout << "Average Score: " << average << endl;
    cout << "Grade: " << grade << endl;
}


// Function 4
// No argument + no return value
void displayTitle()
{
    cout << "================================" << endl;
    cout << "       AVERAGE FOR 5 SCORE      " << endl;
    cout << "================================" << endl;
}