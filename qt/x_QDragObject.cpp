//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qpoint.h>
#include <qcstring.h>
#include <qdragobject.h>
#include <qpixmap.h>

class x_QDragObject : public QDragObject {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QDragObject::DragDefault;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QDragObject::DragCopy;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QDragObject::DragMove;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_long = (long)QDragObject::DragLink;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_long = (long)QDragObject::DragCopyOrMove;
    }
    static void x_5(Smoke::Stack x) {
	// QDragObject(QWidget*, const char*)
	x_QDragObject* xret = new x_QDragObject((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QDragObject(QWidget* x1, const char* x2) : QDragObject(x1, x2) {
    }
    static void x_6(Smoke::Stack x) {
	// QDragObject(QWidget*)
	x_QDragObject* xret = new x_QDragObject((QWidget*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QDragObject(QWidget* x1) : QDragObject(x1) {
    }
    static void x_7(Smoke::Stack x) {
	// QDragObject()
	x_QDragObject* xret = new x_QDragObject();
	x[0].s_voidp = (void*)xret;
    }
    x_QDragObject() : QDragObject() {
    }
    void x_8(Smoke::Stack x) {
	// drag()
	bool xret = this->QDragObject::drag();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) {
	// dragMove()
	bool xret = this->QDragObject::dragMove();
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) {
	// dragCopy()
	this->QDragObject::dragCopy();
    }
    void x_11(Smoke::Stack x) {
	// dragLink()
	this->QDragObject::dragLink();
    }
    void x_12(Smoke::Stack x) {
	// setPixmap(QPixmap)
	this->QDragObject::setPixmap(*(QPixmap *)x[1].s_voidp);
    }
    void x_13(Smoke::Stack x) {
	// setPixmap(QPixmap, const QPoint&)
	this->QDragObject::setPixmap(*(QPixmap *)x[1].s_voidp,*(const QPoint *)x[2].s_voidp);
    }
    void x_14(Smoke::Stack x) const {
	// pixmap()
	QPixmap xret = this->QDragObject::pixmap();
	x[0].s_voidp = (void*)new QPixmap(xret);
    }
    void x_15(Smoke::Stack x) const {
	// pixmapHotSpot()
	QPoint xret = this->QDragObject::pixmapHotSpot();
	x[0].s_voidp = (void*)new QPoint(xret);
    }
    void x_16(Smoke::Stack x) {
	// source()
	QWidget* xret = this->QDragObject::source();
	x[0].s_voidp = (void*)xret;
    }
    static void x_17(Smoke::Stack x) {
	// target()
	QWidget* xret = QDragObject::target();
	x[0].s_voidp = (void*)xret;
    }
    static void x_18(Smoke::Stack x) {
	// setTarget(QWidget*)
	QDragObject::setTarget((QWidget*)x[1].s_voidp);
    }
    void x_19(Smoke::Stack x) {
	// drag(QDragObject::DragMode)
	bool xret = this->QDragObject::drag(*(QDragObject::DragMode *)x[1].s_voidp);
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
    virtual bool drag(QDragObject::DragMode x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 2318, x)) return (bool)x[0].s_bool;
	return this->QDragObject::drag(x1);
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
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5404, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 5405, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	call_method_abstract((void*)this, 5111, x);
	return (const char*)x[0].s_voidp;
	// ABSTRACT
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
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5113, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
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
    virtual void setPixmap(QPixmap x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 2311, x)) return;
	this->QDragObject::setPixmap(x1);
    }
    virtual void setPixmap(QPixmap x1, const QPoint& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 2312, x)) return;
	this->QDragObject::setPixmap(x1, x2);
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
    ~x_QDragObject() {}
};
void xcall_QDragObject(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDragObject *xself = (x_QDragObject*)obj;
    switch(xi) {
	case 0: x_QDragObject::x_0(args);	break;
	case 1: x_QDragObject::x_1(args);	break;
	case 2: x_QDragObject::x_2(args);	break;
	case 3: x_QDragObject::x_3(args);	break;
	case 4: x_QDragObject::x_4(args);	break;
	case 5: x_QDragObject::x_5(args);	break;
	case 6: x_QDragObject::x_6(args);	break;
	case 7: x_QDragObject::x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: x_QDragObject::x_17(args);	break;
	case 18: x_QDragObject::x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: delete (QDragObject*)xself;	break;
    }
}
