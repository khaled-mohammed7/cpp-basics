#include <iostream>
using namespace std ;
int main ()
{
    int total_minutes , Days , Hour , Minute ;

    cout<<"Enter the total_minutes \n" ;
    cin>> total_minutes ;

    Days = total_minutes / 1440 ;
    Hour =(total_minutes % 1440)/60 ;
    Minute = total_minutes % 60 ;

    cout<< Days << " :Days\t " << Hour << " :Hour\t " << Minute << " :Minute\n " ;
    
    return 0 ;


}