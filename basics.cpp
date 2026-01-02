#include <bits/stdc++.h>
using namespace std;

// int sumofTwoNumbers(int num1 ,  int num2){
//         int res = num1 + num2 ;
//         return res;
// }

int passByValueAndpassByReference(int &x)
{
  x = x + 15;
  return x;
}

int main()
{

  // for loop
  //  for(int i = 10 ; i >= 1 ; i = i - 2){

  //     cout << i << endl ;

  //  }

  // while loop
  //   int i = 1;
  //  while( i <= 10){
  //     cout << i << endl;
  //     i++ ;
  //  }

  // Arrays

  // int num[5] = {3, 2, 4, 2, 5};
  //  for(int i =0 ; i <= 4 ; i++){
  //   cout << num[i]<< endl;
  //  }

  // functions

  //  cout << sumofTwoNumbers(20,10);

  // pass by value and pass by reference

  int num = 20;
  passByValueAndpassByReference(num);
  cout << num;

  return 0;
}
