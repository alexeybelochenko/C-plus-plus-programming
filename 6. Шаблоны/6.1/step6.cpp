#include <cstddef> // size_t
#include <utility> // std::swap

template <typename T>
class Array
{
public:
    explicit Array(size_t size = 0, const T& value = T())
        : data_(size ? new T[size] : 0)
        , size_(size)
    {
        while(size--)
            data_[size] = value;
    }

    Array(const Array& other)
        : data_(new T[other.size()])
        , size_(other.size())
    {
        for(size_t i = 0; i < size_; ++i)
            data_[i] = other[i];
    }

    ~Array() { delete[] data_; }

    Array& operator=(Array other)
    {
        other.swap(*this);
        return *this;
    }

    void swap(Array& other)
    {
        std::swap(this->data_, other.data_);
        std::swap(this->size_, other.size_);
    }

    size_t size() const { return size_; }

    T& operator[](size_t i) { return data_[i]; }
    const T& operator[](size_t i) const { return data_[i]; }

private:
    T*      data_;
    size_t  size_;
};