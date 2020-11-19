// Nathan Lai
// CECS 282 Lab 8

#ifndef PUBLICATION_BOOK_H
#define PUBLICATION_BOOK_H

#include "Publication.h"
#include "Sale.h"

 class Book: public Publication, public Sale {
 	public:
 		Book();
 		void getData();
 		void putData();
 	protected:
 		int pages;
 };
 
 #endif
