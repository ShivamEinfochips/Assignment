#include <iostream>
using namespace std;

class piggieBank
{
    int amount;
public:
    piggieBank()
    {
        amount = 50;
    }

    piggieBank(int a)
    {
        amount = 50;
        amount = a+amount;
    }

    void print_amount()
    {
        cout << amount << endl;
    }
};

int main()
{
    piggieBank p1;
    piggieBank p2(55);
    p1.print_amount();
    p2.print_amount();
    return 0;
}                                 
