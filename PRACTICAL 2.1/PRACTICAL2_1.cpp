#include<iostream>
using namespace std;
class Construction
{
    private:
        int ID;
        float lenght,width;
        float area,perimeter;

    public:

        void new_rect();
        int edit(int);
        int area_OR_peri_of_rect(int);
};

void Construction :: new_rect()
{
    cout << "Enter ID of the rectangle ->";
    cin >> ID;
    cout << "Enter Lenght of the rectangle ->";
    cin >> lenght;
    cout << "Enter width of the rectangle ->";
    cin >> width;
}

int Construction :: edit(int x)
{
    float nlenght,nwidth;
    if (ID == x)
    {
        cout << "Enter new lenght ->";
        cin >> nlenght;
        cout << "Enter new width ->";
        cin >> nwidth;

        lenght = nlenght;
        width = nwidth;
        nlenght = 0;
        nwidth = 0;

        return 1;
    }
    else
    {
        return 0;
    }
}

int Construction :: area_OR_peri_of_rect(int x)
{
    if(ID == x)
    {
        area = lenght * width;
        perimeter = 2*(lenght + width);

        cout << "Area of the rectangle is ->" << area << endl;
        cout << "Perimeter of the rectangle ->" << perimeter << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Construction c[10];
    int i,n,id,last = 0;

    M:cout << "1.New Dimenssion\n2.Edit Dimenssion\n3.Area and Perimeter\n4.Exit\n";
    cout << "Enter your choise ->";
    cin >> n;

    switch(n)
    {
        case 1:
            c[last].new_rect();
            last ++;
            goto M;

        case 2:
            if(last==0)
        {
            cout << "No rectangle in the list\n";
            goto M;
        }
            cout << "Enter the ID of the rectangle ->";
            cin >> id;
            for(i=0 ; i<last ; i++)
            {
                if(c[i].edit(id) == 1)
                {
                    break;
                }
            }
            if (i == last)
            {
                cout << "There is no such rectangle\n";
            }
            goto M;

        case 3:
            if(last==0)
        {
            cout << "No rectangle in the list\n";
            goto M;
        }
             cout << "Enter the ID of the rectangle ->";
            cin >> id;
            for(i=0 ; i<last ; i++)
            {
                if(c[i].area_OR_peri_of_rect(id) == 1)
                {
                    break;
                }
            }
            if (i == last)
            {
                cout << "There is no such rectangle\n";
            }
            goto M;

        case 4:
            goto N;

        default:
            cout << "No such choise available\n";
            goto M;
    }
    N:cout << "Thank you";
}

