#include "student.h"

using std::cin;
using std::cout;
using std::endl;

void set(Student &sa, int n)
{
    cout << "enter a student's name: ";
    getline(cin,sa);
    cout << "enter " << n << "quiz scores: " << endl;
    for (int i = 0; i < n; i++)
        cin >> sa[i];
    while (cin.get() != '\n')
        continue;
}

const int peoples = 3;
const int quizzers = 5;

int main()
{
    Student stud_arr[peoples] = {Student(quizzers), Student(quizzers), Student(quizzers)};
    int i = 0;
    for (i = 0; i < peoples; i++)
        set
}
