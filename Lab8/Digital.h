#ifndef PUBLICATION_DIGITAL_H
#define PUBLICATION_DIGITAL_H

#include "Publication.h"
#include "Sale.h"

//Class Digital is created from classes Publication and Sales

//In this class you need to declare two functions getData and putData and a data member for storage

class Digital: public Publication, public Sale {
	public:
		Digital();
		void getData();
		void putData();
	protected:
		int storageCap;
		
};


#endif //PUBLICATION_DIGITAL_H
