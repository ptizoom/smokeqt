//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qimage.h>
#include <qimageformatplugin.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QImageFormatPlugin : public QImageFormatPlugin {
public:
    static void x_0(Smoke::Stack x) {
	// QImageFormatPlugin()
	x_QImageFormatPlugin* xret = new x_QImageFormatPlugin();
	x[0].s_class = (void*)xret;
    }
    x_QImageFormatPlugin() : QImageFormatPlugin() {
    }
    void x_1(Smoke::Stack x) {
	// loadImage(const QString&, const QString&, QImage*)
	bool xret = this->QImageFormatPlugin::loadImage(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(QImage*)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_2(Smoke::Stack x) {
	// saveImage(const QString&, const QString&, const QImage&)
	bool xret = this->QImageFormatPlugin::saveImage(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QImage *)x[3].s_class);
	x[0].s_bool = (bool)xret;
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
	if(qt_Smoke->callMethod(5473, (void*)this, x)) return;
	this->QObject::childEvent(x1);
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
	if(qt_Smoke->callMethod(5413, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5435, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool installIOHandler(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->callMethod(3818, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QStringList keys() const {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(3815, (void*)this, x, true /*pure virtual*/);
	QStringList *xptr = (QStringList *)x[0].s_class;
	QStringList xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool loadImage(const QString& x1, const QString& x2, QImage* x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(3816, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::loadImage(x1, x2, x3);
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
    virtual bool saveImage(const QString& x1, const QString& x2, const QImage& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(qt_Smoke->callMethod(3817, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::saveImage(x1, x2, x3);
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
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5472, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QImageFormatPlugin() {}
};
void xcall_QImageFormatPlugin(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImageFormatPlugin *xself = (x_QImageFormatPlugin*)obj;
    switch(xi) {
	case 0: x_QImageFormatPlugin::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: delete (QImageFormatPlugin*)xself;	break;
    }
}
