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
    template<typename T> T h(vector<double>&, vector<double>&);

private:
    int signal; // 0 or 1
    float weight;
};

class NN {
public:
private:
};


int main() {

    return 0;
}

N::N() : signal(0), weight(0) {

}

template<typename T> T N::h(vector<double> &signals, vector<double> &biass) {
    for(int i(0); i < signals.size(); i++) {

    }
}