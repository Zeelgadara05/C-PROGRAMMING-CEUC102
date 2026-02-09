#include<iostream>
using namespace std;
class library
{
    private :
        int book_id;
        string titel;
        string auther;
        int no_copies;

    public :
        void Addbook();
       int Issuebook(string);
        int Returnbook(string);
        void List(int);
};

void library :: Addbook()
{
    cout << "Enter Book name -> ";
    cin >> titel;
    cout << "Enter book ID ->";
    cin >> book_id;
    cout << "Enter Auther name ->";
    cin >> auther;
    cout << "Enter the number of copies ->";
    cin >> no_copies;
}

int library :: Issuebook(string x)
{
    if (titel == x)
    {
        if(no_copies == 0)
        {
            cout<< "Book is out of stock";
            return 1;
        }
        else
        {
        cout << "Book has been issued\n";
        no_copies--;
        return 1;
        }
    }
    else
    {
        return 0;
    }
}
int library :: Returnbook(string x)
{
    if (titel == x)
    {
        cout << "Book has been issued\n";
        no_copies++;
        return 1;
    }
    else
    {
        return 0;
    }
}
void library :: List(int x)
{
    if (x == 0)
    {
        cout << "No book is present in library";
    }
    else
    {
        for(int j = 0 ; j < x ; j++)
        {
            cout << "Book name ->" << titel << endl;
            cout << "Book ID ->" << book_id << endl;
            cout << "Auther name ->" << auther << endl;
            cout << "Number of copies available ->" << no_copies << endl;
        }
    }
}

int main()
{
    library l[100];
    int n,last = 0,i;
    string name;

    cout << "1.Add Book\n2.Issue Book\n3.Return Book\n4.List of Book\n5.Exit\n";
    M: cout << "Enter your choise -> ";
    cin >> n;
    switch(n)
    {
    case 1:
        l[last].Addbook();
        last ++;
        goto M;

    case 2:
        cout << "Book name to be issued ->";
        cin >> name;
        for (i = 0 ; i < last ; i++)
        {
            if (l[i].Issuebook(name) == 1)
            {
                break ;
            }
            if (i = last)
            {
                cout << "Such book is not availabe!!\n";
            }
        }
        goto M;

    case 3:
        cout << "Book name to be issued ->";
        cin >> name;
        for (i = 0 ; i < last ; i++)
        {
            if (l[i].Issuebook(name) == 1)
            {
                break ;
            }
            if (i = last)
            {
                cout << "Such book is not availabe!!\n";
            }
        }
        goto M;
    case 4:
        for(i=0;i<last;i++)
        l[i].List(last);
        goto M;

    case 5:
        goto N;

    default :
        cout << "No such option is available\n";
        goto M;
    }
       N: cout << "\nTank you for visiting";


    return 0;
}
