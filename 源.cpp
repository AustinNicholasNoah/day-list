#include<iostream>
using namespace std;
#include<cmath>
class CTime
{
public:
    CTime(int a=0, int b=0, int c=0, int d=0, int e=0, int f=0)
    {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        {
            if (a == 2020) goto labble;
            if (b == 2)
            {
                if (c > 29)
                {
                    year = mouth = day = hour = minute = second = 0;
                    if (e > 59 || f > 59||d > 23)
                    {
                        cout << "date and time error!" << endl;
                        year = mouth = day = hour = minute = second = 0;
                    }
                    else cout << "date error!" << endl;
                    cout << "构造函数被调用" << endl;
                }
                else
                {
                    if (e < 60 && f < 60&&d<24)
                    {
                        year = a; mouth = b; day = c; hour = d; minute = e; second = f;
                    }
                    else
                    {
                        year = mouth = day = hour = minute = second = 0;
                        cout << "time error!" << endl;
                    }
                    cout << "构造函数被调用" << endl;
                }
            }
            if (b != 2)
            {
                if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
                {
                    if (c > 31)
                    {
                        year = mouth = day = hour = minute = second = 0;
                        if (e > 59 || f > 59 || d > 23)
                        {
                            cout << "date and time error!" << endl;
                            year = mouth = day = hour = minute = second = 0;
                        }
                        else cout << "date error!" << endl;
                        cout << "构造函数被调用" << endl;
                    }
                    else 
                    {
                        if (e < 60 && f < 60&&d<24)
                        {
                            year = a; mouth = b; day = c; hour = d; minute = e; second = f;
                        }
                        else
                        {
                            year = mouth = day = hour = minute = second = 0;
                            cout << "time error!" << endl;
                        }
                        cout << "构造函数被调用" << endl;
                    }
                }
                if (b == 4 || b == 6 || b == 9 || b == 11)
                {
                    if (c > 30)
                    {
                        year = mouth = day = hour = minute = second = 0;
                        if (e > 59 || f > 59 || d > 23)
                        {
                            cout << "date amd time error!" << endl;
                            year = mouth = day = hour = minute = second = 0;
                        }
                        else cout << "date error!" << endl;
                        cout << "构造函数被调用" << endl;
                    }
                    else 
                    {
                        if (e < 60 && f < 60&&d<24)
                        {
                            year = a; mouth = b; day = c; hour = d; minute = e; second = f;
                        }
                        else
                        {
                            year = mouth = day = hour = minute = second = 0;
                            cout << "time error!" << endl;
                        }
                        cout << "构造函数被调用" << endl;
                    }
                }
            }
        }
        labble:
        if (a % 4 == 0 && a % 100 != 0 || a % 400 != 0)
        {
            if (b == 2)
            {
                if (c > 28)
                {
                    year = mouth = day = hour = minute = second = 0;
                    if (e > 59 || f > 59 || d > 23)
                    {
                        cout << "date and time error!" << endl;
                        year = mouth = day = hour = minute = second = 0;
                    }
                    else cout << "date error!" << endl;
                    cout << "构造函数被调用" << endl;
                }
                else 
                {
                    if (e < 60 && f < 60&&d<24)
                    {
                        year = a; mouth = b; day = c; hour = d; minute = e; second = f;
                    }
                    else
                    {
                        year = mouth = day = hour = minute = second = 0;
                        cout << "time error!" << endl;
                    }
                    cout << "构造函数被调用" << endl;
                }
            }
            if (b != 2)
            {
                if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
                {
                    if (c > 31)
                    {
                        year = mouth = day = hour = minute = second = 0;
                        if (e > 59 || f > 59 || d > 23)
                        {
                            cout << "date and time error!" << endl;
                            year = mouth = day = hour = minute = second = 0;
                        }
                        else cout << "date error!" << endl;
                        cout << "构造函数被调用" << endl;
                    }
                    else 
                    {
                        if (e < 60 && f < 60&&d<24)
                        {
                            year = a; mouth = b; day = c; hour = d; minute = e; second = f;
                        }
                        else
                        {
                            year = mouth = day = hour = minute = second = 0;
                            cout << "time error!" << endl;
                        }
                        cout << "构造函数被调用" << endl;
                    }
                }
                if (b == 4 || b == 6 || b == 9 || b == 11)
                {
                    if (c > 30)
                    {
                        year = mouth = day = hour = minute = second = 0;
                        if (e > 59 || f > 59 || d > 23)
                        {
                            cout << "date amd time error!" << endl;
                            year = mouth = day = hour = minute = second = 0;
                        }
                        else cout << "date error!" << endl;
                        cout << "构造函数被调用" << endl;
                    }
                    else 
                    {
                        if (e < 60 && f < 60&&d<24)
                        {
                            year = a; mouth = b; day = c; hour = d; minute = e; second = f;
                        }
                        else
                        {
                            year = mouth = day = hour = minute = second = 0;
                            cout << "time error!" << endl;
                        }
                        cout << "构造函数被调用" << endl;
                    }
                }
            }
            
        }
    }
    int isvalid()
    {
        if (year != 0) return 1;
        if (year == 0) return 0;
    }
    int dayDiff(CTime t)
    {
        int i, j, daydiff = 0;
        if (year == t.year)
        {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                int monthdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                if (mouth > t.mouth)
                {
                    i = t.mouth;
                    j = mouth;
                    for (i; i != j; i++)
                    {
                        if (i == t.mouth)daydiff = monthdays[i - 1] - t.day + 1;
                        else daydiff += monthdays[i - 1];
                    }
                    daydiff += day - 1;
                }
                if (mouth == t.mouth)daydiff = abs(day - t.day);
                if (mouth < t.mouth)
                {
                    i = mouth;
                    j = t.mouth;
                    for (i; i != j; i++)
                    {
                        if (i == mouth)daydiff = monthdays[i - 1] - day + 1;
                        else daydiff += monthdays[i - 1];
                    }
                    daydiff += t.day - 1;
                }
            }
            else
            {
                int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                if (mouth > t.mouth)
                {
                    i = t.mouth;
                    j = mouth;
                    for (i; i != j; i++)
                    {
                        if (i == t.mouth)daydiff = monthdays[i - 1] - t.day + 1;
                        else daydiff += monthdays[i - 1];
                    }
                    daydiff += day - 1;
                }
                if (mouth == t.mouth)daydiff = abs(day - t.day);
                if (mouth < t.mouth)
                {
                    i = mouth;
                    j = t.mouth;
                    for (i; i != j; i++)
                    {
                        if (i == mouth)daydiff = monthdays[i - 1] - day + 1;
                        else daydiff += monthdays[i - 1];
                    }
                    daydiff += t.day - 1;
                }
            }
        }
        if (year < t.year)
        {
            i = year;
            j = t.year;
            for (i; i != j; i++)
            {
                if (i == year)
                {
                    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                    {
                        int monthdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                        for (int z = mouth; z <= 12; z++)
                        {
                            if (z == mouth)daydiff = monthdays[z - 1] - day + 1;
                            else daydiff += monthdays[z - 1];
                        }
                    }
                    else
                    {
                        int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                        for (int z = mouth; z <= 12; z++)
                        {
                            if (z == mouth)daydiff = monthdays[z - 1] - day + 1;
                            else daydiff += monthdays[z - 1];
                        }
                    }
                }
                else
                {
                    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)daydiff += 366;
                    else daydiff += 365;
                }
            }
            if (j % 4 == 0 && j % 100 != 0 || j % 400 == 0)
            {
                int monthdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                for (int z = 0; z != t.mouth - 1; z++)
                    daydiff += monthdays[z];
                daydiff += t.day - 1;
            }
            else
            {
                int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                for (int z = 0; z != t.mouth - 1; z++)
                    daydiff += monthdays[z];
                daydiff += t.day - 1;
            }
        }
        if (year > t.year)
        {
            i = t.year;
            j = year;
            for (i; i != j; i++)
            {
                if (i == t.year)
                {
                    if (t.year % 4 == 0 && t.year % 100 != 0 || t.year % 400 == 0)
                    {
                        int monthdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                        for (int z = t.mouth; z <= 12; z++)
                        {
                            if (z == t.mouth)daydiff = monthdays[z - 1] - t.day + 1;
                            else daydiff += monthdays[z - 1];
                        }
                    }
                    else
                    {
                        int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                        for (int z = t.mouth; z <= 12; z++)
                        {
                            if (z == t.mouth)daydiff = monthdays[z - 1] - t.day + 1;
                            else daydiff += monthdays[z - 1];
                        }
                    }
                }
                else
                {
                    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)daydiff += 366;
                    else daydiff += 365;
                }
            }
            if (j % 4 == 0 && j % 100 != 0 || j % 400 == 0)
            {
                int monthdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                for (int z = 0; z != mouth - 1; z++)
                    daydiff += monthdays[z];
                daydiff += day - 1;
            }
            else
            {
                int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                for (int z = 0; z != mouth; z++)
                    daydiff += monthdays[z - 1];
                daydiff += day - 1;
            }
        }
        return daydiff;
    }
    CTime(CTime& p)
    {

        year = p.year;
        mouth = p.mouth;
        day = p.day;
        hour = p.hour;
        minute = p.minute;
        second = p.second;
        cout << "拷贝构造函数被调用" << endl;
    }
    ~CTime()
    {
        cout << "析构函数被调用" << endl;
    }
    void showTime()
    {
        cout << year << "/" << mouth << "/" << day << " " << hour << ":" << minute << ":" << second << endl;
    }
private:
    int year, mouth, day, hour, minute, second;
};
int  main()
{
    int  year, month, day, hour, minute, second;
    cin >> year >> month >> day >> hour >> minute >> second;
    CTime  t1(year, month, day, hour, minute, second);
    t1.showTime();
    CTime  t2(2000, 1, 1);  //利用默认形参将时间初始化为00:00:00 
    if (t1.isvalid())          //如果日期和时间合法，则计算天数 
    {
        int  days = 0;
        days = t1.dayDiff(t2);
        cout << "这两天之间相隔了" << days << "天" << endl;
        days = t2.dayDiff(t1);
        cout << "这两天之间相隔了" << days << "天" << endl;
    }
}