#include "C.h"

class H : public C {
    public:
		void ustaw7();
};
class I : protected C {
	public:
		void ustaw8();
};
class J : private C {
	public:
		void ustaw9();
};