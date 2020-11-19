// Nathan Lai
// CECS 282 Lab 8

#ifndef PUBLICATION_DIGITAL_H
#define PUBLICATION_DIGITAL_H

#include "Publication.h"
#include "Sale.h"

class Digital: public Publication, public Sale {
	public:
		Digital();
		void getData();
		void putData();
	protected:
		int storageCap;
		
};


#endif
