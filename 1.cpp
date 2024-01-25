#include<iostream>
using namespace std;

int main()
{
   int day, month, year;

   cout<<"Enter date: ";
   cin>>day;
   cout<<"\nEnter month: ";
   cin>>month;
   cout<<"\nEnter year: ";
   cin>>year;

   string arr[12] = {"January","February","March","April","May","June","July","August","September","October","November","December" };
   system("clear");
   cout<<"Today's Date is : "<<day<<"-"<<arr[month-1]<<"-"<<year;
   return 0;
}