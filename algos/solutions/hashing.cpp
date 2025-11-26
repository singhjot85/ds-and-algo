#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Hashing {
private:
    map<T, int> hashMap;
public:
    Hashing(const vector<T>& input) {
        hashMap = preCompute(input);
    }

    map<T, int> preCompute(const vector<T>& input) {
        map<T, int> hash;
        for (const T& x : input) hash[x]++;
        return hash;
    }

    void insert(const T& x) {
        hashMap[x]++;
    }

    int get(const T& x) {
        return hashMap[x];
    }
};

int main() {
    vector<int> vec = {1,2,3,4,5};

    Hashing<int> hashVec(vec);

    cout << hashVec.get(3);

    return 0;
}
