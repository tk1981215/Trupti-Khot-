#include <iostream>
#include <vector>
using namespace std;

int main() {
    // AND dataset
    vector<vector<int>> X = {{0,0}, {0,1}, {1,0}, {1,1}};
    vector<int> y = {0, 0, 0, 1};

    // weights and bias
    vector<int> w = {0, 0};
    int b = 0;

    int lr = 1;       // learning rate
    int epochs = 5;   // number of iterations

    // training
    for(int epoch = 0; epoch < epochs; epoch++) {
        for(int i = 0; i < X.size(); i++) {
            int z = w[0]*X[i][0] + w[1]*X[i][1] + b;

            // activation function (step)
            int y_pred = (z >= 0) ? 1 : 0;

            // update weights and bias
            w[0] = w[0] + lr * (y[i] - y_pred) * X[i][0];
            w[1] = w[1] + lr * (y[i] - y_pred) * X[i][1];
            b = b + lr * (y[i] - y_pred);
        }
    }

    // output final weights and bias
    cout << "Weights: " << w[0] << " " << w[1] << endl;
    cout << "Bias: " << b << endl;

    // testing
    cout << "\nTesting:\n";
    for(int i = 0; i < X.size(); i++) {
        int z = w[0]*X[i][0] + w[1]*X[i][1] + b;
        int y_pred = (z >= 0) ? 1 : 0;

        cout << X[i][0] << " " << X[i][1] << " -> " << y_pred << endl;
    }

    return 0;
}
