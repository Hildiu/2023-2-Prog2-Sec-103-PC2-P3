//
// Created by MARIA HILDA BERMEJO RIOS on 10/22/23.
//

#include "CFibonacci.h"

CFibonacci::CFibonacci(int n)
{int t1,t2, termino;

  nter = n;
  t1 = 0;
  t2 = 1;
  v.push_back(t1);
  v.push_back(t2);
  for(int contador = 2; contador<nter; contador++)
  {
    termino = t1 + t2;
    v.push_back(termino);
    t1 = t2;
    t2 = termino;
  }
}

int CFibonacci::getUltimo()
{
  return v[v.size()-1];
}

int CFibonacci::getNTermino(int n)
{
  if(n>=v.size() )
    return -1;
  return v[n];
}

int CFibonacci::suma()
{
  int s =0;
  for( int i=0; i<v.size(); i++)
    s += v[i];
  return s;
}

vector<int> CFibonacci::serie()
{
  return v;
}

vector<int> CFibonacci::delUltimoAlPrimero()
{
  vector<int> alreves;
  for(int c=v.size()-1; c>=0; c--)
    alreves.push_back(v[c]);
  return alreves;
}