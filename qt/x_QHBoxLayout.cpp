//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsizepolicy.h>
#include <qlayout.h>
#include <qrect.h>
#include <qsize.h>

class x_QHBoxLayout : public QHBoxLayout {
public:
    static void x_0(Smoke::Stack x) {
	// QHBoxLayout(QWidget*, int, int, const char*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(const char*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1, int x2, int x3, const char* x4) : QHBoxLayout(x1, x2, x3, x4) {
    }
    static void x_1(Smoke::Stack x) {
	// QHBoxLayout(QWidget*, int, int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1, int x2, int x3) : QHBoxLayout(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// QHBoxLayout(QWidget*, int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1, int x2) : QHBoxLayout(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QHBoxLayout(QWidget*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1) : QHBoxLayout(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QHBoxLayout(QLayout*, int, const char*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QLayout*)x[1].s_class,(int)x[2].s_int,(const char*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(QLayout* x1, int x2, const char* x3) : QHBoxLayout(x1, x2, x3) {
    }
    static void x_5(Smoke::Stack x) {
	// QHBoxLayout(QLayout*, int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QLayout*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(QLayout* x1, int x2) : QHBoxLayout(x1, x2) {
    }
    static void x_6(Smoke::Stack x) {
	// QHBoxLayout(QLayout*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QLayout*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(QLayout* x1) : QHBoxLayout(x1) {
    }
    static void x_7(Smoke::Stack x) {
	// QHBoxLayout(int, const char*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((int)x[1].s_int,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(int x1, const char* x2) : QHBoxLayout(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QHBoxLayout(int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout(int x1) : QHBoxLayout(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QHBoxLayout()
	x_QHBoxLayout* xret = new x_QHBoxLayout();
	x[0].s_class = (void*)xret;
    }
    x_QHBoxLayout() : QHBoxLayout() {
    }
    virtual void addItem(QLayoutItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(278, (void*)this, x)) return;
	this->QBoxLayout::addItem(x1);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5477, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4111, (void*)this, x)) return;
	this->QLayout::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5475, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5474, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5476, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5412, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(4110, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::eventFilter(x1, x2);
    }
    virtual QSizePolicy::ExpandData expanding() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(305, (void*)this, x)) {
	    QSizePolicy::ExpandData *xptr = (QSizePolicy::ExpandData *)x[0].s_class;
	    QSizePolicy::ExpandData xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::expanding();
    }
    virtual QRect geometry() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4092, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::geometry();
    }
    virtual bool hasHeightForWidth() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(303, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QBoxLayout::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(304, (void*)this, x)) return (int)x[0].s_int;
	return this->QBoxLayout::heightForWidth(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5435, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void invalidate() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(306, (void*)this, x)) return;
	this->QBoxLayout::invalidate();
    }
    virtual bool isEmpty() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4101, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(307, (void*)this, x)) {
	    QLayoutIterator *xptr = (QLayoutIterator *)x[0].s_class;
	    QLayoutIterator xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::iterator();
    }
    virtual QLayout* layout() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4106, (void*)this, x)) return (QLayout*)x[0].s_class;
	return this->QLayout::layout();
    }
    virtual QSize maximumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(302, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::maximumSize();
    }
    virtual QSize minimumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(301, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::minimumSize();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5449, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5436, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4134, (void*)this, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setAutoAdd(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4089, (void*)this, x)) return;
	this->QLayout::setAutoAdd(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(308, (void*)this, x)) return;
	this->QBoxLayout::setGeometry(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4078, (void*)this, x)) return;
	this->QLayout::setMargin(x1);
    }
    virtual void setMenuBar(QMenuBar* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4085, (void*)this, x)) return;
	this->QLayout::setMenuBar(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5418, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(5448, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setSpacing(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4079, (void*)this, x)) return;
	this->QLayout::setSpacing(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(300, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::sizeHint();
    }
    virtual QSpacerItem* spacerItem() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4132, (void*)this, x)) return (QSpacerItem*)x[0].s_class;
	return this->QLayoutItem::spacerItem();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5472, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QWidget* widget() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4129, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QLayoutItem::widget();
    }
    ~x_QHBoxLayout() {}
};
void xcall_QHBoxLayout(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QHBoxLayout *xself = (x_QHBoxLayout*)obj;
    switch(xi) {
	case 0: x_QHBoxLayout::x_0(args);	break;
	case 1: x_QHBoxLayout::x_1(args);	break;
	case 2: x_QHBoxLayout::x_2(args);	break;
	case 3: x_QHBoxLayout::x_3(args);	break;
	case 4: x_QHBoxLayout::x_4(args);	break;
	case 5: x_QHBoxLayout::x_5(args);	break;
	case 6: x_QHBoxLayout::x_6(args);	break;
	case 7: x_QHBoxLayout::x_7(args);	break;
	case 8: x_QHBoxLayout::x_8(args);	break;
	case 9: x_QHBoxLayout::x_9(args);	break;
	case 10: delete (QHBoxLayout*)xself;	break;
    }
}
