struct Expression;
struct Number;
struct BinaryOperation;

struct SharedPtr
{
    explicit SharedPtr(Expression *ptr = 0) : ptr_(ptr), counter(0) 
    { if (ptr) counter = new size_t (1); }
    
     ~SharedPtr() {
         if (ptr_ && !(--*counter)) {
             delete ptr_; 
             delete counter;
         } 
     }

    SharedPtr(const SharedPtr & a) : ptr_(a.ptr_), counter(a.counter) 
    { if (a.ptr_) ++*counter; } 
     
    SharedPtr& operator=(const SharedPtr & a) {
        if (this!=&a) {
            this->~SharedPtr(); 
            new (this) SharedPtr(a); 
        }
        return *this;
    }
    
    void reset(Expression *ptr = 0) {
        this->~SharedPtr();
        new (this) SharedPtr(ptr); 
    }   
     
    Expression* get() const { return ptr_; }
     
    Expression& operator*() const { return *ptr_; }
    
    Expression* operator->() const { return ptr_; }
    
private:
    Expression *ptr_;
    size_t *counter;
};