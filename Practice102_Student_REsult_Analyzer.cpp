#include <iostream>
using namespace std;

class ResultAnalyzer
{
public:
    int calculateResult(int grade1, int grade2)
    {
        return grade1 + grade2;
    }

    int calculateResult(int grade1, int grade2, int grade3)
    {
        return grade1 + grade2 + grade3;
    }

    double calculateResult(double total_marks, int subjects)
    {
        return total_marks / subjects;
    }
};

int main()
{
    ResultAnalyzer analyzer_object;

    int grade1;
    int grade2;
    int grade3;

    cout << "Enter Grade 1: ";
    cin >> grade1;

    cout << "Enter Grade 2: ";
    cin >> grade2;

    cout << "Enter Grade 3: ";
    cin >> grade3;

    int total_two = analyzer_object.calculateResult(grade1, grade2);
    int total_three = analyzer_object.calculateResult(grade1, grade2, grade3);
    double average = analyzer_object.calculateResult((double)total_three, 3);

    cout << "Total of 2 subjects: " << total_two << endl;
    cout << "Total of 3 subjects: " << total_three << endl;
    cout << "Average Grades: " << average << endl;

    return 0;
}
