#include <iostream>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter your base number: ";
    cin >> N;
    if ((N <= 0) || (10 <= N)) {
        return 1;
    }
    
    cout << "Enter your exponent: ";
    cin >> M;
    if ((M < 1) || (10 < M)) {
        return 1;
    }

    cout << N << " to power number: ";

    int power = 1;
    for (int i = 1; i <= M; i++) {
        cout << power << " ";
        power *= N;
    }

    cout << endl;

    return 0;
}
