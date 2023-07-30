#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Punto 1
int main1()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a + b + c;
    cout << d << endl;

    return 0;
}

// Punto 2
int main2()
{
    int a;
    cin >> a;
    vector<string> nums = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (a > 9)
        cout << "Greater than 9" << endl;
    else
        cout << nums[a - 1] << endl;
    return 0;
}

// Punto 3
int main3()
{
    int a, b;
    cin >> a >> b;
    vector<string> nums = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
            cout << nums[i - 1] << endl;
        else
        {
            if (i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
    return 0;
}

// Punto 4
int main4()
{

    int a, b, c, d, max = 0;
    cin >> a >> b >> c >> d;
    if (max < a)
        max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    cout << max << endl;
    return 0;
}

// Punto 5

int main5()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    for (int j = vec.size() - 1; j >= 0; j--)
    {
        cout << vec[j] << " ";
    }
    return 0;
}

// Punto 6
int main6()
{
    string a, b, c;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    c = a + b;
    cout << c << endl;
    char l1, l2;
    l1 = a[0];
    l2 = b[0];
    a[0] = l2;
    b[0] = l1;
    cout << a << " " << b << endl;

    return 0;
}

// Punto 7

class Student
{
private:
    int age, standard;
    string name, last;

public:
    // sets
    void set_age(int a)
    {
        age = a;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    void set_first_name(string n)
    {
        name = n;
    }
    void set_last_name(string n)
    {
        last = n;
    }
    // gets
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string get_last_name()
    {
        return last;
    }
    string get_first_name()
    {
        return name;
    }
    string to_string()
    {
        int num1 = age, num2 = standard, tmp;
        string cad;
        while (num1 > 0)
        {
            tmp = num1 % 10;
            cad.insert(cad.begin(), tmp + 48);
            num1 /= 10;
        }
        cad += "," + name + "," + last + ",";
        string t;
        while (num2 > 0)
        {
            tmp = num2 % 10;
            t.insert(t.begin(), tmp + 48);
            num2 /= 10;
        }
        cad += t;
        return cad;
    }
};

int main7()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

// Punto 8
class Student
{
private:
    vector<int> scores;

public:
    void input()
    {
        int n;
        for (int i = 0; i < 5; i++)
        {
            cin >> n;
            scores.push_back(n);
        }
    }
    int calculateTotalScore()
    {
        int sum = 0;
        for (int i = 0; i < scores.size(); i++)
        {
            sum += scores[i];
        }
        return sum;
    }
};
int main8()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
