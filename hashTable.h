//Hunter Vaccaro
//hpv8hf
//10/20/2019
//hashTable.h

#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <vector>
#include <list>
#include <string>
#include <iterator>

#include <iostream>
using namespace std;

class hashTable{
 public:
  hashTable(int x);
  ~hashTable();
  bool contains(string s);
  int hash(string s);
  void insert(string s);

 private:
  vector<list<string>> *storage;
  int getNextPrime(unsigned int n);
  bool checkprime(unsigned int p);
};
#endif 
