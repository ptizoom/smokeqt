//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qtimer.h>

class x_QTimer : public QTimer {
public:
    static void x_0(Smoke::Stack x) {
	// QTimer(QObject*, const char*)
	x_QTimer* xret = new x_QTimer((QObject*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTimer(QObject* x1, const char* x2) : QTimer(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QTimer(QObject*)
	x_QTimer* xret = new x_QTimer((QObject*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTimer(QObject* x1) : QTimer(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QTimer()
	x_QTimer* xret = new x_QTimer();
	x[0].s_voidp = (void*)xret;
    }
    x_QTimer() : QTimer() {
    }
    void x_3(Smoke::Stack x) const {
	// isActive()
	bool xret = this->QTimer::isActive();
	x[0].s_bool = (bool)xret;
    }
    void x_4(Smoke::Stack x) {
	// start(int, bool)
	int xret = this->QTimer::start((int)x[1].s_int,(bool)x[2].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) {
	// start(int)
	int xret = this->QTimer::start((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_6(Smoke::Stack x) {
	// changeInterval(int)
	this->QTimer::changeInterval((int)x[1].s_int);
    }
    void x_7(Smoke::Stack x) {
	// stop()
	this->QTimer::stop();
    }
    void x_8(Smoke::Stack x) {
	// timeout()
	this->QTimer::timeout();
    }
    static void x_9(Smoke::Stack x) {
	// singleShot(int, QObject*, const char*)
	QTimer::singleShot((int)x[1].s_int,(QObject*)x[2].s_voidp,(const char*)x[3].s_voidp);
    }
    void x_10(Smoke::Stack x) {
	// event(QEvent*)
	bool xret = this->QTimer::event((QEvent*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 5469, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5465, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5467, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5466, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5468, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 8878, x)) return (bool)x[0].s_bool;
	return this->QTimer::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 5405, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5441, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_voidp;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5428, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5410, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 5440, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QTimer() {}
};
void xcall_QTimer(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTimer *xself = (x_QTimer*)obj;
    switch(xi) {
	case 0: x_QTimer::x_0(args);	break;
	case 1: x_QTimer::x_1(args);	break;
	case 2: x_QTimer::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: x_QTimer::x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: delete (QTimer*)xself;	break;
    }
}
