#include <QCoreApplication>
#include <format>
#include <iostream>

int main(int argc, char *argv[])
{

    std::string sName = "world";
    std::string sFormat = "Hello, {}!";
    std::string s = std::format("Hello, {}!", sName); // "Hello, world!"

    std::cout << s;

    QCoreApplication a(argc, argv);

    return a.exec();
}
