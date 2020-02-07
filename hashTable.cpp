//Hunter Vaccaro
//hpv8hf
//10/20/2019
//hashTable.cpp

#include <iostream>
#include "hashTable.h"
#include <iterator>
#include <vector>
#include <list>
#include <string>
using namespace std;

hashTable::hashTable(int x){ //constructor 
  storage = new vector<list<string>>();
  if(checkprime(x)){ //checks for a prime number hashtable size
    storage -> resize(x);
  }
  else { //resizes to a primenumber
    storage -> resize(getNextPrime(x));
  }
}

hashTable::~hashTable(){ //destructor
  delete storage;
}
 
bool hashTable::contains(string s){//checks to see if the string s is contained inside the hashtable
  int a = hash(s);
  if(s.size()>=3){
  for(list<string>::iterator helper = storage->at(a).begin(); helper != storage->at(a).end();helper++){
    if(*helper == s){ //found word
      return true;
    }
  }
  }
  return false;
}

int hashTable::hash(string s){ // hashing method for the string s
  int p = s.size();
  int x = 0;
  if(s.size()>=3){
    x = s[0] + s[1]*10 + s[2] *100;
    x = x % storage -> capacity();
    return x;
  }
  return 0;
}

void hashTable::insert(string s){ // inserts string s into the hashtable. adds to the end of the chaining
  if(s.size()>=3){
    if(!contains(s)){
      int a = hash(s);
      storage->at(a).push_back(s);
    }
  }
}

//sees if p is prime number
bool hashTable::checkprime(unsigned int p) {
    if ( p <= 1 ) // 0 and 1 are not primes; the are both special cases
        return false;
    if ( p == 2 ) // 2 is prime
        return true;
    if ( p % 2 == 0 ) // even numbers other than 2 are not prime
        return false;
    for ( int i = 3; i*i <= p; i += 2 ) // only go up to the sqrt of p
        if ( p % i == 0 )
            return false;
    return true;
}

//returns the nextprime number 
int hashTable::getNextPrime (unsigned int n) {
    while ( !checkprime(++n) );
    return n; // all your primes are belong to us
}

