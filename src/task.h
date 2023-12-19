#include <iostream>
#include <vector>
#include <windows.h>
#include <math.h>
#include <iomanip>

using namespace std;


namespace task1 {
    const double a = -5, b = 5, epsilon = 1e-5;

    double foo_task1(double x);
    double foo_task1_diff(double x);
    double x1_foo_task1(double x);
    double x2_foo_task2(double x);
    double x1_foo_task1_diff(double x);
    double x2_foo_task2_diff(double x);



    void BIM(double a, double b, int &num_it);
    void NEM(double a, double b, int &num_it);
    void SEM(double a, double b, int &num_it);
    void CHM(double a, double b, int &num_it);
    void SIM(double a, int maxIter, int &n_num);

    void main_task1();

}

namespace task2 {
    const double a = -7, b = -5, c = 2, d = 6, epsilon = 1e-7;

    double foo_task2(double x, double y);

    void main_task2();
}

namespace task3 {
    void main_task3();
}