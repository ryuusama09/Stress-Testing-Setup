#include <bits/stdc++.h>
using namespace std;

int rand(int a,int b) {
    return a + rand() % (b - a + 1);
}

int const inf = 1e9;

int main(int argc, char* argv[]){
    srand(atoi(argv[1]));
    int ub = 7;
    int n = rand(1, ub);
    int c = rand(1, ub);
    cout << n << " " << c << "\n";
    for (int i = 1; i <= n; i++)
        cout << rand(0, ub<<2) << " " << rand(1, ub<<2) << "\n";
    cout << "\n";
}