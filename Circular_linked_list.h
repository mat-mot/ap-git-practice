#include "node.h"
class Circular_linked_list
{
private:
    int size;
    node* current;
public:
    Circular_linked_list();
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
    //add getter and setter functions here
    /*
            here

        */
    void pushf();
    void popf();
    void pop(int data);
    void push_after(int new_data,int pa_data);
    void push_befor(int new_data,int pb_data);
    void print();
};
