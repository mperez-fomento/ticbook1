#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Generador del número PI\n";
    cout << "-----------------------\n";
    cout << "Cuántas cifras quiere? ";
    int cifras;
    cin >> cifras;
    if (cifras > 100) {
        cout << "Son demasiadas: lo dejamos en 100.\n\n";
        cifras = 100;
    }
    else if (cifras < 3) {
        cout << "Esas las conoce todo el mundo. Lo dejamos en 10.\n";
        cifras = 10;
    }
    int n = 10*cifras/3 + 1;
    vector<int> A;
    vector<int> B;
    vector<int> remainders;
    vector<int> res;
    A.push_back(1);
    B.push_back(10);
    remainders.push_back(2);
    for (int i = 1; i < n; ++i) {
        A.push_back(i);
        B.push_back(2*i + 1);
        remainders.push_back(2);
    }
    for (int i = 0; i < n; ++i) {
        int carry = 0;
        int sum = 0;
        for (int j = n - 1; j > 0; --j) {
            remainders[j] *= 10;
            remainders[j] += carry;
            int q = remainders[j]/B[j];
            int r = remainders[j]%B[j];
            remainders[j] = r;
            carry = q*A[j];
        }
        remainders[0] *= 10;
        remainders[0] += carry;
        int q = remainders[0]/B[0];
        int r = remainders[0]%B[0];
        res.push_back(q);
        remainders[0] = r;
    }
    cout << res[0] << ".";
    for (int i = 1; i < cifras; ++i) {
        std::cout << res[i];
    }
    std::cout << "\n";
}
