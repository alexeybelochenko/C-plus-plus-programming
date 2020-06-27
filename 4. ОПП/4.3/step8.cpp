struct Expression {
    virtual ~Expression() {}
    virtual double evaluate() const = 0;
};

struct Number : Expression {
    Number(double value) : value(value) {}

    double evaluate() const  override {
        return value;
    }
private:
    double value;
};

struct BinaryOperation : Expression {
    ~BinaryOperation() override {
        delete left;
        delete right;
    }
    
    BinaryOperation(Expression const* left, char op, Expression const* right)
        : left(left), op(op), right(right) {}

    double evaluate() const override {
            return  (op == '+') ? left->evaluate() + right->evaluate():
                    (op == '-') ? left->evaluate() - right->evaluate():
                    (op == '*') ? left->evaluate() * right->evaluate():
                    (op == '/') ? left->evaluate() / right->evaluate(): -1;
    }
private:
    Expression const* left;
    Expression const* right;
    char op;
};