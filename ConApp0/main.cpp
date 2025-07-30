#include <QCoreApplication>

#include <iostream>
#include <filesystem>

namespace fs = std::filesystem; // Упрощаем запись


int main(int argc, char *argv[])
{
    fs::path file_path = "ConApp0.ilk";//"test.txt";

    if (fs::exists(file_path)) {
        std::cout << "File " <<file_path << " exist!\n";
    } else {
        std::cout << "File " <<file_path << " not found.\n";
    }



    QCoreApplication a(argc, argv);

    return a.exec();
}
