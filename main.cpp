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

print_guide() ;
    while(true)
    {
    string order ;

    cout<<"\nwhat shoul i do ?  :  " ;
    cin>>order ;

    if     (order=="pushf")
            {
            cout<<"what number do you want to add ? : " ;
            cin>>dat1   ;
            ll.pushf(dat1) ;
            }
    else if(order=="popf")
            {
//            ll.popf() ;
            }
    else if(order=="pop")
            {
            cin>>dat1   ;
//            ll.pop(dat1) ;
            }
    else if(order=="push_after")
            {
            cin>>dat1   ;
            cin>>dat2   ;
//            ll.push_after(dat1,dat2) ;
            }
    else if(order=="push_before")
            {
            cin>>dat1  ;
            cin>>dat2  ;
//            ll.push_befor(dat1,dat2) ;
            }
    else if(order=="print")
            {
            ll.print() ;
            }
    else if(order=="finish")
            {
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
            cout<<"you did not enter a valid argument try again " ;
            }
    }
}

void print_guide()
{
cout<<"|---------Guide---------|\n"
    <<" pushf       :  for adding data to the begining\n"
    <<" popf        :  for deleting the first data\n"
    <<" pop         :  for deleting"
    <<" push_after  :  for adding data next to an existing one \n"
    <<" push_before :  for adding data before a data \n "
    <<" print       :  for printing data \n"
    <<" finish      :  stopping the program \n\n" ;
}
//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
