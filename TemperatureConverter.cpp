/*�������� ����� ����� � �������� ��� TemperatureConverter.�������� � ���� ����� ��� �������������� ����������,
� ����� ���������� : public String convertTemp(int temperature, char convertTo) ���� �������� convertTo ����� F,
�� ����������� ������ ���� ������������� � ����������, ���� C, �� � �������.����� �� ������ �������� ���� �����,
��������� �������� ��������� ���� char � ��������� �������(��������� = 9 / 5 ������� + 32).�������� ������ ������������� �������������� ������.*/

#include<iostream> 
#include<string> 

using namespace std;

class TemperatureConverter 
{
public:
    string convertTemp(int temperature, char convertTo)
    {
        string result = "NONE";  
        if (convertTo == 'F' || convertTo == 'f')
        {
            result = "Fahrenheit = " + to_string(9 / 5 * (float)temperature + 32);
        }
        
        else if (convertTo == 'C' || convertTo == 'c')
        {
            result = "Celsius = " + to_string(((float)temperature - 32) * 5 / 9);
        }
        return result;
    }
};

int main()
{
    TemperatureConverter type;
    cout << type.convertTemp(4, 'F') << endl;
    cout << type.convertTemp(0, 'C') << endl;
    cout << type.convertTemp(0, 'd') << endl;
    system("pause");
    return 0;
}