//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qcstring.h>
#include <qeucjpcodec.h>

class x_QEucJpCodec : public QEucJpCodec {
public:
    void x_0(Smoke::Stack x) const {
	// mibEnum()
	int xret = this->QEucJpCodec::mibEnum();
	x[0].s_int = (int)xret;
    }
    void x_1(Smoke::Stack x) const {
	// name()
	const char* xret = this->QEucJpCodec::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// mimeName()
	const char* xret = this->QEucJpCodec::mimeName();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = this->QEucJpCodec::makeDecoder();
	x[0].s_voidp = (void*)xret;
    }
    void x_4(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = this->QEucJpCodec::fromUnicode(*(const QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// toUnicode(const char*, int)
	QString xret = this->QEucJpCodec::toUnicode((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_6(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = this->QEucJpCodec::heuristicContentMatch((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) const {
	// heuristicNameMatch(const char*)
	int xret = this->QEucJpCodec::heuristicNameMatch((const char*)x[1].s_voidp);
	x[0].s_int = (int)xret;
    }
    static void x_8(Smoke::Stack x) {
	// QEucJpCodec()
	x_QEucJpCodec* xret = new x_QEucJpCodec();
	x[0].s_voidp = (void*)xret;
    }
    x_QEucJpCodec() : QEucJpCodec() {
    }
    virtual bool canEncode(QChar x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 8462, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual bool canEncode(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 8463, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual unsigned short characterFromUnicode(const QString& x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 8467, x)) {
	    unsigned short *xptr = (unsigned short *)x[0].s_voidp;
	    unsigned short xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::characterFromUnicode(x1, x2);
    }
    virtual QCString fromUnicode(const QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 2364, x)) {
	    QCString *xptr = (QCString *)x[0].s_voidp;
	    QCString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QEucJpCodec::fromUnicode(x1, x2);
    }
    virtual QByteArray fromUnicode(const QString& x1, int x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	if(call_method((void*)this, 8466, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_voidp;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::fromUnicode(x1, x2, x3);
    }
    virtual int heuristicContentMatch(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 2366, x)) return (int)x[0].s_int;
	return this->QEucJpCodec::heuristicContentMatch(x1, x2);
    }
    virtual int heuristicNameMatch(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 2367, x)) return (int)x[0].s_int;
	return this->QEucJpCodec::heuristicNameMatch(x1);
    }
    virtual QTextDecoder* makeDecoder() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 2363, x)) 	return (QTextDecoder*)x[0].s_voidp;
	return this->QEucJpCodec::makeDecoder();
    }
    virtual QTextEncoder* makeEncoder() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 8453, x)) 	return (QTextEncoder*)x[0].s_voidp;
	return this->QTextCodec::makeEncoder();
    }
    virtual int mibEnum() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 2360, x)) return (int)x[0].s_int;
	return this->QEucJpCodec::mibEnum();
    }
    virtual const char* mimeName() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 2362, x)) 	return (const char*)x[0].s_voidp;
	return this->QEucJpCodec::mimeName();
    }
    virtual const char* name() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 2361, x)) 	return (const char*)x[0].s_voidp;
	return this->QEucJpCodec::name();
    }
    virtual QString toUnicode(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 2365, x)) {
	    QString *xptr = (QString *)x[0].s_voidp;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QEucJpCodec::toUnicode(x1, x2);
    }
    ~x_QEucJpCodec() {}
};
void xcall_QEucJpCodec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QEucJpCodec *xself = (x_QEucJpCodec*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: x_QEucJpCodec::x_8(args);	break;
	case 9: delete (QEucJpCodec*)xself;	break;
    }
}
