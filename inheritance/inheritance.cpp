#include <iostream>
#include <vector>

using namespace std;

class Person
{
  protected:
    string firstName;
    string lastName;
    int id;

  public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
  private:
    vector<int> testScores;

  public:
    Student(string first_name, string last_name, int id, vector<int> test_score)
        : Person(first_name, last_name, id), testScores(test_score)
    {
    }
    char calculate()
    {
        char grade;
        int sum = 0;
        // typedef vector<int>::size_type vec_sz;
        size_t size = testScores.size();
        for (size_t i = 0; i < size; i++)
        {
            sum += testScores[i];
        }
        int average = sum / size;
        if (average <= 100 && average >= 90)
        {
            grade = 'O';
        }
        else if (average < 90 && average >= 80)
        {
            grade = 'E';
        }
        else if (average < 80 && average >= 70)
        {
            grade = 'A';
        }
        else if (average < 70 && average >= 55)
        {
            grade = 'P';
        }
        else if (average < 55 && average >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'T';
        }
        return grade;
    }
    // Write your function here
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}