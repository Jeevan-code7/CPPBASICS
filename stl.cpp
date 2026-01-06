#include <bits/stdc++.h>
using namespace std;

void explainpair()
{
    // pair<int, int> pr1 = {20, 2};
    // cout << pr1.first << endl
    //      << pr1.second << endl;

    // pair<pair<int, char>, int> pr3 = {{2,'e'},7};
    // cout << pr3.first.first <<pr3.first.second<<pr3.second;

    // vector

    /*vector<int> vec;
   vec.push_back(20);
    vec.push_back(89);
    vec.emplace_back(90);

    cout << vec.size()<<endl;
    for(int i=0;i<=vec.size();i++){
        cout << vec[i]<<endl;
    }*/

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    /*vector<int>::iterator beginitr = vec.begin();
    vector<int>::iterator enditr = vec.end();
    enditr = enditr - 1;
    for (vector<int>::iterator i = beginitr; i <= enditr; i++)
    {
        cout << *i << " ";
    }*/

    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();
    for (auto i = reverseBegin; i < reverseEnd; i++)
    {
        cout << *i << " ";
    }
}

int main()
{
    explainpair();
    return 0;
}