//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qmotifplusstyle.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QMotifPlusStyle : public QMotifPlusStyle {
public:
    static void x_0(Smoke::Stack x) {
	// QMotifPlusStyle(bool)
	x_QMotifPlusStyle* xret = new x_QMotifPlusStyle((bool)x[1].s_bool);
	x[0].s_voidp = (void*)xret;
    }
    x_QMotifPlusStyle(bool x1) : QMotifPlusStyle(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QMotifPlusStyle()
	x_QMotifPlusStyle* xret = new x_QMotifPlusStyle();
	x[0].s_voidp = (void*)xret;
    }
    x_QMotifPlusStyle() : QMotifPlusStyle() {
    }
    void x_2(Smoke::Stack x) {
	// polish(QPalette&)
	this->QMotifPlusStyle::polish(*(QPalette *)x[1].s_voidp);
    }
    void x_3(Smoke::Stack x) {
	// polish(QWidget*)
	this->QMotifPlusStyle::polish((QWidget*)x[1].s_voidp);
    }
    void x_4(Smoke::Stack x) {
	// unPolish(QWidget*)
	this->QMotifPlusStyle::unPolish((QWidget*)x[1].s_voidp);
    }
    void x_5(Smoke::Stack x) {
	// polish(QApplication*)
	this->QMotifPlusStyle::polish((QApplication*)x[1].s_voidp);
    }
    void x_6(Smoke::Stack x) {
	// unPolish(QApplication*)
	this->QMotifPlusStyle::unPolish((QApplication*)x[1].s_voidp);
    }
    void x_7(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QMotifPlusStyle::drawPrimitive(*(QStyle::PrimitiveElement *)x[1].s_voidp,(QPainter*)x[2].s_voidp,*(const QRect *)x[3].s_voidp,*(const QColorGroup *)x[4].s_voidp,*(QStyle::SFlags *)x[5].s_voidp,*(const QStyleOption *)x[6].s_voidp);
    }
    void x_8(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QMotifPlusStyle::drawPrimitive(*(QStyle::PrimitiveElement *)x[1].s_voidp,(QPainter*)x[2].s_voidp,*(const QRect *)x[3].s_voidp,*(const QColorGroup *)x[4].s_voidp,*(QStyle::SFlags *)x[5].s_voidp);
    }
    void x_9(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&)
	this->QMotifPlusStyle::drawPrimitive(*(QStyle::PrimitiveElement *)x[1].s_voidp,(QPainter*)x[2].s_voidp,*(const QRect *)x[3].s_voidp,*(const QColorGroup *)x[4].s_voidp);
    }
    void x_10(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QMotifPlusStyle::drawControl(*(QStyle::ControlElement *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp,*(QStyle::SFlags *)x[6].s_voidp,*(const QStyleOption *)x[7].s_voidp);
    }
    void x_11(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QMotifPlusStyle::drawControl(*(QStyle::ControlElement *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp,*(QStyle::SFlags *)x[6].s_voidp);
    }
    void x_12(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QMotifPlusStyle::drawControl(*(QStyle::ControlElement *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp);
    }
    void x_13(Smoke::Stack x) const {
	// subRect(QStyle::SubRect, const QWidget*)
	QRect xret = this->QMotifPlusStyle::subRect(*(QStyle::SubRect *)x[1].s_voidp,(const QWidget*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QRect(xret);
    }
    void x_14(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags, const QStyleOption&)
	this->QMotifPlusStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp,*(QStyle::SFlags *)x[6].s_voidp,*(QStyle::SCFlags *)x[7].s_voidp,*(QStyle::SCFlags *)x[8].s_voidp,*(const QStyleOption *)x[9].s_voidp);
    }
    void x_15(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags)
	this->QMotifPlusStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp,*(QStyle::SFlags *)x[6].s_voidp,*(QStyle::SCFlags *)x[7].s_voidp,*(QStyle::SCFlags *)x[8].s_voidp);
    }
    void x_16(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags)
	this->QMotifPlusStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp,*(QStyle::SFlags *)x[6].s_voidp,*(QStyle::SCFlags *)x[7].s_voidp);
    }
    void x_17(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QMotifPlusStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp,*(QStyle::SFlags *)x[6].s_voidp);
    }
    void x_18(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QMotifPlusStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_voidp,(QPainter*)x[2].s_voidp,(const QWidget*)x[3].s_voidp,*(const QRect *)x[4].s_voidp,*(const QColorGroup *)x[5].s_voidp);
    }
    void x_19(Smoke::Stack x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl, const QStyleOption&)
	QRect xret = this->QMotifPlusStyle::querySubControlMetrics(*(QStyle::ComplexControl *)x[1].s_voidp,(const QWidget*)x[2].s_voidp,*(QStyle::SubControl *)x[3].s_voidp,*(const QStyleOption *)x[4].s_voidp);
	x[0].s_voidp = (void*)new QRect(xret);
    }
    void x_20(Smoke::Stack x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl)
	QRect xret = this->QMotifPlusStyle::querySubControlMetrics(*(QStyle::ComplexControl *)x[1].s_voidp,(const QWidget*)x[2].s_voidp,*(QStyle::SubControl *)x[3].s_voidp);
	x[0].s_voidp = (void*)new QRect(xret);
    }
    void x_21(Smoke::Stack x) const {
	// pixelMetric(QStyle::PixelMetric, const QWidget*)
	int xret = this->QMotifPlusStyle::pixelMetric(*(QStyle::PixelMetric *)x[1].s_voidp,(const QWidget*)x[2].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_22(Smoke::Stack x) const {
	// pixelMetric(QStyle::PixelMetric)
	int xret = this->QMotifPlusStyle::pixelMetric(*(QStyle::PixelMetric *)x[1].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_23(Smoke::Stack x) const {
	// styleHint(QStyle::StyleHint, const QWidget*, const QStyleOption&, QStyleHintReturn*)
	int xret = this->QMotifPlusStyle::styleHint(*(QStyle::StyleHint *)x[1].s_voidp,(const QWidget*)x[2].s_voidp,*(const QStyleOption *)x[3].s_voidp,(QStyleHintReturn*)x[4].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_24(Smoke::Stack x) const {
	// styleHint(QStyle::StyleHint, const QWidget*, const QStyleOption&)
	int xret = this->QMotifPlusStyle::styleHint(*(QStyle::StyleHint *)x[1].s_voidp,(const QWidget*)x[2].s_voidp,*(const QStyleOption *)x[3].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_25(Smoke::Stack x) const {
	// styleHint(QStyle::StyleHint, const QWidget*)
	int xret = this->QMotifPlusStyle::styleHint(*(QStyle::StyleHint *)x[1].s_voidp,(const QWidget*)x[2].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_26(Smoke::Stack x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QMotifPlusStyle::eventFilter((QObject*)x[1].s_voidp,(QEvent*)x[2].s_voidp);
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
    virtual void drawComplexControl(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, QStyle::SCFlags x7, QStyle::SCFlags x8, const QStyleOption& x9) const {
	Smoke::StackItem x[10];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_voidp = (void*)&x5;
	x[6].s_voidp = (void*)&x6;
	x[7].s_voidp = (void*)&x7;
	x[8].s_voidp = (void*)&x8;
	x[9].s_voidp = (void*)&x9;
	if(call_method((void*)this, 5149, x)) return;
	this->QMotifPlusStyle::drawComplexControl(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawComplexControlMask(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	Smoke::StackItem x[6];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_voidp = (void*)&x5;
	if(call_method((void*)this, 1169, x)) return;
	this->QCommonStyle::drawComplexControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawControl(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, const QStyleOption& x7) const {
	Smoke::StackItem x[8];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_voidp = (void*)&x5;
	x[6].s_voidp = (void*)&x6;
	x[7].s_voidp = (void*)&x7;
	if(call_method((void*)this, 5145, x)) return;
	this->QMotifPlusStyle::drawControl(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual void drawControlMask(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	Smoke::StackItem x[6];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_voidp = (void*)&x5;
	if(call_method((void*)this, 1161, x)) return;
	this->QCommonStyle::drawControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawItem(QPainter* x1, const QRect& x2, int x3, const QColorGroup& x4, bool x5, const QPixmap* x6, const QString& x7, int x8, const QColor* x9) const {
	Smoke::StackItem x[10];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_int = (int)x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_bool = (bool)x5;
	x[6].s_voidp = (void*)x6;
	x[7].s_voidp = (void*)&x7;
	x[8].s_int = (int)x8;
	x[9].s_voidp = (void*)x9;
	if(call_method((void*)this, 7870, x)) return;
	this->QStyle::drawItem(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawPrimitive(QStyle::PrimitiveElement x1, QPainter* x2, const QRect& x3, const QColorGroup& x4, QStyle::SFlags x5, const QStyleOption& x6) const {
	Smoke::StackItem x[7];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_voidp = (void*)&x5;
	x[6].s_voidp = (void*)&x6;
	if(call_method((void*)this, 5142, x)) return;
	this->QMotifPlusStyle::drawPrimitive(x1, x2, x3, x4, x5, x6);
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
	if(call_method((void*)this, 5161, x)) return (bool)x[0].s_bool;
	return this->QMotifPlusStyle::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QRect itemRect(QPainter* x1, const QRect& x2, int x3, bool x4, const QPixmap* x5, const QString& x6, int x7) const {
	Smoke::StackItem x[8];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_int = (int)x3;
	x[4].s_bool = (bool)x4;
	x[5].s_voidp = (void*)x5;
	x[6].s_voidp = (void*)&x6;
	x[7].s_int = (int)x7;
	if(call_method((void*)this, 7868, x)) {
	    QRect *xptr = (QRect *)x[0].s_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStyle::itemRect(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual int pixelMetric(QStyle::PixelMetric x1, const QWidget* x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 5156, x)) return (int)x[0].s_int;
	return this->QMotifPlusStyle::pixelMetric(x1, x2);
    }
    virtual void polish(QApplication* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5140, x)) return;
	this->QMotifPlusStyle::polish(x1);
    }
    virtual void polish(QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 5137, x)) return;
	this->QMotifPlusStyle::polish(x1);
    }
    virtual void polish(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5138, x)) return;
	this->QMotifPlusStyle::polish(x1);
    }
    virtual void polishPopupMenu(QPopupMenu* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5170, x)) return;
	this->QMotifStyle::polishPopupMenu(x1);
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
    virtual QStyle::SubControl querySubControl(QStyle::ComplexControl x1, const QWidget* x2, const QPoint& x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	if(call_method((void*)this, 1173, x)) {
	    QStyle::SubControl *xptr = (QStyle::SubControl *)x[0].s_voidp;
	    QStyle::SubControl xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCommonStyle::querySubControl(x1, x2, x3, x4);
    }
    virtual QRect querySubControlMetrics(QStyle::ComplexControl x1, const QWidget* x2, QStyle::SubControl x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	if(call_method((void*)this, 5154, x)) {
	    QRect *xptr = (QRect *)x[0].s_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifPlusStyle::querySubControlMetrics(x1, x2, x3, x4);
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
    virtual QSize sizeFromContents(QStyle::ContentsType x1, const QWidget* x2, const QSize& x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	if(call_method((void*)this, 5186, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::sizeFromContents(x1, x2, x3, x4);
    }
    virtual int styleHint(QStyle::StyleHint x1, const QWidget* x2, const QStyleOption& x3, QStyleHintReturn* x4) const {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)x4;
	if(call_method((void*)this, 5158, x)) return (int)x[0].s_int;
	return this->QMotifPlusStyle::styleHint(x1, x2, x3, x4);
    }
    virtual QPixmap stylePixmap(QStyle::StylePixmap x1, const QWidget* x2, const QStyleOption& x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)&x3;
	if(call_method((void*)this, 5189, x)) {
	    QPixmap *xptr = (QPixmap *)x[0].s_voidp;
	    QPixmap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::stylePixmap(x1, x2, x3);
    }
    virtual QRect subRect(QStyle::SubRect x1, const QWidget* x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 5148, x)) {
	    QRect *xptr = (QRect *)x[0].s_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifPlusStyle::subRect(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unPolish(QApplication* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5141, x)) return;
	this->QMotifPlusStyle::unPolish(x1);
    }
    virtual void unPolish(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5139, x)) return;
	this->QMotifPlusStyle::unPolish(x1);
    }
    ~x_QMotifPlusStyle() {}
};
void xcall_QMotifPlusStyle(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMotifPlusStyle *xself = (x_QMotifPlusStyle*)obj;
    switch(xi) {
	case 0: x_QMotifPlusStyle::x_0(args);	break;
	case 1: x_QMotifPlusStyle::x_1(args);	break;
	case 2: xself->x_2(args);	break;
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
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: delete (QMotifPlusStyle*)xself;	break;
    }
}
