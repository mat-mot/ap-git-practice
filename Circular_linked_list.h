#include "node.h"
#include <iostream>
template<typename T>
class Circular_linked_list
{
private:
    int size;
    node<T>* current;
public:
    //constractor and destructive
    Circular_linked_list()
    {
        this->current = nullptr ;
        this->size = 0 ;
    }
    ~Circular_linked_list()
    {
        while ( this->size -- )
        {
            node<T> * tmp = this->current ;
            delete tmp ;
            this->current = this->current->getnext() ;
        }
        this->size = 0 ;
        this->current = nullptr ;
    }
    //getters
    int get_size()
    {
        return this->size    ;
    }
    node<T>* get_current()
    {
        return this->current ;
    }
    void set_size(int size)
    {
        this->size =size ;
    }
    void set_current(node<T>* current)
    {
        this->current =current ;
    }
    //other funcs
    void pushf(T data)
    {
        node<T>* tmp ;
        if(current ==nullptr)
        {
            tmp=new node<T>(data);
            tmp->setnext(tmp) ;
            tmp->setprev(tmp) ;
            current = tmp ;
        }
        else
        {
            node<T>* tail =current->getprev();
            tmp = new node<T>(data,current,tail) ;
            tail->setnext(tmp) ;
            current->setprev(tmp) ;
            current = tmp ;
        }
        this->size ++ ;
    }
    void popf()
    {
        if ( this->size == 0 )
        {
            std :: cout << "there is not a data in list to delete that please order again !!! \n" ;
            return;
        }
        node<T> * tmp = this->current ;
        this->current = tmp->getnext() ;

        if ( this->size == 1 )
        {
            delete  tmp ;
            tmp = nullptr ;
            this->current=nullptr ;
        }
        else
        {
            this->current->setprev(tmp->getprev()) ;
            tmp->getprev()->setnext(this->current) ;
            delete  tmp ;
            tmp = nullptr ;
        }
        this->size -- ;
    }
    void pop(T data)
    {
        //        if(this->size==0)
        //            return;
        if( this->does_exist(data)== false)
        {
            std :: cout << "data isnt correct and does not exist !!" << std :: endl ;
            return ;
        }
        //        if(this->size==1)
        //        {
        //            delete  current ;
        //            this->current=nullptr ;
        //            this->size = 0 ;
        //        }
        //        else
        if  (this->size >= 2 )
        {
            node<T> * temp ;
            node<T> * temp_current =this->current ;
            node<T> * temp_current_next =this->current->getnext() ;
            temp = this->current ;
            while(temp->getdata() != data)
                temp  = temp->getnext()    ;
            if(temp==current)
                temp_current=temp_current_next ;

            this->current = temp ;
            this->popf() ;
            this->current =temp_current ;
        }
        else
            this->popf() ;

    }
    void push_after(T new_data,T pa_data)
    {
        if( this->does_exist(pa_data)== false)
        {
            std :: cout << "the data that you looking for isnt correctly type or does not exist !!" << std :: endl ;
            return ;
        }

        node<T> * temp ;
        node<T> * temp_current =this->current ;

        temp =this->current ;
        while(temp->getprev()->getdata() != pa_data)
            temp  = temp->getnext()    ;

        this->current =temp         ;
        this->pushf(new_data)       ;
        this->current =temp_current ;
    }
    void push_befor(T new_data,T pb_data)
    {
        if( this->does_exist(pb_data)== false)
        {
            std :: cout << "the data that you looking for isnt correctly type or does not exist !!" << std :: endl ;
            return ;
        }

        node<T> * temp ;
        node<T> * temp_current =this->current ;

        temp =this->current ;
        while(temp->getdata() != pb_data)
            temp  = temp->getnext()    ;

        this->current =temp         ;
        this->pushf(new_data)       ;
        this->current =temp_current ;
    }
    void print()
    {
        if(current==nullptr)
            std::cout<<"link-list is Empty\n" ;
        else
        {
            std::cout<<"datas Are : " ;
            node<T> * temp ;
            temp = this->current ;
            int counter = this->size ;
            while( counter-- )
            {
                std::cout << temp->getdata()<<" " ;
                temp  = temp->getnext()    ;
            }
            std::cout<<std::endl ;
        }
    }
    bool does_exist(T dat)
    {
        node<T> * temp = this->current ;
        temp=this->current ;
        int counter = this->size ;
        while( counter-- )
            if(temp->getdata() == dat)
                return true ;
            else
                temp=temp->getnext()  ;

        return false ;
    }
};
