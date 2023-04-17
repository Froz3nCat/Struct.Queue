// lab1.struct_stack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <clocale>
#include <iostream>
#include <random>
using namespace std;

struct queue {

    int Arr[1000];
    int head_item = 0;
    int last_item = 0;

    void push_back(int a) {
        Arr[last_item] = a;
        last_item++;
    }

    int pop_out() {
        if (head_item != last_item) {
            head_item++;
            return Arr[head_item - 1];
        }
        else {
            //stack is empty;
        }
    }

    void show() {
        if (head_item != last_item) {
            cout << "queue elements: ";

            for (int i = head_item; i < last_item; i++) {
                cout << Arr[i] << " ";
            }
            cout << endl;

        }
        else {
            //stack is empty;
        }
    }
    void push_back_range(int a, int b) {
        for (int j = a; j <= b; j++) {
            Arr[last_item] = j;
            last_item++;
        }
    }
};

int main()
{
    int x, items_count, items_count_start;
    queue main_queue;

    
    main_queue.push_back_range(-20, 60);
    cout << "Main ";  main_queue.show();

    items_count_start = main_queue.head_item;
    items_count = main_queue.last_item;
    
    for (int i = items_count_start; i < items_count; i++) {
        x = main_queue.pop_out();
        if (x % 7 != 0) {
            main_queue.push_back(x);
        }
    }

    cout << endl << "(after sorting(%7 != 0)) Main ";  main_queue.show();
    setlocale(LC_ALL, "Rus");

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
