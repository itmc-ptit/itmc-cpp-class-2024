//Viết chương trình nhập 3 cạnh của 1 tam giác, kiểm tra xem đó là tam giác gì (tam giác đều, tam giác cân, tam giác vuông, tam giác thường hay không là tam giác)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"nhập các cạnh của tam giác:";
    cin>>a>>b>>c;
    
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        if (a == b && b == c) {
            cout<<"đây là tam giác đều."<<endl;
    }
        else if (a==b||b==c||c==a){
            cout<<"đây là tam giác cân"<<endl;
        }
        else if ((pow(a,2)+pow(b,2)==pow(c,2))||(pow(a,2)+pow(c,2)==pow(b,2))||(pow(b,2)+pow(c,2)==pow(a,2))){
            cout<<"đây là tam giác vuông"<<endl;
        }
        else {cout<<"đây là tam giác thường"<<endl;}
    }    
    else{cout<<"đây không phải một tam giác"<<endl;
    }
    
    return 0;
}