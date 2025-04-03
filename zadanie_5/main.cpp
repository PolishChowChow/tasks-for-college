#include<iostream>
#include "./include/A.h"
#include "./include/B.h"
#include "./include/C.h"
#include "./include/D.h"
#include "./include/publicSecondLayer.h"
#include "./include/protectedSecondLayer.h"
#include "./include/privateSecondLayer.h"

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