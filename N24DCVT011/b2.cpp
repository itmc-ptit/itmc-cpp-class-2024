/*
4.
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << " " << "b = " << b;
}
5.
#include <iostream>
using namespace std;
int main() {
    string a;
    cout << "ten can nhap: "; cin >> a;
    cout << "Xin chao " << a;
}
6.
#include <iostream>
using namespace std;
int main() {
    double n; 
    cout << "nhap 1 so thuc: ";
    cin >> n;
    cout << "so thuc co 2 chu so thap phan " << (int)(n * 100 + 0.5) / 100.0;
}
7.
#include <iostream>
using namespace std;
int main() {
    double n; 
    int i;
    cout << "nhap so thuc: " ;cin >> n;
    cout << "nhap so nguyen: "; cin >> i;
    cout << "tong 2 so " << (double)(n + i);
}
8.
#include <iostream>
using namespace std;
int main() {
    double n, i;
    cout << "nhap so 2 thuc: " ;
    cin >> n >> i;
    cout << "tong 2 so " << (n + i);
}
9.
#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "nhap 2 so thuc: ";
    cin >> a >> b;
    int c = a + b;
    cout << "tong 2 so = " << c; // cout << (int)(a + b);
}
10.
#include <iostream>
using namespace std;
int main() {
    char i;
    cout << "nhap chu " ;
    cin >> i;
    if (i >= 'a' && i <= 'z') {  
       i = i - 32;
       cout << "chu bien doi " << i;
    } else if (i >= 'A' && i <= 'Z'){
       i = i + 32;
       cout << "chu bien doi " << i;
    } else {
        cout << "chu ko hop le ";
    }
}
11.
#include <iostream>
using namespace std;
int main() {
    char i;
    cout << "nhap kis tu: ";
    cin >> i;
    cout << "ma ASCII cua ki tu " << i << " la " << (int)i; 
}
12.
#include <iostream>
using namespace std;
int main() {
    int i = -1;
    while ( i < 0 || i > 255) {
        cout << "nhap so bat ki (0-225): ";
        cin >> i;
    }
    cout << "ki tu tuong ung voi ma ASCII: " << (char)i;
}
*/