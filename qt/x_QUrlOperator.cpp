//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qurlinfo.h>
#include <qcstring.h>
#include <qstring.h>
#include <qurloperator.h>
#include <qstringlist.h>

class x_QUrlOperator : public QUrlOperator {
public:
    static void x_0(Smoke::Stack x) {
	// QUrlOperator()
	x_QUrlOperator* xret = new x_QUrlOperator();
	x[0].s_voidp = (void*)xret;
    }
    x_QUrlOperator() : QUrlOperator() {
    }
    static void x_1(Smoke::Stack x) {
	// QUrlOperator(const QString&)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUrlOperator(const QString& x1) : QUrlOperator(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QUrlOperator(const QUrlOperator&)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QUrlOperator *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUrlOperator(const QUrlOperator& x1) : QUrlOperator(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QUrlOperator(const QUrlOperator&, const QString&, bool)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QUrlOperator *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_voidp = (void*)xret;
    }
    x_QUrlOperator(const QUrlOperator& x1, const QString& x2, bool x3) : QUrlOperator(x1, x2, x3) {
    }
    static void x_4(Smoke::Stack x) {
	// QUrlOperator(const QUrlOperator&, const QString&)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QUrlOperator *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QUrlOperator(const QUrlOperator& x1, const QString& x2) : QUrlOperator(x1, x2) {
    }
    void x_5(Smoke::Stack x) {
	// setPath(const QString&)
	this->QUrlOperator::setPath(*(const QString *)x[1].s_voidp);
    }
    void x_6(Smoke::Stack x) {
	// cdUp()
	bool xret = this->QUrlOperator::cdUp();
	x[0].s_bool = (bool)xret;
    }
    void x_7(Smoke::Stack x) {
	// listChildren()
	const QNetworkOperation* xret = this->QUrlOperator::listChildren();
	x[0].s_voidp = (void*)xret;
    }
    void x_8(Smoke::Stack x) {
	// mkdir(const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::mkdir(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_9(Smoke::Stack x) {
	// remove(const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::remove(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_10(Smoke::Stack x) {
	// rename(const QString&, const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::rename(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_11(Smoke::Stack x) {
	// get(const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::get(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_12(Smoke::Stack x) {
	// get()
	const QNetworkOperation* xret = this->QUrlOperator::get();
	x[0].s_voidp = (void*)xret;
    }
    void x_13(Smoke::Stack x) {
	// put(const QByteArray&, const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::put(*(const QByteArray *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_14(Smoke::Stack x) {
	// put(const QByteArray&)
	const QNetworkOperation* xret = this->QUrlOperator::put(*(const QByteArray *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_15(Smoke::Stack x) {
	// copy(const QString&, const QString&, bool, bool)
	QPtrList<QNetworkOperation> xret = this->QUrlOperator::copy(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(bool)x[3].s_bool,(bool)x[4].s_bool);
	x[0].s_voidp = (void*)new QPtrList<QNetworkOperation>(xret);
    }
    void x_16(Smoke::Stack x) {
	// copy(const QString&, const QString&, bool)
	QPtrList<QNetworkOperation> xret = this->QUrlOperator::copy(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_voidp = (void*)new QPtrList<QNetworkOperation>(xret);
    }
    void x_17(Smoke::Stack x) {
	// copy(const QString&, const QString&)
	QPtrList<QNetworkOperation> xret = this->QUrlOperator::copy(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QPtrList<QNetworkOperation>(xret);
    }
    void x_18(Smoke::Stack x) {
	// copy(const QStringList&, const QString&, bool)
	this->QUrlOperator::copy(*(const QStringList *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(bool)x[3].s_bool);
    }
    void x_19(Smoke::Stack x) {
	// copy(const QStringList&, const QString&)
	this->QUrlOperator::copy(*(const QStringList *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
    }
    void x_20(Smoke::Stack x) {
	// isDir(bool*)
	bool xret = this->QUrlOperator::isDir((bool*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_21(Smoke::Stack x) {
	// isDir()
	bool xret = this->QUrlOperator::isDir();
	x[0].s_bool = (bool)xret;
    }
    void x_22(Smoke::Stack x) {
	// setNameFilter(const QString&)
	this->QUrlOperator::setNameFilter(*(const QString *)x[1].s_voidp);
    }
    void x_23(Smoke::Stack x) const {
	// nameFilter()
	QString xret = this->QUrlOperator::nameFilter();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_24(Smoke::Stack x) const {
	// info(const QString&)
	QUrlInfo xret = this->QUrlOperator::info(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QUrlInfo(xret);
    }
    void x_25(Smoke::Stack x) {
	// operator=(const QUrlOperator&)
	QUrlOperator& xret = this->QUrlOperator::operator=(*(const QUrlOperator *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_26(Smoke::Stack x) {
	// operator=(const QString&)
	QUrlOperator& xret = this->QUrlOperator::operator=(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_27(Smoke::Stack x) {
	// stop()
	this->QUrlOperator::stop();
    }
    void x_28(Smoke::Stack x) {
	// newChildren(const QValueList<QUrlInfo>&, QNetworkOperation*)
	this->QUrlOperator::newChildren(*(const QValueList<QUrlInfo> *)x[1].s_voidp,(QNetworkOperation*)x[2].s_voidp);
    }
    void x_29(Smoke::Stack x) {
	// finished(QNetworkOperation*)
	this->QUrlOperator::finished((QNetworkOperation*)x[1].s_voidp);
    }
    void x_30(Smoke::Stack x) {
	// start(QNetworkOperation*)
	this->QUrlOperator::start((QNetworkOperation*)x[1].s_voidp);
    }
    void x_31(Smoke::Stack x) {
	// createdDirectory(const QUrlInfo&, QNetworkOperation*)
	this->QUrlOperator::createdDirectory(*(const QUrlInfo *)x[1].s_voidp,(QNetworkOperation*)x[2].s_voidp);
    }
    void x_32(Smoke::Stack x) {
	// removed(QNetworkOperation*)
	this->QUrlOperator::removed((QNetworkOperation*)x[1].s_voidp);
    }
    void x_33(Smoke::Stack x) {
	// itemChanged(QNetworkOperation*)
	this->QUrlOperator::itemChanged((QNetworkOperation*)x[1].s_voidp);
    }
    void x_34(Smoke::Stack x) {
	// data(const QByteArray&, QNetworkOperation*)
	this->QUrlOperator::data(*(const QByteArray *)x[1].s_voidp,(QNetworkOperation*)x[2].s_voidp);
    }
    void x_35(Smoke::Stack x) {
	// dataTransferProgress(int, int, QNetworkOperation*)
	this->QUrlOperator::dataTransferProgress((int)x[1].s_int,(int)x[2].s_int,(QNetworkOperation*)x[3].s_voidp);
    }
    void x_36(Smoke::Stack x) {
	// startedNextCopy(const QPtrList<QNetworkOperation>&)
	this->QUrlOperator::startedNextCopy(*(const QPtrList<QNetworkOperation> *)x[1].s_voidp);
    }
    void x_37(Smoke::Stack x) {
	// connectionStateChanged(int, const QString&)
	this->QUrlOperator::connectionStateChanged((int)x[1].s_int,*(const QString *)x[2].s_voidp);
    }
    void x_38(Smoke::Stack x) {
	// reset()
	this->QUrlOperator::reset();
    }
    void x_39(Smoke::Stack x) {
	// parse(const QString&)
	bool xret = this->QUrlOperator::parse(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_40(Smoke::Stack x) {
	// checkValid()
	bool xret = this->QUrlOperator::checkValid();
	x[0].s_bool = (bool)xret;
    }
    void x_41(Smoke::Stack x) {
	// clearEntries()
	this->QUrlOperator::clearEntries();
    }
    void x_42(Smoke::Stack x) {
	// getNetworkProtocol()
	this->QUrlOperator::getNetworkProtocol();
    }
    void x_43(Smoke::Stack x) {
	// deleteNetworkProtocol()
	this->QUrlOperator::deleteNetworkProtocol();
    }
    virtual void addPath(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9095, x)) return;
	this->QUrl::addPath(x1);
    }
    virtual bool cdUp() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9156, x)) return (bool)x[0].s_bool;
	return this->QUrlOperator::cdUp();
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 5469, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual bool checkValid() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9190, x)) return (bool)x[0].s_bool;
	return this->QUrlOperator::checkValid();
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5465, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void clearEntries() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9191, x)) return;
	this->QUrlOperator::clearEntries();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5467, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual QPtrList<QNetworkOperation> copy(const QString& x1, const QString& x2, bool x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_bool = (bool)x3;
	x[4].s_bool = (bool)x4;
	if(call_method((void*)this, 9165, x)) {
	    QPtrList<QNetworkOperation> *xptr = (QPtrList<QNetworkOperation> *)x[0].s_voidp;
	    QPtrList<QNetworkOperation> xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QUrlOperator::copy(x1, x2, x3, x4);
    }
    virtual void copy(const QStringList& x1, const QString& x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_bool = (bool)x3;
	if(call_method((void*)this, 9168, x)) return;
	this->QUrlOperator::copy(x1, x2, x3);
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
    virtual const QNetworkOperation* get(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9161, x)) 	return (const QNetworkOperation*)x[0].s_voidp;
	return this->QUrlOperator::get(x1);
    }
    virtual QUrlInfo info(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9174, x)) {
	    QUrlInfo *xptr = (QUrlInfo *)x[0].s_voidp;
	    QUrlInfo xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QUrlOperator::info(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool isDir(bool* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9170, x)) return (bool)x[0].s_bool;
	return this->QUrlOperator::isDir(x1);
    }
    virtual const QNetworkOperation* listChildren() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9157, x)) 	return (const QNetworkOperation*)x[0].s_voidp;
	return this->QUrlOperator::listChildren();
    }
    virtual const QNetworkOperation* mkdir(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9158, x)) 	return (const QNetworkOperation*)x[0].s_voidp;
	return this->QUrlOperator::mkdir(x1);
    }
    virtual bool parse(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9189, x)) return (bool)x[0].s_bool;
	return this->QUrlOperator::parse(x1);
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
    virtual const QNetworkOperation* put(const QByteArray& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 9163, x)) 	return (const QNetworkOperation*)x[0].s_voidp;
	return this->QUrlOperator::put(x1, x2);
    }
    virtual const QNetworkOperation* remove(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9159, x)) 	return (const QNetworkOperation*)x[0].s_voidp;
	return this->QUrlOperator::remove(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5428, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual const QNetworkOperation* rename(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 9160, x)) 	return (const QNetworkOperation*)x[0].s_voidp;
	return this->QUrlOperator::rename(x1, x2);
    }
    virtual void reset() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9188, x)) return;
	this->QUrlOperator::reset();
    }
    virtual void setEncodedPathAndQuery(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9086, x)) return;
	this->QUrl::setEncodedPathAndQuery(x1);
    }
    virtual void setFileName(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9096, x)) return;
	this->QUrl::setFileName(x1);
    }
    virtual void setHost(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9077, x)) return;
	this->QUrl::setHost(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5410, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setNameFilter(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9172, x)) return;
	this->QUrlOperator::setNameFilter(x1);
    }
    virtual void setPassword(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9074, x)) return;
	this->QUrl::setPassword(x1);
    }
    virtual void setPath(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9155, x)) return;
	this->QUrlOperator::setPath(x1);
    }
    virtual void setPort(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 9080, x)) return;
	this->QUrl::setPort(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 5440, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setProtocol(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9069, x)) return;
	this->QUrl::setProtocol(x1);
    }
    virtual void setQuery(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9088, x)) return;
	this->QUrl::setQuery(x1);
    }
    virtual void setRef(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9091, x)) return;
	this->QUrl::setRef(x1);
    }
    virtual void setUser(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9071, x)) return;
	this->QUrl::setUser(x1);
    }
    virtual void stop() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9177, x)) return;
	this->QUrlOperator::stop();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QString toString(bool x1, bool x2) const {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 9104, x)) {
	    QString *xptr = (QString *)x[0].s_voidp;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QUrl::toString(x1, x2);
    }
    ~x_QUrlOperator() {}
};
void xcall_QUrlOperator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QUrlOperator *xself = (x_QUrlOperator*)obj;
    switch(xi) {
	case 0: x_QUrlOperator::x_0(args);	break;
	case 1: x_QUrlOperator::x_1(args);	break;
	case 2: x_QUrlOperator::x_2(args);	break;
	case 3: x_QUrlOperator::x_3(args);	break;
	case 4: x_QUrlOperator::x_4(args);	break;
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
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: delete (QUrlOperator*)xself;	break;
    }
}
