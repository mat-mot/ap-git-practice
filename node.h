//-----------------------------------------------------//writen by matin // https://github.com/mat-mot/ap-git-practice.git //993623038
class node
{
private:
    int data;
    node* next;
    node* prev;
public:
    node (int d = 0 , node * n = nullptr , node * p = nullptr )
    {
        this->data = d ;
        this->next = n ;
        this->prev = p ;
    }
    void setdata (int d )
    {
        this->data = d ;
    }
    int getdata ()
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
//------------------------------------------------------//writen by matin // https://github.com/mat-mot/ap-git-practice.git //993623038