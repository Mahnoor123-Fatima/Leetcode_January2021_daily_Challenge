#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int nums[n];
    int i;
    for(i=0; i<=n; i++){
    if(i==0){
       nums[i] = 0;

    }
    else if(i==1){
        nums[i] = 1;

    }
    else if(i%2==0){
        nums[i] = nums[i/2];

    }
    else if(i%2!=0){
        nums[i] = nums[i/2] + nums[i/2+1];

    }
    }

    int max = nums[0];
    for(i=0; i<=n; i++){
        if (nums[i] > max)
            max = nums[i];
    }
     cout<<"max="<<max<<"\n";
}
