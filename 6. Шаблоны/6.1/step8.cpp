struct ICloneable
{
	virtual ICloneable* clone() const = 0;
	virtual ~ICloneable() = default;
};

template <typename T>
struct ValueHolder : ICloneable
{
    explicit ValueHolder(const T& data)
        : data_ {data}
    {}

    ValueHolder* clone() const override
    {
        return new ValueHolder(data_);
    }

    T data_;
};