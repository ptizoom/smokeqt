//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qstyleplugin.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QStylePlugin : public QStylePlugin {
public:
    static void x_0(Smoke::Stack x) {
	// QStylePlugin()
	x_QStylePlugin* xret = new x_QStylePlugin();
	x[0].s_voidp = (void*)xret;
    }
    x_QStylePlugin() : QStylePlugin() {
    }
    void x_1(Smoke::Stack x) const {
	// keys()
	QStringList xret = this->QStylePlugin::keys();
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_2(Smoke::Stack x) {
	// create(const QString&)
	QStyle* xret = this->QStylePlugin::create(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
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
    virtual QStyle* create(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	call_method_abstract((void*)this, 7938, x);
	return (QStyle*)x[0].s_voidp;
	// ABSTRACT
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
    virtual QStringList keys() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 7937, x);
	QStringList *xptr = (QStringList *)x[0].s_voidp;
	QStringList xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
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
    ~x_QStylePlugin() {}
};
void xcall_QStylePlugin(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStylePlugin *xself = (x_QStylePlugin*)obj;
    switch(xi) {
	case 0: x_QStylePlugin::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: delete (QStylePlugin*)xself;	break;
    }
}
