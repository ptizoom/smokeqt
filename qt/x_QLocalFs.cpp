//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qlocalfs.h>

class x_QLocalFs : public QLocalFs {
public:
    static void x_0(Smoke::Stack x) {
	// QLocalFs()
	x_QLocalFs* xret = new x_QLocalFs();
	x[0].s_voidp = (void*)xret;
    }
    x_QLocalFs() : QLocalFs() {
    }
    void x_1(Smoke::Stack x) const {
	// supportedOperations()
	int xret = this->QLocalFs::supportedOperations();
	x[0].s_int = (int)xret;
    }
    void x_2(Smoke::Stack x) {
	// operationListChildren(QNetworkOperation*)
	this->QLocalFs::operationListChildren((QNetworkOperation*)x[1].s_voidp);
    }
    void x_3(Smoke::Stack x) {
	// operationMkDir(QNetworkOperation*)
	this->QLocalFs::operationMkDir((QNetworkOperation*)x[1].s_voidp);
    }
    void x_4(Smoke::Stack x) {
	// operationRemove(QNetworkOperation*)
	this->QLocalFs::operationRemove((QNetworkOperation*)x[1].s_voidp);
    }
    void x_5(Smoke::Stack x) {
	// operationRename(QNetworkOperation*)
	this->QLocalFs::operationRename((QNetworkOperation*)x[1].s_voidp);
    }
    void x_6(Smoke::Stack x) {
	// operationGet(QNetworkOperation*)
	this->QLocalFs::operationGet((QNetworkOperation*)x[1].s_voidp);
    }
    void x_7(Smoke::Stack x) {
	// operationPut(QNetworkOperation*)
	this->QLocalFs::operationPut((QNetworkOperation*)x[1].s_voidp);
    }
    virtual void addOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5368, x)) return;
	this->QNetworkProtocol::addOperation(x1);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 5469, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual bool checkConnection(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5394, x)) return (bool)x[0].s_bool;
	return this->QNetworkProtocol::checkConnection(x1);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5465, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void clearOperationQueue() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5371, x)) return;
	this->QNetworkProtocol::clearOperationQueue();
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
    virtual void operationGet(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 4698, x)) return;
	this->QLocalFs::operationGet(x1);
    }
    virtual void operationListChildren(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 4694, x)) return;
	this->QLocalFs::operationListChildren(x1);
    }
    virtual void operationMkDir(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 4695, x)) return;
	this->QLocalFs::operationMkDir(x1);
    }
    virtual void operationPut(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 4699, x)) return;
	this->QLocalFs::operationPut(x1);
    }
    virtual void operationPutChunk(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5393, x)) return;
	this->QNetworkProtocol::operationPutChunk(x1);
    }
    virtual void operationRemove(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 4696, x)) return;
	this->QLocalFs::operationRemove(x1);
    }
    virtual void operationRename(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 4697, x)) return;
	this->QLocalFs::operationRename(x1);
    }
    virtual void processOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5386, x)) return;
	this->QNetworkProtocol::processOperation(x1);
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
    virtual void setAutoDelete(bool x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 5364, x)) return;
	this->QNetworkProtocol::setAutoDelete(x1, x2);
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
    virtual void setUrl(QUrlOperator* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5363, x)) return;
	this->QNetworkProtocol::setUrl(x1);
    }
    virtual void stop() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5372, x)) return;
	this->QNetworkProtocol::stop();
    }
    virtual int supportedOperations() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4693, x)) return (int)x[0].s_int;
	return this->QLocalFs::supportedOperations();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QLocalFs() {}
};
void xcall_QLocalFs(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QLocalFs *xself = (x_QLocalFs*)obj;
    switch(xi) {
	case 0: x_QLocalFs::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
    }
}
