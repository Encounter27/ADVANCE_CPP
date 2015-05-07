#ifndef REFEREC_COUNT_H
#define REFEREC_COUNT_H

namespace ECOUNTER {

	typedef class Ereference_counter ERefCount;

	class Ereference_counter
	{
		int rc;
	public:
		Ereference_counter():rc(int);
		void add_reference();
		int  release();
	};

}

#endif
