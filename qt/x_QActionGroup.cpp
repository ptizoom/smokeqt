//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qaction.h>
#include <qkeysequence.h>
#include <qiconset.h>
#include <qstring.h>

class x_QActionGroup : public QActionGroup {
public:
    static void x_0(Smoke::Stack x) {
	// QActionGroup(QObject*, const char*, bool)
	x_QActionGroup* xret = new x_QActionGroup((QObject*)x[1].s_voidp,(const char*)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_voidp = (void*)xret;
    }
    x_QActionGroup(QObject* x1, const char* x2, bool x3) : QActionGroup(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QActionGroup(QObject*, const char*)
	x_QActionGroup* xret = new x_QActionGroup((QObject*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QActionGroup(QObject* x1, const char* x2) : QActionGroup(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QActionGroup(QObject*)
	x_QActionGroup* xret = new x_QActionGroup((QObject*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QActionGroup(QObject* x1) : QActionGroup(x1) {
    }
    void x_3(Smoke::Stack x) {
	// setExclusive(bool)
	this->QActionGroup::setExclusive((bool)x[1].s_bool);
    }
    void x_4(Smoke::Stack x) const {
	// isExclusive()
	bool xret = this->QActionGroup::isExclusive();
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) {
	// add(QAction*)
	this->QActionGroup::add((QAction*)x[1].s_voidp);
    }
    void x_6(Smoke::Stack x) {
	// addSeparator()
	this->QActionGroup::addSeparator();
    }
    void x_7(Smoke::Stack x) {
	// addTo(QWidget*)
	bool xret = this->QActionGroup::addTo((QWidget*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_8(Smoke::Stack x) {
	// removeFrom(QWidget*)
	bool xret = this->QActionGroup::removeFrom((QWidget*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) {
	// setEnabled(bool)
	this->QActionGroup::setEnabled((bool)x[1].s_bool);
    }
    void x_10(Smoke::Stack x) {
	// setUsesDropDown(bool)
	this->QActionGroup::setUsesDropDown((bool)x[1].s_bool);
    }
    void x_11(Smoke::Stack x) const {
	// usesDropDown()
	bool xret = this->QActionGroup::usesDropDown();
	x[0].s_bool = (bool)xret;
    }
    void x_12(Smoke::Stack x) {
	// setIconSet(const QIconSet&)
	this->QActionGroup::setIconSet(*(const QIconSet *)x[1].s_voidp);
    }
    void x_13(Smoke::Stack x) {
	// setText(const QString&)
	this->QActionGroup::setText(*(const QString *)x[1].s_voidp);
    }
    void x_14(Smoke::Stack x) {
	// setMenuText(const QString&)
	this->QActionGroup::setMenuText(*(const QString *)x[1].s_voidp);
    }
    void x_15(Smoke::Stack x) {
	// setToolTip(const QString&)
	this->QActionGroup::setToolTip(*(const QString *)x[1].s_voidp);
    }
    void x_16(Smoke::Stack x) {
	// setWhatsThis(const QString&)
	this->QActionGroup::setWhatsThis(*(const QString *)x[1].s_voidp);
    }
    void x_17(Smoke::Stack x) {
	// insert(QAction*)
	this->QActionGroup::insert((QAction*)x[1].s_voidp);
    }
    void x_18(Smoke::Stack x) {
	// selected(QAction*)
	this->QActionGroup::selected((QAction*)x[1].s_voidp);
    }
    void x_19(Smoke::Stack x) {
	// childEvent(QChildEvent*)
	this->QActionGroup::childEvent((QChildEvent*)x[1].s_voidp);
    }
    void x_20(Smoke::Stack x) {
	// addedTo(QWidget*, QWidget*, QAction*)
	this->QActionGroup::addedTo((QWidget*)x[1].s_voidp,(QWidget*)x[2].s_voidp,(QAction*)x[3].s_voidp);
    }
    void x_21(Smoke::Stack x) {
	// addedTo(int, QPopupMenu*, QAction*)
	this->QActionGroup::addedTo((int)x[1].s_int,(QPopupMenu*)x[2].s_voidp,(QAction*)x[3].s_voidp);
    }
    void x_22(Smoke::Stack x) {
	// addedTo(QWidget*, QWidget*)
	this->QActionGroup::addedTo((QWidget*)x[1].s_voidp,(QWidget*)x[2].s_voidp);
    }
    void x_23(Smoke::Stack x) {
	// addedTo(int, QPopupMenu*)
	this->QActionGroup::addedTo((int)x[1].s_int,(QPopupMenu*)x[2].s_voidp);
    }
    virtual bool addTo(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 73, x)) return (bool)x[0].s_bool;
	return this->QActionGroup::addTo(x1);
    }
    virtual void addedTo(QWidget* x1, QWidget* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 88, x)) return;
	this->QActionGroup::addedTo(x1, x2);
    }
    virtual void addedTo(QWidget* x1, QWidget* x2, QAction* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 86, x)) return;
	this->QActionGroup::addedTo(x1, x2, x3);
    }
    virtual void addedTo(int x1, QPopupMenu* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 89, x)) return;
	this->QActionGroup::addedTo(x1, x2);
    }
    virtual void addedTo(int x1, QPopupMenu* x2, QAction* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 87, x)) return;
	this->QActionGroup::addedTo(x1, x2, x3);
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
	if(call_method((void*)this, 85, x)) return;
	this->QActionGroup::childEvent(x1);
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
    virtual bool removeFrom(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 74, x)) return (bool)x[0].s_bool;
	return this->QActionGroup::removeFrom(x1);
    }
    virtual void setAccel(const QKeySequence& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 50, x)) return;
	this->QAction::setAccel(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 75, x)) return;
	this->QActionGroup::setEnabled(x1);
    }
    virtual void setIconSet(const QIconSet& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 78, x)) return;
	this->QActionGroup::setIconSet(x1);
    }
    virtual void setMenuText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 80, x)) return;
	this->QActionGroup::setMenuText(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5410, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setOn(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 59, x)) return;
	this->QAction::setOn(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 5440, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setStatusTip(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 46, x)) return;
	this->QAction::setStatusTip(x1);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 79, x)) return;
	this->QActionGroup::setText(x1);
    }
    virtual void setToggleAction(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 52, x)) return;
	this->QAction::setToggleAction(x1);
    }
    virtual void setToolTip(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 81, x)) return;
	this->QActionGroup::setToolTip(x1);
    }
    virtual void setWhatsThis(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 82, x)) return;
	this->QActionGroup::setWhatsThis(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QActionGroup() {}
};
void xcall_QActionGroup(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QActionGroup *xself = (x_QActionGroup*)obj;
    switch(xi) {
	case 0: x_QActionGroup::x_0(args);	break;
	case 1: x_QActionGroup::x_1(args);	break;
	case 2: x_QActionGroup::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: delete (QActionGroup*)xself;	break;
    }
}
