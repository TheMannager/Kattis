// Header file for input output functions
#include<iostream>
#include <string>
#include <fstream>


using namespace std;

// main function -
int main()
{
  int sections;
  ifstream in;
  float answer;
  answer = 0;
  //in.open("1.in");
  std::cin >> sections;
  float years [sections];
  float modifier [sections];
  for (size_t i = 0; i < sections; i++){
    cin>>modifier[i];
    cin>>years[i];
  }
  for (size_t i = 0; i < sections; i++){
    answer += (modifier[i]*years[i]);
  }
  std::cout << answer;

  //prints what was scanned in
/*  std::cout << sections << '\n';
  for (size_t i = 0; i < sections; i++){
    std::cout << modifier[i] << ' ' << years[i] << '\n';
  }*/




	return 0;
}
