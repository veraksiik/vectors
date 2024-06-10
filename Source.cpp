#include <iostream>
#include <Windows.h>
#include <vector>
#include <array>
using namespace std;




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    /*int sym[3][4]; 

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                sym[i][j] = rand() % 21;
                cout << sym[i][j] << " ";
            }
            cout << "\n";

        }


        cout << "\n";


     int sum[4][3];

     for (int i = 0; i < 4; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             sum[i][j] = sym[j][i];
             cout << sum[i][j] << " ";
         }
         cout << "\n";

     }*/
   
    /*vector<тип данных> им€;*/
    vector<int> data;//пустой вектор чисел
    vector<int> dataOne(10);//пустой вектор чискл на 10 €чеек
    vector<int> dataTwo(5,0);//вектор из п€ти чисел 0
    vector<int> dataThree = {3,4,5,1,2};
    data = { 3,1,5 };

    for (int i : data)//i-номер €чейки, data-контейнер
    {
        cout << i << " ";
    }

    cout << data[0]+3;

    cout<<data.size();//размеры
    cout << data.front();//==data[0] вызывает первый элемент
    cout << data.back();//последн€€ €чейка data[data.size()-1]
    cout << data.empty();//пустой или нет
    int one;
    cin >> one;
    data.push_back(one);//число добавл€еьс€ в конец вектора



    while (cin >> one)
    {
        data.push_back(one);
    }

    data.pop_back();//удаление последнего элемента вектора

    data.clear();//очистка

    while (!data.empty()&&data.back()==0)
    {
        data.pop_back();
    }

    data.erase(data.begin(),data.begin()+2);//вырез какой то €чейки

    data.insert(data.begin() + 1, 3);//вставка


    data.capacity();
    vector<int>d = { 2,3,9,8,1 };

    for (int i : data)
    {
        cout << i << " ";
    }
    cout << "\n";
    

	return 0;
}