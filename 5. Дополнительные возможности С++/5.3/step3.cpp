struct Expression;
struct Number;
struct BinaryOperation;

struct ScopedPtr
{
    // реализуйте следующие методы:
    //
     explicit ScopedPtr(Expression *ptr = 0)
     {
        ptr_ = ptr;
     }
     ~ScopedPtr()
     {
         if (needDelete)
         {
             delete ptr_;
         }
     }
     Expression* get() const
     {
         return ptr_;
     }
     Expression* release()
     {
         needDelete = false;
         return ptr_;
     }
     void reset(Expression *ptr = 0)
     {
         delete ptr_;
         ptr_ = ptr;
     }
     Expression& operator*() const
     {
         return *ptr_;
     }
     Expression* operator->() const
     {
         return ptr_;
     }
    
private:
    // запрещаем копирование ScopedPtr
    ScopedPtr(const ScopedPtr&);
    ScopedPtr& operator=(const ScopedPtr&);

    bool needDelete = true;
    Expression *ptr_;
};