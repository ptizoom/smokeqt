//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qdialog.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qwidget.h>
#include <qnamespace.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QDialog : public QDialog {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QDialog::Rejected;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QDialog::Accepted;
    }
    void x_2(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QDialog::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// className()
	const char* xret = this->QDialog::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QDialog::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QDialog::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QDialog::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QDialog::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QDialog::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_9(Smoke::Stack x) {
	// QDialog(QWidget*, const char*, bool, Qt::WFlags)
	x_QDialog* xret = new x_QDialog((QWidget*)x[1].s_class,(const char*)x[2].s_voidp,(bool)x[3].s_bool,(Qt::WFlags)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QDialog(QWidget* x1, const char* x2, bool x3, Qt::WFlags x4) : QDialog(x1, x2, x3, x4) {
    }
    static void x_10(Smoke::Stack x) {
	// QDialog(QWidget*, const char*, bool)
	x_QDialog* xret = new x_QDialog((QWidget*)x[1].s_class,(const char*)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QDialog(QWidget* x1, const char* x2, bool x3) : QDialog(x1, x2, x3) {
    }
    static void x_11(Smoke::Stack x) {
	// QDialog(QWidget*, const char*)
	x_QDialog* xret = new x_QDialog((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QDialog(QWidget* x1, const char* x2) : QDialog(x1, x2) {
    }
    static void x_12(Smoke::Stack x) {
	// QDialog(QWidget*)
	x_QDialog* xret = new x_QDialog((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDialog(QWidget* x1) : QDialog(x1) {
    }
    static void x_13(Smoke::Stack x) {
	// QDialog()
	x_QDialog* xret = new x_QDialog();
	x[0].s_class = (void*)xret;
    }
    x_QDialog() : QDialog() {
    }
    void x_14(Smoke::Stack x) const {
	// result()
	int xret = this->QDialog::result();
	x[0].s_int = xret;
    }
    void x_15(Smoke::Stack x) {
	// show()
	this->QDialog::show();
	(void)x; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) {
	// hide()
	this->QDialog::hide();
	(void)x; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) {
	// move(int, int)
	this->QDialog::move((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) {
	// move(const QPoint&)
	this->QDialog::move(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) {
	// resize(int, int)
	this->QDialog::resize((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) {
	// resize(const QSize&)
	this->QDialog::resize(*(const QSize *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) {
	// setGeometry(int, int, int, int)
	this->QDialog::setGeometry((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) {
	// setGeometry(const QRect&)
	this->QDialog::setGeometry(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) {
	// setOrientation(Qt::Orientation)
	this->QDialog::setOrientation((Qt::Orientation)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// orientation()
	Qt::Orientation xret = this->QDialog::orientation();
	x[0].s_enum = xret;
    }
    void x_25(Smoke::Stack x) {
	// setExtension(QWidget*)
	this->QDialog::setExtension((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// extension()
	QWidget* xret = this->QDialog::extension();
	x[0].s_class = (void*)xret;
    }
    void x_27(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QDialog::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_28(Smoke::Stack x) const {
	// minimumSizeHint()
	QSize xret = this->QDialog::minimumSizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_29(Smoke::Stack x) {
	// setSizeGripEnabled(bool)
	this->QDialog::setSizeGripEnabled((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) const {
	// isSizeGripEnabled()
	bool xret = this->QDialog::isSizeGripEnabled();
	x[0].s_bool = xret;
    }
    void x_31(Smoke::Stack x) {
	// exec()
	int xret = this->QDialog::exec();
	x[0].s_int = xret;
    }
    static void x_32(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QDialog::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_33(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QDialog::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_34(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QDialog::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_35(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QDialog::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_36(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QDialog::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_37(Smoke::Stack x) {
	// setResult(int)
	this->QDialog::setResult((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) {
	// keyPressEvent(QKeyEvent*)
	this->QDialog::keyPressEvent((QKeyEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_39(Smoke::Stack x) {
	// closeEvent(QCloseEvent*)
	this->QDialog::closeEvent((QCloseEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// resizeEvent(QResizeEvent*)
	this->QDialog::resizeEvent((QResizeEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) {
	// contextMenuEvent(QContextMenuEvent*)
	this->QDialog::contextMenuEvent((QContextMenuEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_42(Smoke::Stack x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QDialog::eventFilter((QObject*)x[1].s_class,(QEvent*)x[2].s_class);
	x[0].s_bool = xret;
    }
    void x_43(Smoke::Stack x) {
	// adjustPosition(QWidget*)
	this->QDialog::adjustPosition((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_44(Smoke::Stack x) {
	// done(int)
	this->QDialog::done((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_45(Smoke::Stack x) {
	// accept()
	this->QDialog::accept();
	(void)x; // noop (for compiler warning)
    }
    void x_46(Smoke::Stack x) {
	// reject()
	this->QDialog::reject();
	(void)x; // noop (for compiler warning)
    }
    void x_47(Smoke::Stack x) {
	// showExtension(bool)
	this->QDialog::showExtension((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    virtual void accept() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2180, (void*)this, x)) return;
	this->QDialog::accept();
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
	if(qt_Smoke->binding->callMethod(2137, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QDialog::className();
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
	if(qt_Smoke->binding->callMethod(2174, (void*)this, x)) return;
	this->QDialog::closeEvent(x1);
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
	if(qt_Smoke->binding->callMethod(2176, (void*)this, x)) return;
	this->QDialog::contextMenuEvent(x1);
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
    virtual void done(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(2179, (void*)this, x)) return;
	this->QDialog::done(x1);
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
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12149, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(12154, (void*)this, x)) return;
	this->QWidget::enabledChange(x1);
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
	if(qt_Smoke->binding->callMethod(2177, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDialog::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12133, (void*)this, x)) return;
	this->QWidget::focusInEvent(x1);
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
	if(qt_Smoke->binding->callMethod(12134, (void*)this, x)) return;
	this->QWidget::focusOutEvent(x1);
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
	if(qt_Smoke->binding->callMethod(2151, (void*)this, x)) return;
	this->QDialog::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12151, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
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
	if(qt_Smoke->binding->callMethod(2173, (void*)this, x)) return;
	this->QDialog::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12132, (void*)this, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12136, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2136, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QDialog::metaObject();
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(12158, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2163, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDialog::minimumSizeHint();
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
	if(qt_Smoke->binding->callMethod(12129, (void*)this, x)) return;
	this->QWidget::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12126, (void*)this, x)) return;
	this->QWidget::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(12127, (void*)this, x)) return;
	this->QWidget::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(2152, (void*)this, x)) return;
	this->QDialog::move(x1, x2);
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
	if(qt_Smoke->binding->callMethod(12137, (void*)this, x)) return;
	this->QWidget::paintEvent(x1);
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
	if(qt_Smoke->binding->callMethod(2138, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QDialog::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(2140, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDialog::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(2139, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDialog::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(2141, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDialog::qt_property(x1, x2, x3);
    }
    virtual void reject() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2181, (void*)this, x)) return;
	this->QDialog::reject();
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
	if(qt_Smoke->binding->callMethod(2154, (void*)this, x)) return;
	this->QDialog::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(2175, (void*)this, x)) return;
	this->QDialog::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6932, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
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
	if(qt_Smoke->binding->callMethod(2157, (void*)this, x)) return;
	this->QDialog::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(2156, (void*)this, x)) return;
	this->QDialog::setGeometry(x1, x2, x3, x4);
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
	if(qt_Smoke->binding->callMethod(2150, (void*)this, x)) return;
	this->QDialog::show();
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
	if(qt_Smoke->binding->callMethod(2162, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDialog::sizeHint();
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
	  case 125: //QDialog::DialogCode
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QDialog::DialogCode;
		break;
	      case Smoke::EnumDelete:
		delete (QDialog::DialogCode*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QDialog::DialogCode*)xdata = (QDialog::DialogCode)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QDialog::DialogCode*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QDialog() { qt_Smoke->binding->deleted(71, (void*)this); }
};
void xenum_QDialog(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QDialog::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QDialog(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDialog *xself = (x_QDialog*)obj;
    switch(xi) {
	case 0: x_QDialog::x_0(args);	break;
	case 1: x_QDialog::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: x_QDialog::x_9(args);	break;
	case 10: x_QDialog::x_10(args);	break;
	case 11: x_QDialog::x_11(args);	break;
	case 12: x_QDialog::x_12(args);	break;
	case 13: x_QDialog::x_13(args);	break;
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
	case 32: x_QDialog::x_32(args);	break;
	case 33: x_QDialog::x_33(args);	break;
	case 34: x_QDialog::x_34(args);	break;
	case 35: x_QDialog::x_35(args);	break;
	case 36: x_QDialog::x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: delete (QDialog*)xself;	break;
    }
}
