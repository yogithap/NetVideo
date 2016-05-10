/*
  VideoStore.cpp

  Basic operations of a video store
*/

#include <iostream>

#include "Video.hpp"
#include "Rental.hpp"
#include "Customer.hpp"

int main() {

    // Videos
	Video hp("Harry Potter", Video::CHILDRENS);
    Video lotr("Lord of the Rings", Video::REGULAR);


    // Rentals of these movies
    Rental r1(lotr, 10);
    Rental r2(hp, 5);

    // Customer with some rentals
    Customer customer("Fred");
    customer.addRental(r1);
    customer.addRental(r2);

    // Output customer statement
    std::cout << customer.statement();

    return 0;
}
