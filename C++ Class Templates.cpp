#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#include <string>

template <typename T>
class AddElements{
    public :
    T data;
    // constructor :
    AddElements(T data){
        this->data = data;
    }
    // add
     T add(T data){
         this->data += data;
         return this->data;
     }
     //
      T concatenate(T data){
          this->data = this->data + data;
          return this->data;
      }
};
// Input Output Asynchronous Breaking for Fast I/O
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
