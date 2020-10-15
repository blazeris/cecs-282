//Class Book is created from classes Publication and Sales

#ifndef PUBLICATION_BOOK_H
#define PUBLICATION_BOOK_H

#include "Publication.h"
#include "Sale.h"

//In this class you need to declare two functions getData and putData and a data member for page count

 class Book: public Publication, public Sale {
 	public:
 		Book();
 		void getData();
 		void putData();
 	protected:
 		int pages;
 };
 
 #endif
