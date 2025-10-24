#include <iostream>
using namespace std;

class LowerTriangular {
    int *A;
    int n;
public:
    LowerTriangular(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void set(int i, int j, int x) {
        if (i >= j){
            A[i*(i-1)/2 + (j-1)] = x;}
    }

    int get(int i, int j) {
        if (i >= j){
            return A[i*(i-1)/2 + (j-1)];}
        else{
            return 0;}
    }

    void display() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    LowerTriangular l(4);
    l.set(1,1,1);
    l.set(2,1,2); 
    l.set(2,2,3);
    l.set(3,1,4);
    l.set(3,2,5);
    l.set(3,3,6);
    l.set(4,1,7);
    l.set(4,2,8);
    l.set(4,3,9);
    l.set(4,4,10);
    l.display();
    return 0;
}
