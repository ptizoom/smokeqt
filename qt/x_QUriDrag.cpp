//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qcstring.h>
#include <qstring.h>
#include <qdragobject.h>
#include <qstrlist.h>
#include <qpixmap.h>
#include <qstringlist.h>

class x_QUriDrag : public QUriDrag {
public:
    static void x_0(Smoke::Stack x) {
	// QUriDrag(QStrList, QWidget*, const char*)
	x_QUriDrag* xret = new x_QUriDrag(*(QStrList *)x[1].s_voidp,(QWidget*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUriDrag(QStrList x1, QWidget* x2, const char* x3) : QUriDrag(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QUriDrag(QStrList, QWidget*)
	x_QUriDrag* xret = new x_QUriDrag(*(QStrList *)x[1].s_voidp,(QWidget*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUriDrag(QStrList x1, QWidget* x2) : QUriDrag(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QUriDrag(QStrList)
	x_QUriDrag* xret = new x_QUriDrag(*(QStrList *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUriDrag(QStrList x1) : QUriDrag(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QUriDrag(QWidget*, const char*)
	x_QUriDrag* xret = new x_QUriDrag((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUriDrag(QWidget* x1, const char* x2) : QUriDrag(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QUriDrag(QWidget*)
	x_QUriDrag* xret = new x_QUriDrag((QWidget*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUriDrag(QWidget* x1) : QUriDrag(x1) {
    }
    static void x_5(Smoke::Stack x) {
	// QUriDrag()
	x_QUriDrag* xret = new x_QUriDrag();
	x[0].s_voidp = (void*)xret;
    }
    x_QUriDrag() : QUriDrag() {
    }
    void x_6(Smoke::Stack x) {
	// setFilenames(const QStringList&)
	this->QUriDrag::setFilenames(*(const QStringList *)x[1].s_voidp);
    }
    void x_7(Smoke::Stack x) {
	// setFileNames(const QStringList&)
	this->QUriDrag::setFileNames(*(const QStringList *)x[1].s_voidp);
    }
    void x_8(Smoke::Stack x) {
	// setUnicodeUris(const QStringList&)
	this->QUriDrag::setUnicodeUris(*(const QStringList *)x[1].s_voidp);
    }
    void x_9(Smoke::Stack x) {
	// setUris(QStrList)
	this->QUriDrag::setUris(*(QStrList *)x[1].s_voidp);
    }
    static void x_10(Smoke::Stack x) {
	// uriToLocalFile(const char*)
	QString xret = QUriDrag::uriToLocalFile((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_11(Smoke::Stack x) {
	// localFileToUri(const QString&)
	QCString xret = QUriDrag::localFileToUri(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    static void x_12(Smoke::Stack x) {
	// uriToUnicodeUri(const char*)
	QString xret = QUriDrag::uriToUnicodeUri((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_13(Smoke::Stack x) {
	// unicodeUriToUri(const QString&)
	QCString xret = QUriDrag::unicodeUriToUri(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    static void x_14(Smoke::Stack x) {
	// canDecode(const QMimeSource*)
	bool xret = QUriDrag::canDecode((const QMimeSource*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    static void x_15(Smoke::Stack x) {
	// decode(const QMimeSource*, QStrList&)
	bool xret = QUriDrag::decode((const QMimeSource*)x[1].s_voidp,*(QStrList *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    static void x_16(Smoke::Stack x) {
	// decodeToUnicodeUris(const QMimeSource*, QStringList&)
	bool xret = QUriDrag::decodeToUnicodeUris((const QMimeSource*)x[1].s_voidp,*(QStringList *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    static void x_17(Smoke::Stack x) {
	// decodeLocalFiles(const QMimeSource*, QStringList&)
	bool xret = QUriDrag::decodeLocalFiles((const QMimeSource*)x[1].s_voidp,*(QStringList *)x[2].s_voidp);
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
	if(call_method((void*)this, 7626, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_voidp;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStoredDrag::encodedData(x1);
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
	if(call_method((void*)this, 7625, x)) 	return (const char*)x[0].s_voidp;
	return this->QStoredDrag::format(x1);
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
    virtual void setEncodedData(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7624, x)) return;
	this->QStoredDrag::setEncodedData(x1);
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
    virtual void setUris(QStrList x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9053, x)) return;
	this->QUriDrag::setUris(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QUriDrag() {}
};
void xcall_QUriDrag(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QUriDrag *xself = (x_QUriDrag*)obj;
    switch(xi) {
	case 0: x_QUriDrag::x_0(args);	break;
	case 1: x_QUriDrag::x_1(args);	break;
	case 2: x_QUriDrag::x_2(args);	break;
	case 3: x_QUriDrag::x_3(args);	break;
	case 4: x_QUriDrag::x_4(args);	break;
	case 5: x_QUriDrag::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: x_QUriDrag::x_10(args);	break;
	case 11: x_QUriDrag::x_11(args);	break;
	case 12: x_QUriDrag::x_12(args);	break;
	case 13: x_QUriDrag::x_13(args);	break;
	case 14: x_QUriDrag::x_14(args);	break;
	case 15: x_QUriDrag::x_15(args);	break;
	case 16: x_QUriDrag::x_16(args);	break;
	case 17: x_QUriDrag::x_17(args);	break;
	case 18: delete (QUriDrag*)xself;	break;
    }
}
