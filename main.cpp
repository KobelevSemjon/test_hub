#include <QCoreApplication>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"Hello World!"<<endl;
    for(auto c:"bubu")
    cout<<c;

    return a.exec();
}
