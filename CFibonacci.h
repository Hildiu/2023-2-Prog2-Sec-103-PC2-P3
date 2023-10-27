//
// Created by MARIA HILDA BERMEJO RIOS on 10/22/23.
//

#ifndef PREG_03_CFIBONACCI_H
#define PREG_03_CFIBONACCI_H

#include <iostream>
#include <vector>
using namespace std;

class CFibonacci
{ private:
    int nter;
    vector<int> v;
public:
    CFibonacci(int n);
    virtual ~CFibonacci(){}
    int getUltimo();
    int getNTermino(int n);
    int suma();
    vector<int> serie();
    vector<int> delUltimoAlPrimero();
};


#endif //PREG_03_CFIBONACCI_H
