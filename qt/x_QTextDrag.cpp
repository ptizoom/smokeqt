//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qcstring.h>
#include <qstring.h>
#include <qdragobject.h>
#include <qpixmap.h>

class x_QTextDrag : public QTextDrag {
public:
    static void x_0(Smoke::Stack x) {
	// QTextDrag(const QString&, QWidget*, const char*)
	x_QTextDrag* xret = new x_QTextDrag(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextDrag(const QString& x1, QWidget* x2, const char* x3) : QTextDrag(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QTextDrag(const QString&, QWidget*)
	x_QTextDrag* xret = new x_QTextDrag(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextDrag(const QString& x1, QWidget* x2) : QTextDrag(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QTextDrag(const QString&)
	x_QTextDrag* xret = new x_QTextDrag(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextDrag(const QString& x1) : QTextDrag(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QTextDrag(QWidget*, const char*)
	x_QTextDrag* xret = new x_QTextDrag((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextDrag(QWidget* x1, const char* x2) : QTextDrag(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QTextDrag(QWidget*)
	x_QTextDrag* xret = new x_QTextDrag((QWidget*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextDrag(QWidget* x1) : QTextDrag(x1) {
    }
    static void x_5(Smoke::Stack x) {
	// QTextDrag()
	x_QTextDrag* xret = new x_QTextDrag();
	x[0].s_voidp = (void*)xret;
    }
    x_QTextDrag() : QTextDrag() {
    }
    void x_6(Smoke::Stack x) {
	// setText(const QString&)
	this->QTextDrag::setText(*(const QString *)x[1].s_voidp);
    }
    void x_7(Smoke::Stack x) {
	// setSubtype(const QCString&)
	this->QTextDrag::setSubtype(*(const QCString *)x[1].s_voidp);
    }
    void x_8(Smoke::Stack x) const {
	// format(int)
	const char* xret = this->QTextDrag::format((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_9(Smoke::Stack x) const {
	// encodedData(const char*)
	QByteArray xret = this->QTextDrag::encodedData((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    static void x_10(Smoke::Stack x) {
	// canDecode(const QMimeSource*)
	bool xret = QTextDrag::canDecode((const QMimeSource*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    static void x_11(Smoke::Stack x) {
	// decode(const QMimeSource*, QString&)
	bool xret = QTextDrag::decode((const QMimeSource*)x[1].s_voidp,*(QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    static void x_12(Smoke::Stack x) {
	// decode(const QMimeSource*, QString&, QCString&)
	bool xret = QTextDrag::decode((const QMimeSource*)x[1].s_voidp,*(QString *)x[2].s_voidp,*(QCString *)x[3].s_voidp);
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
	if(call_method((void*)this, 8501, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_voidp;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextDrag::encodedData(x1);
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
	if(call_method((void*)this, 8500, x)) 	return (const char*)x[0].s_voidp;
	return this->QTextDrag::format(x1);
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
    virtual void setSubtype(const QCString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 8499, x)) return;
	this->QTextDrag::setSubtype(x1);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 8498, x)) return;
	this->QTextDrag::setText(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QTextDrag() {}
};
void xcall_QTextDrag(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTextDrag *xself = (x_QTextDrag*)obj;
    switch(xi) {
	case 0: x_QTextDrag::x_0(args);	break;
	case 1: x_QTextDrag::x_1(args);	break;
	case 2: x_QTextDrag::x_2(args);	break;
	case 3: x_QTextDrag::x_3(args);	break;
	case 4: x_QTextDrag::x_4(args);	break;
	case 5: x_QTextDrag::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: x_QTextDrag::x_10(args);	break;
	case 11: x_QTextDrag::x_11(args);	break;
	case 12: x_QTextDrag::x_12(args);	break;
	case 13: delete (QTextDrag*)xself;	break;
    }
}
