#include <bits/stdc++.h>
using namespace std;

template <typename T> 
struct matrix {
    int m, n;
    vector<vector<T>> data;
    matrix(size_t x, size_t y) {
        m = x;
        n = y;
        data.assign(m, vector<T> (n, (T)0));
    }
    matrix(size_t x, size_t y, T val) {
        m = x;
        n = y;
        data.assign(m, vector<T> (n, val));
    }
    matrix(vector<vector<T>> a) {
        m = a.size();
        n = a[0].size();
        data = a;
    }
public:
    vector<T>& operator [] (size_t i) {
        return data[i];
    }
    friend matrix& t(const matrix& a) {
        
    }
    matrix& resize(size_t x, size_t y, T val) {
        m = x;
        n = y;
        data = vector<vector<T>> (x, vector<T> (y, val));
        return *this;
    }
    static matrix I(size_t n) {
        matrix res (n, n);
        for (int i = 0; i < n; ++i) {
            res[i][i] = 1;
        }
        return res;
    }
    friend ostream& operator << (ostream& o, const matrix& a) {
        for (int i = 0; i < a.m; ++i) {
            for (int j = 0; j < a.n; ++j) {
                o << a.data[i][j];
                o << (j == a.n-1 ? "\n" : " ");
            }
        }
        return o;
    }
    friend istream& operator >> (istream& i, const matrix& a) {
        size_t m, n;
        i >> m >> n;
        a = matrix(m, n);
        for (int k = 0; k < m; ++k) {
            for (int j = 0; j < n; ++j) {
                i >> a[k][j];
            }
        }
        return i;
    }
    matrix& operator += (const matrix& a) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] += a.data[i][j];
            }
        }
        return *this;
    }
    matrix& operator -= (const matrix& a) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] -= a.data[i][j];
            }
        }
        return *this;
    }
    matrix& operator += (T c) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] += c;
            }
        }
        return *this;
    }
    matrix& operator -= (T c) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] -= c;
            }
        }
        return *this;
    }
    matrix& operator *= (int c) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] *= c;
            }
        }
        return *this;
    }
    matrix& operator /= (int c) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] /= c;
            }
        }
        return *this;
    }
    friend matrix operator + (const matrix& a, const matrix& b) {
        return matrix(a) += b;
    }
    friend matrix operator - (const matrix& a, const matrix& b) {
        return matrix(a) -= b;
    }
    friend matrix operator + (const matrix& a, const int c) {
        return matrix(a) += c;
    }
    friend matrix operator - (const matrix& a, const int c) {
        return matrix(a) -= c;
    }
    friend matrix operator * (const matrix& a, const int c) {
        return matrix(a) *= c;
    }
    friend matrix operator / (const matrix& a, const int c) {
        return matrix(a) /= c;
    }
    friend matrix operator * (const matrix& a, const matrix& b) {
        assert(a.n == b.m);
        matrix prod (a.m, b.n);
        for (int i = 0; i < a.m; ++i) {
            for (int j = 0; j < b.m; ++j) {
                for (int k = 0; k < b.n; ++k) {
                    prod[i][k] += a.data[i][j] * b.data[j][k];
                }
            }
        }
        return prod;
    }
    friend matrix pow(const matrix& a, int e) {
        assert(a.m == a.n);
        matrix res = I(a.m);
        matrix b (a.data);
        while (e) {
            if (e % 2) {
                res = res * b;
            }
            e /= 2;
            b = b * b;
        }
        return res;
    }
};

int main() {
    typedef matrix<int> mat;
    mat m = mat(2, 2);
    m[0][0] = m[1][1] = 2;
    cout << m << endl;
    cout << pow(m, 10);
    cout << (m * m) << endl;
    cout << (m * m)[0][0] << endl;
    m += m;
    cout << m << endl;
    m += 2;
    cout << m << endl;
    m /= 2;
    cout << m << endl;
    return 0;
}
