#include <iostream>
#include <vector>
using namespace std;

double calculateAverage(vector<int> &grades)
{
    int sum = 0;

    for(auto it = grades.begin(); it != grades.end(); it++)
    {
        sum += *it;
    }

    return (double)sum / grades.size();
}

int findMinimum(vector<int> &grades)
{
    auto it = grades.begin();
    int minimum = *it;

    for(; it != grades.end(); it++)
    {
        if(*it < minimum)
        {
            minimum = *it;
        }
    }

    return minimum;
}

int findMaximum(vector<int> &grades)
{
    auto it = grades.begin();
    int maximum = *it;

    for(; it != grades.end(); it++)
    {
        if(*it > maximum)
        {
            maximum = *it;
        }
    }

    return maximum;
}

int main()
{
    vector<int> grades;
    int n, grade;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter grades:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> grade;
        grades.push_back(grade);
    }

    cout << "Average Grade: " << calculateAverage(grades) << endl;
    cout << "Minimum Grade: " << findMinimum(grades) << endl;
    cout << "Maximum Grade: " << findMaximum(grades) << endl;

    return 0;
}
