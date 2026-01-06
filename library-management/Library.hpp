#include <vector>
#include <string>

extern double libraryBudget;

class Library {
public:
    void addBook(std::string title, double bookCost);
    
    bool borrowBook(std::string title);

    void listBooks();

    int getTotalBorrowedBooks();

    const void reserveBook(std::string title);

    Library();


private:
    std::vector<std::string> bookList;

    int totalBorrowedBooks;

    int reservedCount;

    std::vector<std::string> reservedBooks;
};