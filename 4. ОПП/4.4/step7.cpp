bool check_equals(Expression const *left, Expression const *right)
{
    return (*((size_t*)left) == *((size_t*)right));
}