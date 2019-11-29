#include <iostream>
#include <set>
#include <iterator>
#include <cstdlib>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int n1, n2, var, el;
    char a;

    set<char> mySet1; //пустое множество
    set<char> mySet2; //пустое множество
    cout << "Введите количество элементов 1го множества" << endl;
    cin >> n1;
    cout << "Введите количество элементов 2го множества" << endl;
    cin >> n2;
    //set<int>::const_iterator it;  //объявляем итератор
    cout << "Введите элементы 1го множества" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> a;
        mySet1.insert(a);
    }
    cout << "Элементы 1го множества: ";
    //cin >> a;
    //mySet1.insert(a); // включение в множество
    copy( mySet1.begin(), mySet1.end(), ostream_iterator<char>(cout, " ")); // вывод элементов 1 мн
    cout << "Добавить элемент в 1 множество? 1 - да, 2 - нет" << endl;
    cin >> var;
    if (var == 1)
    {
        cout << "Введите элемент для 1го множества" << endl;
        cin >> el;
        mySet1.insert(el);
    }
    /*int del = 0;
    cout << endl << "Which del? ";
    cin >> del;

    cout <<"El " << *mySet1.find(del) << " - del!" << endl;
    mySet1.erase(del);
    mySet1.find(0);*/
    return 0;
}