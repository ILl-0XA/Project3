/////��������� ��������� ��� ���������� � ������ ���� ����������� �����,�� ����������� 20.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int z;
        cout << "�������� ��������: 1-����������,0-�����" << endl;
        cin >> z;
        if (z == 0)
        {
            break;
        }
        else
        {

            int a = 0;
            int b = 0;

            cout << "������� ������ � ����� ���������: ";
            cin >> a >> b;

            cout << "���������� ������ ����� �� " << a << " �� " << b << " ������������:" << endl;

            for (int i = a; i <= b; i++)
            {
                for (int j = a; j <= b; j++)
                {
                    for (int k = a; k <= b; k++)
                    {
                        if (i * i + j * j == k * k)
                            cout << "{" << i << ";" << j << ";" << k << "}" << endl;
                    }
                }
            }
        }
        return 0;
    }



           
}