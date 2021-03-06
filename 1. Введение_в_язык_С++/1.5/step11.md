У вас есть проект, в котором есть три файла с различными определениями: utility.cpp, lexer.cpp и parser.cpp. Каждому файлу соответствует заголовочный файл с необходимыми объявлениями: utility.hpp, lexer.hpp и parser.hpp. Каждый из файлов определений непосредственно (т. е. с помощью директивы include) подключает соответствующий ему заголовочный файл с объявлениями (т. е. utility.cpp подключает utility.hpp, а lexer.cpp подключает lexer.hpp и аналогично для parser.cpp и parser.hpp). Кроме того, файл parser.hpp непосредственно подключает заголовки lexer.hpp и utility.hpp, а файл lexer.hpp подключает заголовок utility.hpp.

В этой задаче вам нужно выбрать все верные утверждения из списка. Перед решением задачи полезно нарисовать дерево включений.

* Файл parser.cpp включает заголовочный файл utility.hpp.

* Если в заголовке utility.hpp отсутствует защита от повторного включения, то он будет включен в parser.cpp дважды.

* Файл utility.cpp подключает только один заголовочный файл из перечисленных.