
#include "library.h"
#include <iostream>

using namespace std;

ostream &operator<<(ostream &out, const Library &lib) {
  out << "[";
  out << "]";
  return out;
}

// Use the compiler generated constructor
Library::Library() = default;

// Return size
int Library::size() const { return 0; }

// Return maximum size
int Library::max_size() const { return 0; }

// Test whether Library is empty
bool Library::empty() const { return true; }

// Access element
const string &Library::at(int n) const { return Books[0]; }

// Access first element
const string &Library::front() const { return Books[0]; }

// Access last element (public member function )
const string &Library::back() const { return Books[0]; }

// Add element at the end
void Library::push_back(const string &book) {}

// Delete last
void Library::pop_back() {}

// Erase element at location
void Library::erase(int n) {}

// Insert element at location, moves other elements as needed
void Library::insertAt(int n, const string &book) {}