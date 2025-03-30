#include<iostream>

class A {
private:
	int war1;
protected:
	int war2;
public:
	int war3;
	void ustaw();
};

class B : public A {
private:
	int war4;
protected:
	int war5;
public:
	int war6;
	void ustaw1();
};

class C : protected A {
private:
	int war7;
protected:
	int war8;
public:
	int war9;
	void ustaw2();
};

class D : private A {
	private:
		int war10;
	protected:
		int war11;
	public:
		int war12;
		void ustaw3();
};
	
class E : public B {
	private:
		int war13;
	protected:
		int war14;
	public:
		int war15;
		void ustaw4();
};
class F : protected B {
	private:
		int war16;
	protected:
		int war17;
	public:
		int war18;
		void ustaw5();
};
class G : private B {
	private:
		int war19;
	protected:
		int war20;
	public:
		int war21;
		void ustaw6();
};

class H : public C {
	private:
		int war22;
	protected:
		int war23;
	public:
		int war24;
		void ustaw7();
};
class I : protected C {
	private:
		int war25;
	protected:
		int war26;
	public:
		int war27;
		void ustaw8();
};
class J : private C {
	private:
		int war28;
	protected:
		int war29;
	public:
		int war30;
		void ustaw9();
};

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

void A::ustaw(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void B::ustaw1(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void C::ustaw2(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void D::ustaw3(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void E::ustaw4(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void F::ustaw5(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void G::ustaw6(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void H::ustaw7(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void I::ustaw8(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void J::ustaw9(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void K::ustaw10(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void L::ustaw11(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}
void M::ustaw12(){
	war1 = 1;
	war2 = 1;
	war3 = 1;
}

int main(){
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	G g;
	H h;
	I i;
	J j;
	K k;
	L l;
	M m;
	int x;
	a.ustaw();
	b.ustaw1();
	c.ustaw2();
	d.ustaw3();
	e.ustaw4();
	f.ustaw5();
	g.ustaw6();
	h.ustaw7();
	i.ustaw8();
	j.ustaw9();
	k.ustaw10();
	l.ustaw11();
	m.ustaw12();
	// dostep do obiektu klasa A
	x = a.war1;
	x = a.war2;
	x = a.war3;

	// dostep do obiektu klasa A -> public klasa B
	x = b.war1;
	x = b.war2;
	x = b.war3;

	// dostep do obiektu klasa A -> protected klasa C
	x = c.war1;
	x = c.war2;
	x = c.war3;

	// dostep do obiektu klasa A -> private klasa D
	x = d.war1;
	x = d.war2;
	x = d.war3;

	// dostep do obiektu Klasa A -> public klasa B -> public klasa E
	x = e.war1;
	x = e.war2;
	x = e.war3;

	// dostep do obiektu Klasa A -> public klasa B -> protected klasa F
	x = f.war1;
	x = f.war2;
	x = f.war3;

	// dostep do obiektu Klasa A -> public klasa B -> private klasa G
	x = g.war1;
	x = g.war2;
	x = g.war3;

	// dostep do obiektu Klasa A -> protected klasa C -> public klasa H
	x = h.war1;
	x = h.war2;
	x = h.war3;

	// dostep do obiektu Klasa A -> protected klasa C -> protected klasa I
	x = i.war1;
	x = i.war2;
	x = i.war3;


	// dostep do obiektu Klasa A -> protected klasa C -> private klasa J
	x = j.war1;
	x = j.war2;
	x = j.war3;

	// dostep do obiektu Klasa A -> private klasa D -> public klasa K
	x = k.war1;
	x = k.war2;
	x = k.war3;

	// dostep do obiektu Klasa A -> private klasa D -> protected klasa L
	x = l.war1;
	x = l.war2;
	x = l.war3;
	
	// dostep do obiektu Klasa A -> private klasa D -> private klasa M
	x = m.war1;
	x = m.war2;
	x = m.war3;
	return 0;
}