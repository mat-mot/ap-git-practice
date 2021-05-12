//This project was done by
//Ehsan mahmoudi && matin motmaen
//( 993613054 && 993623038 )
//on 12/may/2020 for AP practice
//repo : https://github.com/mat-mot/ap-git-practice.git

//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
#include <iostream>
#include "Circular_linked_list.h"
using namespace std ;
//decls
void what_is_the_type() ;
template <typename T >
void function ()        ;
void print_guide()      ;
//mail
int main()
{
    what_is_the_type() ;
    return 0 ;
}
//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
template <typename T >
void function ()
{
    Circular_linked_list<T> ll ;
    T dat1   ;
    T dat2   ;

    system("cls") ;
    print_guide() ;
    while(true)
    {
        string order ;
        //        ll.print() ;
        cout<<"\nwhat should i do ?  :  " ;
        cin>>order ;

        if     (order=="pushf")
        {
            cout<<"what data do you want to add ? : " ;
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
        else if(order=="exist")
        {
            cout<<"what is the data you are looking for ? : " ;
            cin>>dat1 ;
            if(ll.does_exist(dat1))
                cout<<dat1<<" does exist \n" ;
            else
                cout<<dat1<<" does not exist\n" ;
        }
        else
        {
            cout<<"you did not enter a valid argument try again \n" ;
        }
    }
}
//--------------https://github.com/mat-mot/ap-git-practice.git ----------------------
void what_is_the_type()
{
    string data_type ;
    while(true)
    {
        cout<<"what is the data type ?(char/double/float/int/string) : " ;
        cin>>data_type ;
        if     (data_type=="char")
            function<char>()  ;
        else if(data_type=="double")
            function<double>()  ;
        else if(data_type=="float")
            function<float>()  ;
        else if(data_type=="int")
            function<int>() ;
        else if(data_type=="string")
            function<string>()  ;
        else
        {
            cout<<"you did not enter a vaid data type\n" ;
            continue;
        }
        break;
    }
}

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
    <<char (178)<<" clear       :  for clearing the console                            "<<char (178) << endl
    <<char (178)<<" exist       :  for checking hs a data exist                        "<<char (178) << endl  ;
    for ( int i=0 ; i < 70 ; i++ )
        cout <<char (178) ;
    cout << "\n\n\n" ;
}

