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
   
    /*vector<��� ������> ���;*/
    vector<int> data;//������ ������ �����
    vector<int> dataOne(10);//������ ������ ����� �� 10 �����
    vector<int> dataTwo(5,0);//������ �� ���� ����� 0
    vector<int> dataThree = {3,4,5,1,2};
    data = { 3,1,5 };

    for (int i : data)//i-����� ������, data-���������
    {
        cout << i << " ";
    }

    cout << data[0]+3;

    cout<<data.size();//�������
    cout << data.front();//==data[0] �������� ������ �������
    cout << data.back();//��������� ������ data[data.size()-1]
    cout << data.empty();//������ ��� ���
    int one;
    cin >> one;
    data.push_back(one);//����� ����������� � ����� �������



    while (cin >> one)
    {
        data.push_back(one);
    }

    data.pop_back();//�������� ���������� �������� �������

    data.clear();//�������

    while (!data.empty()&&data.back()==0)
    {
        data.pop_back();
    }

    data.erase(data.begin(),data.begin()+2);//����� ����� �� ������

    data.insert(data.begin() + 1, 3);//�������


    data.capacity();
    vector<int>d = { 2,3,9,8,1 };

    for (int i : data)
    {
        cout << i << " ";
    }
    cout << "\n";
    

	return 0;
}