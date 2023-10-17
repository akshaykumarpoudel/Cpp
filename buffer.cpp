#include<iostream>
#include<vector>
#define PI 3.14159265358979323846

using namespace std;

    double switchCase(int choice, vector<double> &arr) {
        // code here
        double area;
        switch(choice)
        {
            case 1:
                area=(double)PI*arr[0]*arr[0];
                break;
            case 2:
                area=(double)arr[0]*arr[0];
                break;
        }
        return area;
    }

int main()
{
    vector<double> v={8,2};
    cout<<switchCase(2,v);
    return 0;
}