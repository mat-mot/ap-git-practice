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

        void popf();
  
        void pop(int data);
  
        void push_after(int new_data,int pa_data);
  
        void push_befor(int new_data,int pb_data);
  
        void print()
            {
            if(current==nullptr)
                std::cout<<"link-list is Empty\n" ;
            else
                {
                  node * temp ;
                  temp = this->current ;

                  while(temp->getnext() != current )
                      {
                      std::cout << temp->getdata() ;

                      temp  = temp->getnext()    ;
                      }
                  std::cout<<std::endl ;
                }
            }
};
