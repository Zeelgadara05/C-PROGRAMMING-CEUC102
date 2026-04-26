#include "shape.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ch;
    vector<Shape*> shapeList;

    while(true)
    {
        cout << "\n  1. Add Rectangle\n";
        cout << "  2. Add Circle\n";
        cout << "  3. Display All Shapes (Dynamic Storage - Vector)\n";
        cout << "  4. Demo Static Storage (Fixed Array)\n";
        cout << "  5. Exit\n";
        cout << "  Enter your choice -> ";
        cin  >> ch;

        switch(ch)
        {
            case 1:
            {
                double l, w;
                cout << "  Enter Length -> ";
                cin  >> l;
                cout << "  Enter Width  -> ";
                cin  >> w;
                shapeList.push_back(new Rectangle(l, w));
                cout << "  Rectangle added successfully!\n";
                continue;
            }

            case 2:
            {
                double r;
                cout << "  Enter Radius -> ";
                cin  >> r;
                shapeList.push_back(new Circle(r));
                cout << "  Circle added successfully!\n";
                continue;
            }

            case 3:
            {
                if(shapeList.empty())
                {
                    cout << "  No shapes added yet!\n";
                    continue;
                }
                cout << "\n  -- Dynamic Storage (vector) --------------\n";
                for(int i = 0; i < (int)shapeList.size(); i++)
                {
                    cout << "\n  Shape #" << (i + 1) << ":\n";
                    shapeList[i]->display();
                }
                cout << "\n  Total shapes stored : " << shapeList.size() << "\n";
                continue;
            }

            case 4:
            {
                const int MAX = 5;
                Shape* staticArr[MAX];
                int count = 0;

                cout << "\n  -- Static Storage (fixed array, MAX = " << MAX << ") --\n";
                cout << "  Filling static array with 2 Rectangles and 1 Circle...\n";

                staticArr[count++] = new Rectangle(10.0, 5.0);
                staticArr[count++] = new Rectangle(7.5, 3.0);
                staticArr[count++] = new Circle(4.0);

                cout << "\n  Results:\n";
                for(int i = 0; i < count; i++)
                {
                    cout << "\n  Shape #" << (i + 1) << ":\n";
                    staticArr[i]->display();
                }

                for(int i = 0; i < count; i++)
                {
                    delete staticArr[i];
                    staticArr[i] = nullptr;
                }

                cout << "\n  Static array capacity : " << MAX  << " (fixed)\n";
                cout << "  Shapes stored         : " << count << " (used)\n";
                cout << "  Comparison Note       : Vector resizes automatically;\n";
                cout << "                          Fixed array is faster but size-limited.\n";
                continue;
            }

            case 5:
            {
                for(int i = 0; i < (int)shapeList.size(); i++)
                {
                    delete shapeList[i];
                }
                shapeList.clear();
                cout << "\n  Exiting... Goodbye!\n";
                return 0;
            }

            default:
                cout << "  ERROR: Invalid choice. Try again.\n";
                continue;
        }
    }

    return 0;
}
