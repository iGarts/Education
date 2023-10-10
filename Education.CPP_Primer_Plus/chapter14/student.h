#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <valarray>

class Student
{
private:
    typedef std::valarray<double> array_db;
    std::string name;
    array_db scores;
    std::ostream & arr_out(std::ostream &os) const;
public:
    Student() : name("empty name"), scores() {}
    Student(const std::string &s, int n) : name(s), scores(n) {}
    Student(const std::string &s, array_db & a) : name(s), scores(a) {}
    Student(const char * str, const double * da, int n) : name(str), scores(da, n) {}
    explicit Student(const std::string &s) : name(s), scores() {}
    explicit Student(int n) : name("empty name"), scores(n) {}
    ~Student() {}
    double average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[] (int i) const;
    friend std::istream & operator>>(std::istream &is, Student &stud);
    friend std::istream & getline(std::istream &is, Student &stud);
    friend std::ostream & operator<<(std::ostream &os, const Student &stud);

};

double Student::average() const
{
    if (scores.size() > 0)
        return scores.sum() / scores.size();
    else return 0;
}

const std::string & Student::Name() const
{
    return name;
}

double & Student::operator[](int i)
{
    return scores[i];
}

double Student::operator[](int i) const
{
    return scores[i];
}

std::ostream & Student::arr_out(std::ostream &os) const
{
    int i = 0;
    int size = scores.size();
    if (size > 0)
    {
        for (i = 0; i < size; i++)
        {
            os << scores[i] << " ";
            if (i % 5 == 4)
                os << std::endl;
        }
        if (i % 5 != 0)
            os << std::endl;
    }
    else os << "empty array";
    return os;
}

std::istream & operator>>(std::istream &is, Student &stud)
{
    is >> stud.name;
    return is;
}

std::ostream & operator<<(std::ostream &os, const Student &stud)
{
    os << "Scores for " << stud.name << std::endl;
    stud.arr_out(os);
    return os;
}

std::istream & getline(std::istream &is, Student &stud)
{
    getline(is, stud.name);
    return is;
}

#endif // STUDENT_H
