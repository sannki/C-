#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    // printf("argc : %d\n", argc);

    cout << "argc : " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "] :  " << argv[i] << endl;
    }

    return 0;
}