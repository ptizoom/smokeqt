//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qkeysequence.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qwidget.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qstyle.h>
#include <qbutton.h>

class x_QButton : public QButton {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QButton::SingleShot;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QButton::Toggle;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QButton::Tristate;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QButton::Off;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QButton::NoChange;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QButton::On;
    }
    void x_6(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QButton::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_7(Smoke::Stack x) const {
	// className()
	const char* xret = this->QButton::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_8(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QButton::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_9(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QButton::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QButton::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QButton::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QButton::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_13(Smoke::Stack x) {
	// QButton(QWidget*, const char*, Qt::WFlags)
	x_QButton* xret = new x_QButton((QWidget*)x[1].s_class,(const char*)x[2].s_voidp,(Qt::WFlags)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QButton(QWidget* x1, const char* x2, Qt::WFlags x3) : QButton(x1, x2, x3) {
    }
    static void x_14(Smoke::Stack x) {
	// QButton(QWidget*, const char*)
	x_QButton* xret = new x_QButton((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QButton(QWidget* x1, const char* x2) : QButton(x1, x2) {
    }
    static void x_15(Smoke::Stack x) {
	// QButton(QWidget*)
	x_QButton* xret = new x_QButton((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QButton(QWidget* x1) : QButton(x1) {
    }
    static void x_16(Smoke::Stack x) {
	// QButton()
	x_QButton* xret = new x_QButton();
	x[0].s_class = (void*)xret;
    }
    x_QButton() : QButton() {
    }
    void x_17(Smoke::Stack x) const {
	// text()
	QString xret = this->QButton::text();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_18(Smoke::Stack x) {
	// setText(const QString&)
	this->QButton::setText(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) const {
	// pixmap()
	const QPixmap* xret = this->QButton::pixmap();
	x[0].s_class = (void*)xret;
    }
    void x_20(Smoke::Stack x) {
	// setPixmap(const QPixmap&)
	this->QButton::setPixmap(*(const QPixmap *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) const {
	// accel()
	QKeySequence xret = this->QButton::accel();
	x[0].s_class = (void*)new QKeySequence(xret);
    }
    void x_22(Smoke::Stack x) {
	// setAccel(const QKeySequence&)
	this->QButton::setAccel(*(const QKeySequence *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) const {
	// isToggleButton()
	bool xret = this->QButton::isToggleButton();
	x[0].s_bool = xret;
    }
    void x_24(Smoke::Stack x) const {
	// toggleType()
	QButton::ToggleType xret = this->QButton::toggleType();
	x[0].s_enum = xret;
    }
    void x_25(Smoke::Stack x) {
	// setDown(bool)
	this->QButton::setDown((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// isDown()
	bool xret = this->QButton::isDown();
	x[0].s_bool = xret;
    }
    void x_27(Smoke::Stack x) const {
	// isOn()
	bool xret = this->QButton::isOn();
	x[0].s_bool = xret;
    }
    void x_28(Smoke::Stack x) const {
	// state()
	QButton::ToggleState xret = this->QButton::state();
	x[0].s_enum = xret;
    }
    void x_29(Smoke::Stack x) const {
	// autoResize()
	bool xret = this->QButton::autoResize();
	x[0].s_bool = xret;
    }
    void x_30(Smoke::Stack x) {
	// setAutoResize(bool)
	this->QButton::setAutoResize((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) const {
	// autoRepeat()
	bool xret = this->QButton::autoRepeat();
	x[0].s_bool = xret;
    }
    void x_32(Smoke::Stack x) {
	// setAutoRepeat(bool)
	this->QButton::setAutoRepeat((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_33(Smoke::Stack x) const {
	// isExclusiveToggle()
	bool xret = this->QButton::isExclusiveToggle();
	x[0].s_bool = xret;
    }
    void x_34(Smoke::Stack x) const {
	// group()
	QButtonGroup* xret = this->QButton::group();
	x[0].s_class = (void*)xret;
    }
    void x_35(Smoke::Stack x) {
	// animateClick()
	this->QButton::animateClick();
	(void)x; // noop (for compiler warning)
    }
    void x_36(Smoke::Stack x) {
	// toggle()
	this->QButton::toggle();
	(void)x; // noop (for compiler warning)
    }
    void x_37(Smoke::Stack x) {
	// pressed()
	this->QButton::pressed();
	(void)x; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) {
	// released()
	this->QButton::released();
	(void)x; // noop (for compiler warning)
    }
    void x_39(Smoke::Stack x) {
	// clicked()
	this->QButton::clicked();
	(void)x; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// toggled(bool)
	this->QButton::toggled((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) {
	// stateChanged(int)
	this->QButton::stateChanged((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_42(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QButton::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_43(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QButton::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_44(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QButton::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_45(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QButton::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_46(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QButton::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_47(Smoke::Stack x) {
	// setToggleButton(bool)
	this->QButton::setToggleButton((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_48(Smoke::Stack x) {
	// setToggleType(QButton::ToggleType)
	this->QButton::setToggleType((QButton::ToggleType)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_49(Smoke::Stack x) {
	// setOn(bool)
	this->QButton::setOn((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// setState(QButton::ToggleState)
	this->QButton::setState((QButton::ToggleState)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_51(Smoke::Stack x) const {
	// hitButton(const QPoint&)
	bool xret = this->QButton::hitButton(*(const QPoint *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_52(Smoke::Stack x) {
	// drawButton(QPainter*)
	this->QButton::drawButton((QPainter*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// drawButtonLabel(QPainter*)
	this->QButton::drawButtonLabel((QPainter*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) {
	// keyPressEvent(QKeyEvent*)
	this->QButton::keyPressEvent((QKeyEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_55(Smoke::Stack x) {
	// keyReleaseEvent(QKeyEvent*)
	this->QButton::keyReleaseEvent((QKeyEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_56(Smoke::Stack x) {
	// mousePressEvent(QMouseEvent*)
	this->QButton::mousePressEvent((QMouseEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_57(Smoke::Stack x) {
	// mouseReleaseEvent(QMouseEvent*)
	this->QButton::mouseReleaseEvent((QMouseEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_58(Smoke::Stack x) {
	// mouseMoveEvent(QMouseEvent*)
	this->QButton::mouseMoveEvent((QMouseEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_59(Smoke::Stack x) {
	// paintEvent(QPaintEvent*)
	this->QButton::paintEvent((QPaintEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_60(Smoke::Stack x) {
	// focusInEvent(QFocusEvent*)
	this->QButton::focusInEvent((QFocusEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_61(Smoke::Stack x) {
	// focusOutEvent(QFocusEvent*)
	this->QButton::focusOutEvent((QFocusEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_62(Smoke::Stack x) {
	// enabledChange(bool)
	this->QButton::enabledChange((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12114, (void*)this, x)) return;
	this->QWidget::adjustSize();
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
	if(qt_Smoke->binding->callMethod(6815, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(454, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QButton::className();
    }
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12020, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12140, (void*)this, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6934, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6817, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12141, (void*)this, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_ulong = x1;
	x[2].s_bool = x2;
	x[3].s_bool = x3;
	if(qt_Smoke->binding->callMethod(12160, (void*)this, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6816, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12062, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_bool = x2;
	if(qt_Smoke->binding->callMethod(12164, (void*)this, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6818, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12146, (void*)this, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12148, (void*)this, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12147, (void*)this, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void drawButton(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(500, (void*)this, x)) return;
	this->QButton::drawButton(x1);
    }
    virtual void drawButtonLabel(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(501, (void*)this, x)) return;
	this->QButton::drawButtonLabel(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12149, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(510, (void*)this, x)) return;
	this->QButton::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12135, (void*)this, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12125, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6750, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(508, (void*)this, x)) return;
	this->QButton::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12173, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(509, (void*)this, x)) return;
	this->QButton::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12156, (void*)this, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6939, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(6936, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(12036, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12094, (void*)this, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12151, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual bool hitButton(const QPoint& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(499, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QButton::hitButton(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12143, (void*)this, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12144, (void*)this, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12142, (void*)this, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6772, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(502, (void*)this, x)) return;
	this->QButton::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(503, (void*)this, x)) return;
	this->QButton::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12136, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(453, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QButton::metaObject();
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(12158, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12031, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12128, (void*)this, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(506, (void*)this, x)) return;
	this->QButton::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(504, (void*)this, x)) return;
	this->QButton::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(505, (void*)this, x)) return;
	this->QButton::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(12108, (void*)this, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12138, (void*)this, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(507, (void*)this, x)) return;
	this->QButton::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12155, (void*)this, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12102, (void*)this, x)) return;
	this->QWidget::polish();
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
	if(qt_Smoke->binding->callMethod(455, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QButton::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(457, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QButton::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(456, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QButton::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(458, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QButton::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6773, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = x4;
	if(qt_Smoke->binding->callMethod(12039, (void*)this, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(12110, (void*)this, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12139, (void*)this, x)) return;
	this->QWidget::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6932, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAccel(const QKeySequence& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(470, (void*)this, x)) return;
	this->QButton::setAccel(x1);
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12056, (void*)this, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12007, (void*)this, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12057, (void*)this, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setAutoRepeat(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(480, (void*)this, x)) return;
	this->QButton::setAutoRepeat(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12003, (void*)this, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11965, (void*)this, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(12059, (void*)this, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12005, (void*)this, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12075, (void*)this, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11992, (void*)this, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setDown(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(473, (void*)this, x)) return;
	this->QButton::setDown(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12073, (void*)this, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11969, (void*)this, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11971, (void*)this, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12079, (void*)this, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(12010, (void*)this, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12012, (void*)this, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11986, (void*)this, x)) return;
	this->QWidget::setFont(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12113, (void*)this, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(12112, (void*)this, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12076, (void*)this, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12077, (void*)this, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12177, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11999, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12000, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11942, (void*)this, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	x[5].s_bool = x5;
	x[6].s_class = (void*)x6;
	if(qt_Smoke->binding->callMethod(12178, (void*)this, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11940, (void*)this, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12078, (void*)this, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(11909, (void*)this, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11975, (void*)this, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11980, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11982, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual void setPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(468, (void*)this, x)) return;
	this->QButton::setPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6785, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(6931, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11949, (void*)this, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12033, (void*)this, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setState(QButton::ToggleState x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(498, (void*)this, x)) return;
	this->QButton::setState(x1);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(466, (void*)this, x)) return;
	this->QButton::setText(x1);
    }
    virtual void setToggleType(QButton::ToggleType x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(496, (void*)this, x)) return;
	this->QButton::setToggleType(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12081, (void*)this, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(12171, (void*)this, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = x1;
	if(qt_Smoke->binding->callMethod(12168, (void*)this, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12093, (void*)this, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12150, (void*)this, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12099, (void*)this, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12098, (void*)this, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12101, (void*)this, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12030, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12032, (void*)this, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_class;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(12153, (void*)this, x)) return;
	this->QWidget::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12145, (void*)this, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6814, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11993, (void*)this, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(12152, (void*)this, x)) return;
	this->QWidget::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12130, (void*)this, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12157, (void*)this, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 32: //QButton::ToggleType
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QButton::ToggleType;
		break;
	      case Smoke::EnumDelete:
		delete (QButton::ToggleType*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QButton::ToggleType*)xdata = (QButton::ToggleType)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QButton::ToggleType*)xdata;
		break;
	    }
	    break;
	  case 31: //QButton::ToggleState
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QButton::ToggleState;
		break;
	      case Smoke::EnumDelete:
		delete (QButton::ToggleState*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QButton::ToggleState*)xdata = (QButton::ToggleState)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QButton::ToggleState*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QButton() { qt_Smoke->binding->deleted(17, (void*)this); }
};
void xenum_QButton(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QButton::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QButton(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QButton *xself = (x_QButton*)obj;
    switch(xi) {
	case 0: x_QButton::x_0(args);	break;
	case 1: x_QButton::x_1(args);	break;
	case 2: x_QButton::x_2(args);	break;
	case 3: x_QButton::x_3(args);	break;
	case 4: x_QButton::x_4(args);	break;
	case 5: x_QButton::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: x_QButton::x_13(args);	break;
	case 14: x_QButton::x_14(args);	break;
	case 15: x_QButton::x_15(args);	break;
	case 16: x_QButton::x_16(args);	break;
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
	case 42: x_QButton::x_42(args);	break;
	case 43: x_QButton::x_43(args);	break;
	case 44: x_QButton::x_44(args);	break;
	case 45: x_QButton::x_45(args);	break;
	case 46: x_QButton::x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: delete (QButton*)xself;	break;
    }
}
