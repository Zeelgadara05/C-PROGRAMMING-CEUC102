#include<iostream>
using namespace std;

class student
{
    private :
        string name;
        int id;
        float m1,m2,m3,avg;

    public :
        void new_student();
        int student_result(int);
};

void student :: new_student()
{
    cout << "Enter student name ->";
    cin >> name;
    cout << "Enter student ID ->";
    cin >> id;
    cout << "Enter mark of subject 1 ->";
    cin >> m1;
    cout << "Enter mark of subject 2 ->";
    cin >> m2;
    cout << "Enter mark subject 3 ->";
    cin >> m3;
}

int student :: student_result(int x)
{
    if (id == x)
    {
        cout << name << endl;
        cout << "MArks of s1 ->" << m1 << endl;
        cout << "MArks of s2 ->" << m2 << endl;
        cout << "MArks of s3 ->" << m3 << endl;

        avg = (m1 + m2 + m3)/3.0;

        cout << "Average mark ->" << avg << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    student s[100];
    int last = 0,n,ID,i;

    M:cout << "\n1.Enter student detail\n2.Show Result\n3.Exit\n";
    cout << "Enter your choise";
    cin >> n;

    switch(n)
    {
        case 1:
            s[last].new_student();
            last ++ ;
            goto M;

        case 2:
            if (last == 0)
            {
                cout << "\nNo student result available\n";
                goto M;
            }
            cout << "\nEnter student ID ->";
            cin >> ID;
            for(i = 0; i < last ; i++)
            {
                if(s[i].student_result(last) == 1)
                {
                    break;
                }
            }
            if(i == last)
            {
                cout<<"\nStudent result not found\n";
            }
            goto M;

        case 3:
            goto N;

        default:
            cout << "\nNo such choise is available\n";
            goto M;
    }
    N:cout << "\nThank you for visiting";

    return 0;
}
