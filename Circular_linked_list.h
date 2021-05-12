#include "node.h"
#include <iostream>
class Circular_linked_list
{
private:
    int size;
    node* current;
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
            node * tmp = this->current ;
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
    node* get_current()
    {
        return this->current ;
    }
    void set_size(int size)
    {
        this->size =size ;
    }
    void set_current(node* current)
    {
        this->current =current ;
    }
    //other funcs
    void pushf(int data)
    {
        node* tmp ;
        if(current ==nullptr)
        {
            tmp=new node(data);
            tmp->setnext(tmp) ;
            tmp->setprev(tmp) ;
            current = tmp ;
        }
        else
        {
            node* tail =current->getprev();
            tmp = new node(data,current,tail) ;
            tail->setnext(tmp) ;
            current->setprev(tmp) ;
            current = tmp ;
        }
        this->size ++ ;
    }
    void popf()
    {
        if ( this->size == 0 )
            return;
        node * tmp = this->current ;
        this->current = tmp->getnext() ;
        if ( this->size == 1 )
        {
            delete  tmp ;
            tmp = nullptr ;
            this->size -- ;
            return;
        }
        this->current->setprev(tmp->getprev()) ;
        tmp->getprev()->setnext(this->current) ;
        delete  tmp ;
        tmp = nullptr ;
        this->size -- ;
    }
    void pop(int data)
    {
        if(this->size==0)
            return;
        else
        {
            node * temp ;
            node * temp_current =this->current ;

            temp = this->current ;
            while(temp->getdata() != data)
                temp  = temp->getnext()    ;

            this->current = temp ;
            this->popf() ;
            this->current =temp_current ;
        }

    }
    void push_after(int new_data,int pa_data)
    {
        node * temp ;
        node * temp_current =this->current ;

        temp =this->current ;
        while(temp->getdata() != pa_data)
            temp  = temp->getnext()    ;

        this->current =temp         ;
        this->pushf(new_data)       ;
        this->current =temp_current ;
    }
    void push_befor(int new_data,int pb_data)
    {
        node * temp ;
        node * temp_current =this->current ;

        temp =this->current ;
        while(temp->getdata() != pb_data)
            temp  = temp->getprev()    ;

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
            node * temp ;
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
};
