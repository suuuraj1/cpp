#include<iostream>
using namespace std;

int main() {

    int n,i;
    cout<<" enter size of your vector "<<endl;
    cin>>n;

    int arr[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cout<<" enter element of your array "<<endl;
        cin>>arr[i];
            ans=ans^arr[i];

    }

    cout<<" answer is "<<ans;
    return 0;
}