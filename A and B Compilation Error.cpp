#include<iostream>

using namespace std;

int main()
{
    int i, Number, errors;

    cin>>Number;

    int Run1=0, Run2=0, Run3=0;

    for(i=0; i<Number; i++)
    {
        cin>> errors;
        Run1 = Run1+ errors;
    }

    for(i=0; i<Number-1; i++)
    {
        cin>> errors;
        Run2 = Run2+ errors;
    }

    for(i=0; i<Number-2; i++)
    {
        cin>> errors;
        Run3 = Run3+ errors;
    }

    cout<<Run1-Run2<<endl;
    cout<<Run2-Run3<<endl;

    return 0;
}
