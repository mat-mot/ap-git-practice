#include "node.h"
class Circular_linked_list
{
    private:
        int size;
        node* current;
    public:
        Circular_linked_list();
        ~Circular_linked_list();
        //add getter and setter functions here
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
        void pushf();
        void popf();
        void pop(int data);
        void push_after(int new_data,int pa_data);
        void push_befor(int new_data,int pb_data);
        void print();
};
