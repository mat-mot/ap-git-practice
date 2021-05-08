#include "node.h"
class Circular_linked_list
{
private:
    int size;
    node* current;
public:
    Circular_linked_list()
    {
        this->current = nullptr ;
        this->size = 0 ;
    }
    ~Circular_linked_list();
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
