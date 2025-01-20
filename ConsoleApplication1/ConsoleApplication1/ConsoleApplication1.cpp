// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <algorithm>
#include <numeric>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int aa[9] { 11,22,33,44,55,66,77,88,99 };
    int size_high, size_low;
    size_high = 10;
    size_low = 0;

    int a = 2, b = 4, c = 9;
    int i = 1;

    char* myStrCpy(char* Dest, const char* Source);

    
   // bool bb = true;
   // printf_s("%d\n", bb);
   // bb = false;
   // printf_s("%d\n", bb); 
   //    std::cout << i+i << "\n";
   //    std:: cout << a + b * c << "\n";
   //    std:: cout << a + (b * c) << "\n";
   //    std:: cout << (a + b) * c << "\n";
    

  //  for (int i = size_low; i < size_high; i++)
  //  {
  //       if (i <= 4)
  //       {
  //         std::cout << "Hello World!\n";
  //        }
  //      if (i >= 7)
  //      {
  //         std::cout << "Hello !\n";
  //      }
  //  }
    while (i <= size_high)
    {
        std::cout << i  << "\n";
        i = i + 1;
     }
    


   //     int foo() {

   //     srand(time(NULL));
   //     printf("%d\n", rand() % 10 + 3);

  //  }

  //  int main(int argc, char* argv[]) {


   //     foo();
   //     foo();
   //     foo();

   // }
  //  srand(static_cast& lt;unsigned int& gt;(time(0)));
   // int n;
    // функция, которая посчитает число пи
    //int count_pi[1000];
   // float x, y, pii;
    // общее количество бросков
   // int j = 0;
        // сколько из них попало в круг
     //   int   count = 0;
    // пока мы не дошли до финального броска
     //   while (j < n);
    // случайным образом получаем координаты x и y
     //   {
     //       random_x();
      //          y = random.random()
                // проверяем, попали мы в круг или нет
      //          if (pow(x, 2) + pow(y, 2)) < 1
                    // если попали — увеличиваем счётчик на 1
      //          { count = count + 1;
     //          }
            // в любом случае увеличиваем общий счётчик
      //      j = j + 1
     //   }
                // считаем и возвращаем число пи
     //   return 4 * (count / n);

            // запускаем функцию
      //      pii = count_pi(1000000);
    // выводим результат
    //                std::cout << pii << "\n";
}



// cout& lt;&lt;1.2 + static_cast (rand()) / (static_cast (RAND_MAX / (3.4 - 1.2))));

// int main() { std::srand(static_cast(std::time(nullptr))); for (int count=1; count &lt;= 100; ++count) { std::cout &lt;&lt;std::rand() &lt;&lt;"\t"; // выводим 5 случайных чисел в строке if (count % 5 == 0) std::cout &lt;&lt;"\n"; } return 0; }


//  using namespace std;
//  int main() { cout&lt;&lt;"Random numbers generated between 0 and 1:"
//      &lt; ="" ="" cout="" endl;="" for="" i="" i++)="" null="" pre="" rand()="" rand_max="" return="" srand(="" {="" }=""
//  }="">
// 
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//C++ Случайное число между 0 и 1
//Мы можем использовать функции srand() и rand() для генерации случайных чисел от 0 до 1. Обратите внимание, что мы должны привести вывод функции rand() к десятичному значению либо float, либо double.

//Возвращаемое по умолчанию значение функции rand(), т.е.целое число, не подходит для отображения случайных чисел от 0 до 1, которые являются дробями.

//Приведенная ниже программа на C++ выводит на экран первые пять случайных чисел от 0 до 1.

//Смотрите также : Как удалить фоновый шум из аудио
//#include #include using namespace std; int main() { cout&lt;&lt;"Random numbers generated between 0 and 1:"&lt; ="" ="" cout="" endl;="" for="" i="" i++)="" null="" pre="" rand()="" rand_max="" return="" srand(="" {="" }="" }="">
 //   Выход  :



//Мы видим, что на выходе программы получается случайное число от 0 до 1, которое является дробью.

//Если не привести возвращаемое значение функции rand() к float или double, то в качестве случайного числа мы получим 0.

//C++ Случайное число от 1 до 10
//Следующий пример - генерация случайных чисел от 1 до 10. Ниже приведена программа на C++, которая генерирует случайные числа.

//Мы вызываем функцию srand с системными часами, а затем вызываем функцию rand с операторами модуля 10.

//#include #include #include using namespace std; int main() { srand(time(0)); // Инициализация генератора случайных чисел. cout&lt;&lt;"Random numbers generated between 1 to 10:"&lt; ="" cout="" for(int="" i="0;i<10;i++)" pre="" return="" }="">
//Выход:



//В приведенной выше программе мы генерируем первые 10 случайных чисел от 1 до 10. Обратите внимание, что при каждом запуске программы она будет генерировать разные наборы чисел, поскольку вызывается функция srand.

//Часто задаваемые вопросы
//Вопрос #1) Каков заголовочный файл для функции Random в C++ ?

//Ответ : Функции для генерации случайных чисел, rand и srand, определены в& lt;  cstdlib& gt; заголовок C++.

//Вопрос #2) Что такое Rand_max в C++ ?

//Ответ : RAND_MAX  это константа в заголовке, обычно устанавливаемая в значение 32767. Генератор псевдослучайных чисел(ГПСЧ) генерирует случайные числа в диапазоне от 0 до RAND_MAX.

//Q #3) Как работает случайная функция ?

//Ответ : C++ поддерживает две случайные функции, т.е.srand() и rand().Функция srand() засевает генератор случайных чисел, используемый функцией rand(), которая генерирует последовательность случайных чисел в зависимости от предоставленной начальной затравки.

//Q #4) Как вы управляете временем ?

//Ответ : Функция srand засевает генератор псевдослучайных чисел(ГПСЧ), используемый функцией rand().Стандартной практикой является использование результата вызова time(0) в качестве seed.Эта функция time возвращает значение - количество секунд с 00 : 00 часов 1 января 1970 года по UTC(текущая временная метка UNIX).

//Таким образом, значение seed меняется каждую секунду.Следовательно, каждый раз, когда srand вызывается с функцией time, генерируется новый набор случайных чисел.

//Заключение
//В этом учебнике мы подробно рассмотрели генерацию случайных чисел.Языки программирования и компьютеры в целом не генерируют случайные числа, поскольку они предназначены для получения прогнозируемого результата.Следовательно, нам необходимо имитировать случайность.

//Для имитации случайности мы используем генератор псевдослучайных чисел(ГПСЧ), который встроен в C++.Таким образом, используя две функции, rand() и srand(), мы можем генерировать случайные числа на C++.

//Функция srand() используется для предоставления затравки для генерации случайных чисел, а функция rand() генерирует следующее случайное число в последовательности.