#include "task01.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0); //must be 57.257795130823

    void Vector::set_mag() {mag = sqrt(x*x + y*y);}

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    void Vector::set_x() {x = mag * cos (ang);}

    void Vector::set_y() {y = mag * sin(ang);}

    Vector::Vector() {x = y = mag = ang = 0.0; mode = RECT;}

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect Зrd argument to Vector() -- \n"
                 << "vector set tо 0 \n";
            x = y = mag = ang = 0.0;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT )
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg ;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect Зrd argument to Vector() -- \n"
                 << "vector set tо 0 \n";
            x = y = mag = ang = 0.0;
        }
    }

    Vector::~Vector(){}

    void Vector::polar_mode() {mode = POL;}
    void Vector::rect_mode() {mode = RECT;}

    Vector Vector::operator+(const Vector &b)const {return Vector(x + b.x, y + b.y);}
    Vector Vector::operator-(const Vector &b)const {return Vector(x - b.x, y - b.y);}
    Vector Vector::operator-()const {return Vector (-x, -y);}
    Vector Vector::operator* (double n) const {return Vector(n * x, n * y);}
    Vector operator*(double n ,const Vector &a) {return a * n;}

    std::ostream & operator<< (std::ostream & os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
            os << "(х , у) = ( " << v.x << " , " << v.y << " ) ";
        else if (v.mode == Vector::POL)
            os << " (m , a) = ( " << v.mag << " , "
               << v.ang * Rad_to_deg << " ) ";
        else
            os << " Vector object mode is invalid ";
        return os;
    }

//    std::ostream & operator<< (std::fstream & fs, const Vector &v)
//    {
//        fs.open("out.txt");
//        if (v.mode == Vector::RECT)
//            fs << "(х , у) = ( " << v.x << " , " << v.y << " ) ";
//        else if (v.mode == Vector::POL)
//            fs << " (m , a) = ( " << v.mag << " , "
//               << v.ang * Rad_to_deg << " ) ";
//        else
//            fs << " Vector object mode is invalid ";
//        return fs;
//    }
}

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    std::ofstream output;
    output.open("out.txt");
    cout << "Enter target distance (Q to quit): ";
    while(cin >> target)
    {
        cout << "Enter step length: ";
        if (!( cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        output << "After " << steps << "steps, the subject has the followiпg location : \n";
        output << result << endl;
        result.polar_mode();
        output << "оr \n" << result << endl;
        output << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (Q to quit): ";
    }
    cout << "Bye! \n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
}
