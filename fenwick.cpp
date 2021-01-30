#ifndef FENWICK_TREE
#define FENWICK_TREE
#include <vector>
#include <iostream>

#define LSB(x) (x & (-x)) // Gets least significant bit of our integer
using namespace std;

class Fenwick {
  private:
    vector<int> fenwick;
  public: 
    Fenwick(int size){
        fenwick.assign(size + 1, 0);
    }
    
    Fenwick(vector<int> src){
        fenwick.assign(src.size() + 1, 0);
        // Initializes in n time
        fenwick[1] = src[0];
        for (int i = 1; i < src.size(); i++) fenwick[i+1] = fenwick[i] + src[i];

        for (int i = src.size()-1; i > 0; i--) {
            int lower_i = (i & (i+1)) - 1;
            if (lower_i >= 0) fenwick[i+1] -= fenwick[lower_i+1];
        }
    }

    int getSum(int index){
        int sum = 0;
        index = index;

        while(index > 0){
            sum += fenwick[index];
            index -= LSB(index);
        }

        return sum;
    }

    int getRangeSum(int lowIndex, int highIndex){
        return getSum(highIndex) - getSum(lowIndex);
    }

    void add(int idx, int delta) {
        while(idx < fenwick.size()){
            fenwick[idx] += delta;
            idx = idx + (idx & (-idx));
        }
    }

    void printTree(){
        for(int num : fenwick){
            std::cout << num << " ";
        }
        std::cout << endl;
    }
};

#endif

void testFenwick(){
    vector<int> v = {2, 4, 5, 5, 6, 6, 6, 7, 7, 8, 9};
    Fenwick f(v);

    cout << "Initializing fenwick tree with values : ";
    f.printTree();
    cout << "Getting sum at index 0: " <<  f.getSum(0) << ", expecting 0" << endl;
    cout << "Getting sum at index 0: " << f.getSum(1) << ", expecting 2" << endl;
    cout << "Getting sum at index 0: " << f.getSum(2) << ", expecting 6" << endl;
    cout << "Getting sum at index 0: " << f.getSum(3) << ", expecting 11" << endl;
    cout << "Getting sum at index 0: " << f.getSum(4) << ", expecting 16" << endl;
    cout << "Incrementing index 1 by 1\n";
    f.add(1, 1);
    cout << "Incrementing index 2 by 2\n";
    f.add(2, 2);
    cout << "Incrementing index 3 by 3\n";
    f.add(3, 3);
    cout << "Getting sum at index 1: " << f.getSum(0) << ", expecting 0"  << endl;
    cout << "Getting sum at index 2: " << f.getSum(1) << ", expecting 3"  << endl;
    cout << "Getting sum at index 3: " << f.getSum(2) << ", expecting 9"  << endl;
    cout << "Getting sum at index 4: " << f.getSum(3) << ", expecting 17"  << endl;
    cout << "Getting sum at index 5: " << f.getSum(4) << ", expecting 22"  << endl;
}

int main(){
    testFenwick();
}
