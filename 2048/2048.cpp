// Header file for input output functions
#include<iostream>
#include <string>


using namespace std;

// main function -
int main()
{
  int numberOfCases;
  // r = expected revunue no adverts
  // e =  expected revunue with adverts
  // c = cost of adverts
  int r;
  int e;
  int c;
  cin >> numberOfCases;
  for (size_t i = 0; i < numberOfCases; i++) {
    cin >> r;
    cin >> e;
    cin >> c;
    if ((e-c)==r) {
      cout << "does not matter";
    }
    if ((e-c)>r) {
      cout << "advertise";
    }
    if ((e-c)<r) {
      cout << "do not advertise";
    }
    cout <<'\n';
  }




	return 0;
}
