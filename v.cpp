#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num;
    num.push_back(2);
    num.push_back(3);
    num.push_back(5);
    num.push_back(6);
    num.push_back(8);
    num.push_back(11);


    //access element 

    cout<<"first element " << num[0] << endl;

    //iterate over vector


    for(int n : num){
        cout<< n << " ";

    }
    cout<<endl;

    return 0;
}