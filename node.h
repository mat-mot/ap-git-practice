//----------------------------------------------------https://github.com/mat-mot/ap-git-practice.git
template <typename T>
class node
{
private:
    T data;
    node* next;
    node* prev;
public:
    node (T d = 0 , node * n = nullptr , node * p = nullptr )
    {
        this->data = d ;
        this->next = n ;
        this->prev = p ;
    }
    void setdata (T d )
    {
        this->data = d ;
    }
    T getdata ()
    {
        return this->data ;
    }
    void setnext (node * n )
    {
        this->next = n ;
    }
    node * getnext ()
    {
        return this->next ;
    }
    void setprev (node * p )
    {
        this->prev = p ;
    }
    node * getprev ()
    {
        return this->prev ;
    }
};
//---------------------------------------------------- https://github.com/mat-mot/ap-git-practice.git
