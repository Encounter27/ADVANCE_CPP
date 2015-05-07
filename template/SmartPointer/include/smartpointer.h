#include "reference_count.h"

#ifndef SMART_POINTER_H
#define SMART_POINTER_H

namespace ENCOUNTER {
	
	template< typename T>
	class Esmartpointer
	{
		T* sptr;
		
	public:
		Esmartpointer();
		Esmartpointer(const Esmartpointer<T>& ob);
		Esmartpointer<T>& operator = (const Esmartpointer<T>& ob);
		~Esmartpointer();

		T& operator *(); // dereferencing will return the object pointed "to"
		T* operator ->();// -> will return the address pointed "by"
	};
}

#endif
