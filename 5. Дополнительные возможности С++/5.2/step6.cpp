struct Rational
{
    Rational(int numerator = 0, int denominator = 1);
    
    bool is_null() {
        return numerator_ == 0;
    }
    
    bool is_neg() {
        return (numerator_<0)^(denominator_<0);
    }

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational lhs, Rational rhs);
Rational operator-(Rational lhs, Rational rhs);
Rational operator*(Rational lhs, Rational rhs);
Rational operator/(Rational lhs, Rational rhs);

bool operator==(Rational const& r1, Rational const&  r2) {
    return (r1 - r2).is_null();
}

bool operator!=(Rational const& r1, Rational const&  r2) {
    return !(r1 == r2);
}

bool operator<(Rational const& r1, Rational const&  r2) {
    return (r1 - r2).is_neg();
}

bool operator>(Rational const& r1, Rational const&  r2) {
    return r2 < r1;
}

bool operator<=(Rational const& r1, Rational const&  r2) {
    return !(r1 > r2);
}

bool operator>=(Rational const& r1, Rational const&  r2) {
    return !(r1 < r2);
}