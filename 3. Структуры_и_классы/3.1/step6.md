В коде определена следующая структура:
<struct ivector3d 
{
    int array[3];
};>
И определена следующая функция:
<void scale(ivector3d *v, int k) 
{
    for (int i = 0; i != 3; ++i)
        v->array[i] *= k;
}>
Пусть у вас есть экземпляр iv3d структуры ivector3d. Изначально массив array экземпляра iv3d заполнен единицами, и вы вызываете функцию scale следующим образом:
<scale(&iv3d, 2);>

**Ответ:**6