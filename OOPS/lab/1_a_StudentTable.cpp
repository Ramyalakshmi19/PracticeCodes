#include <iostream>
using namespace std;
class student
{
public:
    int register_num;
    string name, result;
    float marks[4];
    float average;
    template <typename T>
    T get_data(T reg)
    {
        register_num=reg;
        cout << "ENTER THE NAME:";
        cin >> name;
        for (int i = 0; i < 4; i++)
        {
            cout << "ENTER THE MARK-" << i + 1 << ":";
            cin >> marks[i];
        }
    }
    template <typename U>
    U display_data(U reg)
    {
        average = 0;
        for (int i = 0; i < 4; i++)
        {
            average += marks[i];
        }
        average /= 4;
        if (average < 50)
        {
            cout << name << "\t\t" << register_num << "\t\t" << marks[0] << "\t\t" << marks[1] << "\t\t" << marks[2] << "\t\t" << marks[3] << "\t\t" << average << "\t\t"
                 << "FAIL\n";
        }
        else
        {
            cout << name << "\t\t" << register_num << "\t\t" << marks[0] << "\t\t" << marks[1] << "\t\t" << marks[2] << "\t\t" << marks[3] << "\t\t" << average << "\t\t"
                 << "PASS\n";
        }
    }
};
int main()
{
    int num,register_num;
    cout << "ENTER THE TOTAL NUMBER OF STUDENTS IN THE CLASS:";
    cin >> num;
    student s[num];
    for (int i = 0; i < num; i++)
    {
        cout << "-----------------STUDENT-" << i + 1 << "--------------------\n";
        cout << "ENTER THE REGISTER NUMBER:";
        cin >> register_num;
        s[i].get_data(register_num);
    }
    cout << "\v\vNAME\t\t"
         << "REG NO\t\t"
         << "MARK 1\t\t"
         << "MARK 2\t\t"
         << "MARK 3\t\t"
         << "MARK 4\t\t"
         << "AVERAGE\t\t"
         << "RESULT\n\n";
    cout << "______________________________________________________________________________________________________________________\n\n";
    for (int i = 0; i < num; i++)
    {
        s[i].display_data(register_num);
    }
}