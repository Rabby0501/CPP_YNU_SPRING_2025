#include <iostream>
using namespace std;

int main() {
    vector<int> v { 1, 2, 3, 4, 5};
    
      // Using range based for loop to print vector
      for (auto i: v) {
          cout << i << " ";
    }
      
    return 0;
}
