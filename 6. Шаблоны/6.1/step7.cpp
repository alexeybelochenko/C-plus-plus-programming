#include <cstddef>
#include <algorithm> // std::swap

template <typename T>
class Array
{
    public:
    
    //конструктор класса с параметрами
    explicit Array(size_t size, const T& value = T()) : size_(size), data_( (T*) new char[size * sizeof(T)] ) {
        for (int i = 0; i < size_; i++) new (data_ + i) T(value);    
    }    
 
    //конструктор класса без параметров
    Array() : size_(0), data_(0) {}
   
    //конструктор копирования
    Array(const Array &a) : size_(a.size()), data_( (T*) new char[a.size() * sizeof(T)] ) {
        for (int i = 0; i < size_; i++) new (data_ + i) T(a[i]);
    }    
   
    //деструктор класса
    ~Array() {
        for (int i = 0; i < size_; i++) data_[i].~T();
        delete [] (char *) data_;
    }    
   
    //оператор присваивания
    Array& operator=(const Array &a) {
        if (this != &a) Array(a).swap(*this);
        return *this;
    }
    
    //две версии оператора доступа по индексу.
    T& operator[](size_t i) {return data_[i];}
    const T& operator[](size_t i) const {return data_[i];}
    
    //метод возвращает размер массива (количество элементов).
    size_t size() const {return size_;}
    
    //метод, для удобной реализации оператора присваивания 
    void swap(Array &a) {
         std::swap(size_, a.size_);
         std::swap(data_, a.data_);
    }
          
    //данные класса
    T * data_;
    size_t size_;  
    
};