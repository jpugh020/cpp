#include <iostream>
#include <vector>
#include <string>
#include "Library.hpp"

double libraryBudget = 5000;

int main() {

    std::cout << "The library budget is: " << libraryBudget << std::endl;

    Library myLibrary;

    myLibrary.addBook("The Great Gatsby", 300);
    myLibrary.addBook("1984", 400);
    myLibrary.addBook("To Kill a Mockingbird", 350);

    std::cout << "The library budget is now: " << libraryBudget <<std::endl;

    myLibrary.listBooks();

    myLibrary.reserveBook("1984");

    myLibrary.borrowBook("To Kill a Mockingbird");

    int total = myLibrary.getTotalBorrowedBooks();

    std::cout << "The total number of borrowed books is: " << total << std::endl;


    return 0;
}