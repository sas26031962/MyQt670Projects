#include <QCoreApplication>
#include <format>
#include <iostream>

int main(int argc, char *argv[])
{

    std::string s = std::format("Hello, {}!", "world"); // "Hello, world!"

    std::cout << s;

    QCoreApplication a(argc, argv);

    return a.exec();
}
