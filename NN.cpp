#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

template<typename T> T sigmoid(T x) {
    return 1 / (1 + exp(-x));
}

class N {
public:
    N();
    //activation function
    template<typename T> vector<T> h(vector<double>&, vector<double>&, vector<double>&);

private:
    int signal;
};

class NN {
public:
private:
};


int main() {

    return 0;
}

N::N() : signal(0) {

}