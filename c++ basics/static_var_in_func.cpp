#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x = 1.23, y = 123456.453;
    cout << std::fixed;
    cout << x << "\n"<< y << "\n";
    cout << std::setprecision(2);
    cout << x << "\n"<< y << "\n";
    double z = 1.2e+7;
    cout << z;
    return 0;
}

///////////////////////////////////


double compute(int a, int b){
    
    //complete the code
    
    //cout<<noshow<<fixed;
    
    double ans = double(a)/b;
    
    cout<<noshowpoint<<setprecision(6);
    
    if(a%b == 0)
    {
        cout<<showpoint<<setprecision(2);
    }
    
    return ans;
}

//////////////////////////////////

auto add(auto a, auto b)
{
    return a + b;
}


/////////////////////////////////////

void utility(int &a, int &b)
{
    //code here
    int temp = a;
    
    a = b;
    b = temp;
    
}


    