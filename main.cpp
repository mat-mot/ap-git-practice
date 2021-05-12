//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
#include <iostream>
#include "Circular_linked_list.h"
using namespace std ;
//decls
void function ()   ;
void print_guide() ;
//mail
int main()
{
    function () ;
    return 0 ;
}
//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
void function ()
{
    Circular_linked_list ll ;
    int dat1   ;
    int dat2   ;

//    ll.pushf(1) ;
    ll.pushf(2) ;
//    ll.pushf(3) ;
    ll.pushf(4) ;
//    ll.pushf(5) ;
    ll.pushf(6) ;

    print_guide() ;
    while(true)
    {
        string order ;
        ll.print() ;
        cout<<"what shoul i do ?  :  " ;
        cin>>order ;

        if     (order=="pushf")
        {
            cout<<"what number do you want to add ? : " ;
            cin>>dat1   ;
            ll.pushf(dat1) ;
        }
        else if(order=="popf")
        {
            ll.popf() ;
        }
        else if(order=="pop")
        {
            cout<<"which data you want to remove ?  : " ;
            cin>>dat1   ;
            ll.pop(dat1) ;
        }
        else if(order=="pusha")
        {
            cout<<"what do you want to add ? : " ;
            cin>>dat1   ;
            cout<<"after which data you want this to be ? : " ;
            cin>>dat2   ;
            ll.push_after(dat1,dat2) ;
        }
        else if(order=="pushb")
        {
            cout<<"what do you want to add ? : " ;
            cin>>dat1   ;
            cout<<"before which data you want this to be ? : " ;
            cin>>dat2  ;
            ll.push_befor(dat1,dat2) ;
        }
        else if(order=="print")
        {
            ll.print() ;
        }
        else if(order=="finish")
        {
            cout<<"\nallright it was nice having you\n" ;
            break ;
        }
        else if(order=="clear")
        {
            system("cls") ;
            cout<<"console was cleared\n" ;
            print_guide() ;
        }
        else
        {
            cout<<"you did not enter a valid argument try again \n" ;
        }
    }
}
//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
void print_guide()
{
    for ( int i=0 ; i < 70 ; i++ )
        cout <<char (178) ;
    cout << "\n" ;
    cout<<char (178) << "                  |------------Guide------------|                   " <<char(178)<< "\n" ;
    for ( int i=0 ; i < 70 ; i++ )
        cout <<char (178) ;
    cout << "\n" ;
    cout  <<char (178)<<" pushf       :  for adding data to the beginin                      " <<char (178) << endl
          <<char (178)<<" popf        :  for deleting the first data                         "<<char (178)<< endl
          <<char (178)<<" pop         :  for deleting data                                   "<<char (178)<< endl
          <<char (178)<<" pusha       :  for adding data after  an existing data             "<<char (178)<< endl
          <<char (178)<<" pushb       :  for adding data before an existing data             "<<char (178)<< endl
          <<char (178)<<" print       :  for printing data                                   "<<char (178)<< endl
          <<char (178)<<" finish      :  stopping the program                                "<<char (178)<< endl
          <<char (178)<<" clear       :  for clearing the console                            "<<char (178) << endl;
    for ( int i=0 ; i < 70 ; i++ )
        cout <<char (178) ;
    cout << "\n\n\n" ;
}
//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
