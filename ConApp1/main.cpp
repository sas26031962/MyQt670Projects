#include <QCoreApplication>
#include <format>
#include <iostream>

int main(int argc, char *argv[])
{

    std::string Name = "world";
    std::string s = std::format("Hello, {}!", Name); // "Hello, world!"

    std::cout << s;

    QCoreApplication a(argc, argv);

    return a.exec();
}
