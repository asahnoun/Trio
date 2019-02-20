#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&); // sort 3 input from greatest to least
void swap(int&,int&); // swap variables

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}
/***************************brief************************
function: sortDescending
Attributes: int , int ,int
sort numbers by descending order if first is less than two we swap, if first is less than two we swap them 
if second is less than three we swap
*/
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}
/***************************brief************************
function: swap
Attributes: int , int
swap two varaibles
*/
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
