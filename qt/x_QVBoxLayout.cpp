//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsizepolicy.h>
#include <qlayout.h>
#include <qstring.h>
#include <qrect.h>
#include <qsize.h>

class x_QVBoxLayout : public QVBoxLayout {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QVBoxLayout::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QVBoxLayout::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QVBoxLayout::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QVBoxLayout::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QVBoxLayout::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QVBoxLayout::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QVBoxLayout::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QVBoxLayout(QWidget*, int, int, const char*)
	x_QVBoxLayout* xret = new x_QVBoxLayout((QWidget*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(const char*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(QWidget* x1, int x2, int x3, const char* x4) : QVBoxLayout(x1, x2, x3, x4) {
    }
    static void x_8(Smoke::Stack x) {
	// QVBoxLayout(QWidget*, int, int)
	x_QVBoxLayout* xret = new x_QVBoxLayout((QWidget*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(QWidget* x1, int x2, int x3) : QVBoxLayout(x1, x2, x3) {
    }
    static void x_9(Smoke::Stack x) {
	// QVBoxLayout(QWidget*, int)
	x_QVBoxLayout* xret = new x_QVBoxLayout((QWidget*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(QWidget* x1, int x2) : QVBoxLayout(x1, x2) {
    }
    static void x_10(Smoke::Stack x) {
	// QVBoxLayout(QWidget*)
	x_QVBoxLayout* xret = new x_QVBoxLayout((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(QWidget* x1) : QVBoxLayout(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// QVBoxLayout(QLayout*, int, const char*)
	x_QVBoxLayout* xret = new x_QVBoxLayout((QLayout*)x[1].s_class,(int)x[2].s_int,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(QLayout* x1, int x2, const char* x3) : QVBoxLayout(x1, x2, x3) {
    }
    static void x_12(Smoke::Stack x) {
	// QVBoxLayout(QLayout*, int)
	x_QVBoxLayout* xret = new x_QVBoxLayout((QLayout*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(QLayout* x1, int x2) : QVBoxLayout(x1, x2) {
    }
    static void x_13(Smoke::Stack x) {
	// QVBoxLayout(QLayout*)
	x_QVBoxLayout* xret = new x_QVBoxLayout((QLayout*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(QLayout* x1) : QVBoxLayout(x1) {
    }
    static void x_14(Smoke::Stack x) {
	// QVBoxLayout(int, const char*)
	x_QVBoxLayout* xret = new x_QVBoxLayout((int)x[1].s_int,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(int x1, const char* x2) : QVBoxLayout(x1, x2) {
    }
    static void x_15(Smoke::Stack x) {
	// QVBoxLayout(int)
	x_QVBoxLayout* xret = new x_QVBoxLayout((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout(int x1) : QVBoxLayout(x1) {
    }
    static void x_16(Smoke::Stack x) {
	// QVBoxLayout()
	x_QVBoxLayout* xret = new x_QVBoxLayout();
	x[0].s_class = (void*)xret;
    }
    x_QVBoxLayout() : QVBoxLayout() {
    }
    static void x_17(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QVBoxLayout::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_18(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QVBoxLayout::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_19(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QVBoxLayout::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_20(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QVBoxLayout::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_21(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QVBoxLayout::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    virtual void addItem(QLayoutItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(374, (void*)this, x)) return;
	this->QBoxLayout::addItem(x1);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6819, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5249, (void*)this, x)) return;
	this->QLayout::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11555, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QVBoxLayout::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6817, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6816, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6818, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6749, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(5248, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::eventFilter(x1, x2);
    }
    virtual QSizePolicy::ExpandData expanding() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(402, (void*)this, x)) {
	    QSizePolicy::ExpandData *xptr = (QSizePolicy::ExpandData *)x[0].s_class;
	    QSizePolicy::ExpandData xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::expanding();
    }
    virtual QRect geometry() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5223, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::geometry();
    }
    virtual bool hasHeightForWidth() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(399, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QBoxLayout::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(400, (void*)this, x)) return (int)x[0].s_int;
	return this->QBoxLayout::heightForWidth(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6772, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void invalidate() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(403, (void*)this, x)) return;
	this->QBoxLayout::invalidate();
    }
    virtual bool isEmpty() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5234, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLayout::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(404, (void*)this, x)) {
	    QLayoutIterator *xptr = (QLayoutIterator *)x[0].s_class;
	    QLayoutIterator xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::iterator();
    }
    virtual QLayout* layout() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5239, (void*)this, x)) return (QLayout*)x[0].s_class;
	return this->QLayout::layout();
    }
    virtual QSize maximumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(398, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::maximumSize();
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11554, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QVBoxLayout::metaObject();
    }
    virtual QSize minimumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(397, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::minimumSize();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6786, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(11556, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QVBoxLayout::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(11558, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QVBoxLayout::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(11557, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QVBoxLayout::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(11559, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QVBoxLayout::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6773, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5272, (void*)this, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setAutoAdd(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(5220, (void*)this, x)) return;
	this->QLayout::setAutoAdd(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(405, (void*)this, x)) return;
	this->QBoxLayout::setGeometry(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5209, (void*)this, x)) return;
	this->QLayout::setMargin(x1);
    }
    virtual void setMenuBar(QMenuBar* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5216, (void*)this, x)) return;
	this->QLayout::setMenuBar(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6755, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6785, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setSpacing(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5210, (void*)this, x)) return;
	this->QLayout::setSpacing(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(396, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::sizeHint();
    }
    virtual QSpacerItem* spacerItem() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5270, (void*)this, x)) return (QSpacerItem*)x[0].s_class;
	return this->QLayoutItem::spacerItem();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6814, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QWidget* widget() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5267, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QLayoutItem::widget();
    }
    ~x_QVBoxLayout() { qt_Smoke->binding->deleted(355, (void*)this); }
};
void xcall_QVBoxLayout(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QVBoxLayout *xself = (x_QVBoxLayout*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QVBoxLayout::x_7(args);	break;
	case 8: x_QVBoxLayout::x_8(args);	break;
	case 9: x_QVBoxLayout::x_9(args);	break;
	case 10: x_QVBoxLayout::x_10(args);	break;
	case 11: x_QVBoxLayout::x_11(args);	break;
	case 12: x_QVBoxLayout::x_12(args);	break;
	case 13: x_QVBoxLayout::x_13(args);	break;
	case 14: x_QVBoxLayout::x_14(args);	break;
	case 15: x_QVBoxLayout::x_15(args);	break;
	case 16: x_QVBoxLayout::x_16(args);	break;
	case 17: x_QVBoxLayout::x_17(args);	break;
	case 18: x_QVBoxLayout::x_18(args);	break;
	case 19: x_QVBoxLayout::x_19(args);	break;
	case 20: x_QVBoxLayout::x_20(args);	break;
	case 21: x_QVBoxLayout::x_21(args);	break;
	case 22: delete (QVBoxLayout*)xself;	break;
    }
}
