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

void function ()
{
    Circular_linked_list ll ;
    int dat1   ;
    int dat2   ;

    ll.pushf(1) ;
    ll.pushf(2) ;
    ll.pushf(3) ;
    ll.pushf(4) ;
    ll.pushf(5) ;
    ll.pushf(6) ;
print_guide() ;
    while(true)
    {
    string order ;

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
            ll.push_after(dat2,dat1) ;
            }
    else if(order=="pushb")
            {
            cout<<"what do you want to add ? : " ;
            cin>>dat1   ;
            cout<<"before which data you want this to be ? : " ;
            cin>>dat2  ;
            ll.push_befor(dat2,dat1) ;
            }
    else if(order=="print")
            {
            cout<<"datas Are : " ;
            ll.print() ;
            cout<<endl ;
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

void print_guide()
{
cout<<"|---------Guide---------|\n"
    <<" pushf       :  for adding data to the begining\n"
    <<" popf        :  for deleting the first data \n"
    <<" pop         :  for deleting data \n"
    <<" pusha       :  for adding data after  an existing data \n"
    <<" pushb       :  for adding data before an existing data \n"
    <<" print       :  for printing data \n"
    <<" finish      :  stopping the program \n"
    <<" clear       :  for clearing the console \n\n" ;
}
//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
