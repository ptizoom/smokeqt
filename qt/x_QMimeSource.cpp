//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcstring.h>
#include <qmime.h>

class x_QMimeSource : public QMimeSource {
public:
    static void x_0(Smoke::Stack x) {
	// QMimeSource()
	x_QMimeSource* xret = new x_QMimeSource();
	x[0].s_class = (void*)xret;
    }
    x_QMimeSource() : QMimeSource() {
    }
    void x_1(Smoke::Stack x) const {
	// provides(const char*)
	bool xret = this->QMimeSource::provides((const char*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_2(Smoke::Stack x) const {
	// serialNumber()
	int xret = this->QMimeSource::serialNumber();
	x[0].s_int = (int)xret;
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(5122, (void*)this, x, true /*pure virtual*/);
	QByteArray *xptr = (QByteArray *)x[0].s_class;
	QByteArray xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	qt_Smoke->callMethod(5119, (void*)this, x, true /*pure virtual*/);
	return (const char*)x[0].s_class;
	// ABSTRACT
    }
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5121, (void*)this, x)) return (bool)x[0].s_bool;
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
	case 3: delete (QMimeSource*)xself;	break;
    }
}
