#include <iostream>
#include <string>
#include <vector>

using namespace std;

double* foo()
{
    double* arr = new double(10);
    delete[] arr;
    return arr;
}

int main()
{

}