#include "D.h"

class K : public D {
	private:
		int war31;
	protected:
		int war32;
	public:
		int war33;
		void ustaw10();
};
class L : protected D {
	private:
		int war34;
	protected:
		int war35;
	public:
		int war36;
		void ustaw11();
};
class M : private D {
	private:
		int war37;
	protected:
		int war38;
	public:
		int war39;
		void ustaw12();
};