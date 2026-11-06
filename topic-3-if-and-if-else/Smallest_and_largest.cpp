#include <iostream>
using namespace std ;
int mai ()
{
    int A , B , C , D ;
    int largest , smallest ;

    cout<<"enter the A \nB \nC \nD \n" ;
    cin>> A , B , C , D ;

    largest = A ;
    smallest = A ;

    if(B > largest )
          cout<<B<< "\n";
    else if(C > largest)
          cout<<C<<"\n" ;
    else if(D > largest)
          cout<<D<<"\n" ;                
    else if(B < smallest)
          cout<<B<<"\n" ;
    else if(C < smallest)
          cout<<C<<"\n" ;
    else if(D < smallest)    
          cout<<D<<"\n" ;
    cout<<"largest: "<<largest<<"\n""smallest: "<<smallest<<"\n";    

    return 0 ;
}