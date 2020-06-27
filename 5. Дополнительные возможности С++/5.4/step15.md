В заголовочном файле count.hpp определена следующая функция:
<inline static int count() {
    static int counter = 0;
    return ++counter;
}>

Этот файл подключается тремя файлами foo.cpp, bar.cpp и zoo.cpp. 

**Ответ:** 3