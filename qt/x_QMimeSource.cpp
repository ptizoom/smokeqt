//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qcstring.h>
#include <qmime.h>

class x_QMimeSource : public QMimeSource {
public:
    static void x_0(Smoke::Stack x) {
	// QMimeSource()
	x_QMimeSource* xret = new x_QMimeSource();
	x[0].s_voidp = (void*)xret;
    }
    x_QMimeSource() : QMimeSource() {
    }
    void x_1(Smoke::Stack x) const {
	// format(int)
	const char* xret = this->QMimeSource::format((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// format()
	const char* xret = this->QMimeSource::format();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// provides(const char*)
	bool xret = this->QMimeSource::provides((const char*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_4(Smoke::Stack x) const {
	// encodedData(const char*)
	QByteArray xret = this->QMimeSource::encodedData((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    void x_5(Smoke::Stack x) const {
	// serialNumber()
	int xret = this->QMimeSource::serialNumber();
	x[0].s_int = (int)xret;
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	call_method_abstract((void*)this, 5114, x);
	QByteArray *xptr = (QByteArray *)x[0].s_voidp;
	QByteArray xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	call_method_abstract((void*)this, 5111, x);
	return (const char*)x[0].s_voidp;
	// ABSTRACT
    }
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5113, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
    }
    ~x_QMimeSource() {}
};
void xcall_QMimeSource(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMimeSource *xself = (x_QMimeSource*)obj;
    switch(xi) {
	case 0: x_QMimeSource::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: delete (QMimeSource*)xself;	break;
    }
}
