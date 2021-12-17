#include <iostream>
using namespace std;

const int MAX_SIZE = 100;


class List {
    private: 
        int end = -1;

    public:
        int list[MAX_SIZE];

        List() {

            for (int i = 0; i < 10; i++) {
                list[i] = i;
                end++;
            }

            cout << "List content after initialization..." << endl;
            print();
        }

        void print() {

            for (int i = 0; i < end; i++) {
                cout << list[i] << ", ";
            }

            cout << list[end] << endl;
        }
    
        void insert(int num) {

            list[end + 1] = num;
            end++;
        }

        void insert(int num, int index) {

            int tempEnd = end;

            if (index < 0 || index > tempEnd)
                cout << "\"index\" is out of boundary!" << endl;
            else
            {
                for (int i = tempEnd; i >= index; i--) {
                    list[tempEnd + 1] = list[tempEnd];
                    tempEnd--;
                }

                list[index] = num;

                end++;
            }


        }

        void remove(int index) {

            if (index < 0 || index > end)
                cout << "\"index\" is out of boundary!" << endl;
            else {
                
                for (int i = index; i < end; i++) {
                    list[i] = list[i + 1];
                }
                end--;
            }
            
        }

};


int main()
{

    List l1;
    

    cout << "List content after \"Inserting\"..." << endl;
    l1.insert(9, 2);
    l1.print();

   
    cout << "List content after \"Removing\"..." << endl;
    l1.remove(2);
    l1.print();
    
    cout << "List content after \"Inserting\"..." << endl;
    l1.insert(11);
    l1.print();

    cout << "List content after \"Removing\"..." << endl;
    l1.remove(10);
    l1.print();
}

