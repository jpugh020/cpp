#include <vector>
#include <string>
#include <iostream>
#include "removeElement.hpp"
#include "Library.hpp"


void Library::listBooks() {
    for (auto book : bookList) {
        std::cout << "Book Title: " << book << std::endl;
    }
}

void Library::addBook(std::string title, double bookCost) {
    if (bookList.size() >= 100){
        std::cout << "Library is full!\n";
    } else {
        bookList.push_back(title); 
        libraryBudget -= bookCost;
        std::cout << "Successfully added " << title << " to the library\n";
    }

} 

bool Library::borrowBook(std::string title) {
    int i = 0;
    for (auto book : bookList) {
        if ( book == title) {
            removeElement(bookList, book);
            std::cout << "Book borrowed!\n\n";
            totalBorrowedBooks++;
            return true;
        }
        i++;
    }
    std::cout << "Book not found!\n\n";
    return false;
}

int Library::getTotalBorrowedBooks() {
    return totalBorrowedBooks;
}

const void Library::reserveBook(std::string title) {

    for (auto book : bookList) {
        if (title == book) {
            for (auto novel : reservedBooks) {
                if (title == novel) {
                    std::cout << "Book not reserved!" << std::endl;
                    return;
                }
            }
            
            std::cout << "Book reserved: " << title << "\nReserved book count: " << ++reservedCount << std::endl;
        }
    }
}

Library::Library() : reservedCount(0), totalBorrowedBooks(0) {};