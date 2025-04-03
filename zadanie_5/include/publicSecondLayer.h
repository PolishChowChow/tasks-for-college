#include "B.h"

class E : public B {
    public:
		void ustaw4();
};
class F : protected B {
	public:
		void ustaw5();
};
class G : private B {
	public:
		void ustaw6();
};