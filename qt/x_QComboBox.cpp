//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qcombobox.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qstringlist.h>
#include <qpoint.h>
#include <qfont.h>
#include <qstrlist.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qnamespace.h>
#include <qwidget.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QComboBox : public QComboBox {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QComboBox::NoInsertion;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QComboBox::AtTop;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QComboBox::AtCurrent;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_long = (long)QComboBox::AtBottom;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_long = (long)QComboBox::AfterCurrent;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_long = (long)QComboBox::BeforeCurrent;
    }
    static void x_6(Smoke::Stack x) {
	// QComboBox(QWidget*, const char*)
	x_QComboBox* xret = new x_QComboBox((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QComboBox(QWidget* x1, const char* x2) : QComboBox(x1, x2) {
    }
    static void x_7(Smoke::Stack x) {
	// QComboBox(QWidget*)
	x_QComboBox* xret = new x_QComboBox((QWidget*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QComboBox(QWidget* x1) : QComboBox(x1) {
    }
    static void x_8(Smoke::Stack x) {
	// QComboBox()
	x_QComboBox* xret = new x_QComboBox();
	x[0].s_voidp = (void*)xret;
    }
    x_QComboBox() : QComboBox() {
    }
    static void x_9(Smoke::Stack x) {
	// QComboBox(bool, QWidget*, const char*)
	x_QComboBox* xret = new x_QComboBox((bool)x[1].s_bool,(QWidget*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QComboBox(bool x1, QWidget* x2, const char* x3) : QComboBox(x1, x2, x3) {
    }
    static void x_10(Smoke::Stack x) {
	// QComboBox(bool, QWidget*)
	x_QComboBox* xret = new x_QComboBox((bool)x[1].s_bool,(QWidget*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QComboBox(bool x1, QWidget* x2) : QComboBox(x1, x2) {
    }
    static void x_11(Smoke::Stack x) {
	// QComboBox(bool)
	x_QComboBox* xret = new x_QComboBox((bool)x[1].s_bool);
	x[0].s_voidp = (void*)xret;
    }
    x_QComboBox(bool x1) : QComboBox(x1) {
    }
    void x_12(Smoke::Stack x) const {
	// count()
	int xret = this->QComboBox::count();
	x[0].s_int = (int)xret;
    }
    void x_13(Smoke::Stack x) {
	// insertStringList(const QStringList&, int)
	this->QComboBox::insertStringList(*(const QStringList *)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_14(Smoke::Stack x) {
	// insertStringList(const QStringList&)
	this->QComboBox::insertStringList(*(const QStringList *)x[1].s_voidp);
    }
    void x_15(Smoke::Stack x) {
	// insertStrList(const QStrList&, int)
	this->QComboBox::insertStrList(*(const QStrList *)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_16(Smoke::Stack x) {
	// insertStrList(const QStrList&)
	this->QComboBox::insertStrList(*(const QStrList *)x[1].s_voidp);
    }
    void x_17(Smoke::Stack x) {
	// insertStrList(const QStrList*, int)
	this->QComboBox::insertStrList((const QStrList*)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_18(Smoke::Stack x) {
	// insertStrList(const QStrList*)
	this->QComboBox::insertStrList((const QStrList*)x[1].s_voidp);
    }
    void x_19(Smoke::Stack x) {
	// insertStrList(const char**, int, int)
	this->QComboBox::insertStrList((const char**)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int);
    }
    void x_20(Smoke::Stack x) {
	// insertStrList(const char**, int)
	this->QComboBox::insertStrList((const char**)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_21(Smoke::Stack x) {
	// insertStrList(const char**)
	this->QComboBox::insertStrList((const char**)x[1].s_voidp);
    }
    void x_22(Smoke::Stack x) {
	// insertItem(const QString&, int)
	this->QComboBox::insertItem(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_23(Smoke::Stack x) {
	// insertItem(const QString&)
	this->QComboBox::insertItem(*(const QString *)x[1].s_voidp);
    }
    void x_24(Smoke::Stack x) {
	// insertItem(const QPixmap&, int)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_25(Smoke::Stack x) {
	// insertItem(const QPixmap&)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].s_voidp);
    }
    void x_26(Smoke::Stack x) {
	// insertItem(const QPixmap&, const QString&, int)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int);
    }
    void x_27(Smoke::Stack x) {
	// insertItem(const QPixmap&, const QString&)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
    }
    void x_28(Smoke::Stack x) {
	// removeItem(int)
	this->QComboBox::removeItem((int)x[1].s_int);
    }
    void x_29(Smoke::Stack x) const {
	// currentItem()
	int xret = this->QComboBox::currentItem();
	x[0].s_int = (int)xret;
    }
    void x_30(Smoke::Stack x) {
	// setCurrentItem(int)
	this->QComboBox::setCurrentItem((int)x[1].s_int);
    }
    void x_31(Smoke::Stack x) const {
	// currentText()
	QString xret = this->QComboBox::currentText();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_32(Smoke::Stack x) {
	// setCurrentText(const QString&)
	this->QComboBox::setCurrentText(*(const QString *)x[1].s_voidp);
    }
    void x_33(Smoke::Stack x) const {
	// text(int)
	QString xret = this->QComboBox::text((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_34(Smoke::Stack x) const {
	// pixmap(int)
	const QPixmap* xret = this->QComboBox::pixmap((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_35(Smoke::Stack x) {
	// changeItem(const QString&, int)
	this->QComboBox::changeItem(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_36(Smoke::Stack x) {
	// changeItem(const QPixmap&, int)
	this->QComboBox::changeItem(*(const QPixmap *)x[1].s_voidp,(int)x[2].s_int);
    }
    void x_37(Smoke::Stack x) {
	// changeItem(const QPixmap&, const QString&, int)
	this->QComboBox::changeItem(*(const QPixmap *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int);
    }
    void x_38(Smoke::Stack x) const {
	// autoResize()
	bool xret = this->QComboBox::autoResize();
	x[0].s_bool = (bool)xret;
    }
    void x_39(Smoke::Stack x) {
	// setAutoResize(bool)
	this->QComboBox::setAutoResize((bool)x[1].s_bool);
    }
    void x_40(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QComboBox::sizeHint();
	x[0].s_voidp = (void*)new QSize(xret);
    }
    void x_41(Smoke::Stack x) {
	// setPalette(const QPalette&)
	this->QComboBox::setPalette(*(const QPalette *)x[1].s_voidp);
    }
    void x_42(Smoke::Stack x) {
	// setFont(const QFont&)
	this->QComboBox::setFont(*(const QFont *)x[1].s_voidp);
    }
    void x_43(Smoke::Stack x) {
	// setEnabled(bool)
	this->QComboBox::setEnabled((bool)x[1].s_bool);
    }
    void x_44(Smoke::Stack x) {
	// setSizeLimit(int)
	this->QComboBox::setSizeLimit((int)x[1].s_int);
    }
    void x_45(Smoke::Stack x) const {
	// sizeLimit()
	int xret = this->QComboBox::sizeLimit();
	x[0].s_int = (int)xret;
    }
    void x_46(Smoke::Stack x) {
	// setMaxCount(int)
	this->QComboBox::setMaxCount((int)x[1].s_int);
    }
    void x_47(Smoke::Stack x) const {
	// maxCount()
	int xret = this->QComboBox::maxCount();
	x[0].s_int = (int)xret;
    }
    void x_48(Smoke::Stack x) {
	// setInsertionPolicy(QComboBox::Policy)
	this->QComboBox::setInsertionPolicy(*(QComboBox::Policy *)x[1].s_voidp);
    }
    void x_49(Smoke::Stack x) const {
	// insertionPolicy()
	QComboBox::Policy xret = this->QComboBox::insertionPolicy();
	x[0].s_voidp = (void*)new QComboBox::Policy(xret);
    }
    void x_50(Smoke::Stack x) {
	// setValidator(const QValidator*)
	this->QComboBox::setValidator((const QValidator*)x[1].s_voidp);
    }
    void x_51(Smoke::Stack x) const {
	// validator()
	const QValidator* xret = this->QComboBox::validator();
	x[0].s_voidp = (void*)xret;
    }
    void x_52(Smoke::Stack x) {
	// setListBox(QListBox*)
	this->QComboBox::setListBox((QListBox*)x[1].s_voidp);
    }
    void x_53(Smoke::Stack x) const {
	// listBox()
	QListBox* xret = this->QComboBox::listBox();
	x[0].s_voidp = (void*)xret;
    }
    void x_54(Smoke::Stack x) {
	// setLineEdit(QLineEdit*)
	this->QComboBox::setLineEdit((QLineEdit*)x[1].s_voidp);
    }
    void x_55(Smoke::Stack x) const {
	// lineEdit()
	QLineEdit* xret = this->QComboBox::lineEdit();
	x[0].s_voidp = (void*)xret;
    }
    void x_56(Smoke::Stack x) {
	// setAutoCompletion(bool)
	this->QComboBox::setAutoCompletion((bool)x[1].s_bool);
    }
    void x_57(Smoke::Stack x) const {
	// autoCompletion()
	bool xret = this->QComboBox::autoCompletion();
	x[0].s_bool = (bool)xret;
    }
    void x_58(Smoke::Stack x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QComboBox::eventFilter((QObject*)x[1].s_voidp,(QEvent*)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_59(Smoke::Stack x) {
	// setDuplicatesEnabled(bool)
	this->QComboBox::setDuplicatesEnabled((bool)x[1].s_bool);
    }
    void x_60(Smoke::Stack x) const {
	// duplicatesEnabled()
	bool xret = this->QComboBox::duplicatesEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_61(Smoke::Stack x) const {
	// editable()
	bool xret = this->QComboBox::editable();
	x[0].s_bool = (bool)xret;
    }
    void x_62(Smoke::Stack x) {
	// setEditable(bool)
	this->QComboBox::setEditable((bool)x[1].s_bool);
    }
    void x_63(Smoke::Stack x) {
	// popup()
	this->QComboBox::popup();
    }
    void x_64(Smoke::Stack x) {
	// clear()
	this->QComboBox::clear();
    }
    void x_65(Smoke::Stack x) {
	// clearValidator()
	this->QComboBox::clearValidator();
    }
    void x_66(Smoke::Stack x) {
	// clearEdit()
	this->QComboBox::clearEdit();
    }
    void x_67(Smoke::Stack x) {
	// setEditText(const QString&)
	this->QComboBox::setEditText(*(const QString *)x[1].s_voidp);
    }
    void x_68(Smoke::Stack x) {
	// activated(int)
	this->QComboBox::activated((int)x[1].s_int);
    }
    void x_69(Smoke::Stack x) {
	// highlighted(int)
	this->QComboBox::highlighted((int)x[1].s_int);
    }
    void x_70(Smoke::Stack x) {
	// activated(const QString&)
	this->QComboBox::activated(*(const QString *)x[1].s_voidp);
    }
    void x_71(Smoke::Stack x) {
	// highlighted(const QString&)
	this->QComboBox::highlighted(*(const QString *)x[1].s_voidp);
    }
    void x_72(Smoke::Stack x) {
	// textChanged(const QString&)
	this->QComboBox::textChanged(*(const QString *)x[1].s_voidp);
    }
    void x_73(Smoke::Stack x) {
	// paintEvent(QPaintEvent*)
	this->QComboBox::paintEvent((QPaintEvent*)x[1].s_voidp);
    }
    void x_74(Smoke::Stack x) {
	// resizeEvent(QResizeEvent*)
	this->QComboBox::resizeEvent((QResizeEvent*)x[1].s_voidp);
    }
    void x_75(Smoke::Stack x) {
	// mousePressEvent(QMouseEvent*)
	this->QComboBox::mousePressEvent((QMouseEvent*)x[1].s_voidp);
    }
    void x_76(Smoke::Stack x) {
	// mouseMoveEvent(QMouseEvent*)
	this->QComboBox::mouseMoveEvent((QMouseEvent*)x[1].s_voidp);
    }
    void x_77(Smoke::Stack x) {
	// mouseReleaseEvent(QMouseEvent*)
	this->QComboBox::mouseReleaseEvent((QMouseEvent*)x[1].s_voidp);
    }
    void x_78(Smoke::Stack x) {
	// mouseDoubleClickEvent(QMouseEvent*)
	this->QComboBox::mouseDoubleClickEvent((QMouseEvent*)x[1].s_voidp);
    }
    void x_79(Smoke::Stack x) {
	// keyPressEvent(QKeyEvent*)
	this->QComboBox::keyPressEvent((QKeyEvent*)x[1].s_voidp);
    }
    void x_80(Smoke::Stack x) {
	// focusInEvent(QFocusEvent*)
	this->QComboBox::focusInEvent((QFocusEvent*)x[1].s_voidp);
    }
    void x_81(Smoke::Stack x) {
	// styleChange(QStyle&)
	this->QComboBox::styleChange(*(QStyle *)x[1].s_voidp);
    }
    void x_82(Smoke::Stack x) {
	// updateMask()
	this->QComboBox::updateMask();
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9609, x)) return;
	this->QWidget::adjustSize();
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
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9596, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9704, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 5552, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5467, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9705, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_bool = (bool)x2;
	x[3].s_bool = (bool)x3;
	if(call_method((void*)this, 9724, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5466, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9634, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 9728, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5468, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9710, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9712, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9711, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9713, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9718, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9699, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9689, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 1113, x)) return (bool)x[0].s_bool;
	return this->QComboBox::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1135, x)) return;
	this->QComboBox::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9737, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9698, x)) return;
	this->QWidget::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9720, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 5557, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = (int)x4;
	if(call_method((void*)this, 5554, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 9608, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9666, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9715, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9707, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9708, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9706, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1134, x)) return;
	this->QComboBox::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9696, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9700, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 9722, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9605, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1133, x)) return;
	this->QComboBox::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1131, x)) return;
	this->QComboBox::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1130, x)) return;
	this->QComboBox::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1132, x)) return;
	this->QComboBox::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9678, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9702, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1128, x)) return;
	this->QComboBox::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9719, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9672, x)) return;
	this->QWidget::polish();
    }
    virtual void popup() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1118, x)) return;
	this->QComboBox::popup();
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
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_bool = (bool)x4;
	if(call_method((void*)this, 9612, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9680, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1129, x)) return;
	this->QComboBox::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5550, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9629, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9583, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoCompletion(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1111, x)) return;
	this->QComboBox::setAutoCompletion(x1);
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9630, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setAutoResize(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1094, x)) return;
	this->QComboBox::setAutoResize(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9579, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9541, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9632, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9581, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9647, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCurrentItem(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 1085, x)) return;
	this->QComboBox::setCurrentItem(x1);
    }
    virtual void setCurrentText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1087, x)) return;
	this->QComboBox::setCurrentText(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9568, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEditText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1122, x)) return;
	this->QComboBox::setEditText(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1098, x)) return;
	this->QComboBox::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9545, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9547, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9651, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9586, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9588, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1097, x)) return;
	this->QComboBox::setFont(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9683, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	if(call_method((void*)this, 9682, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9648, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9649, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setInsertionPolicy(QComboBox::Policy x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1103, x)) return;
	this->QComboBox::setInsertionPolicy(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9741, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setLineEdit(QLineEdit* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1109, x)) return;
	this->QComboBox::setLineEdit(x1);
    }
    virtual void setListBox(QListBox* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1107, x)) return;
	this->QComboBox::setListBox(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9575, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9576, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaxCount(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 1101, x)) return;
	this->QComboBox::setMaxCount(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9518, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_bool = (bool)x5;
	x[6].s_voidp = (void*)x6;
	if(call_method((void*)this, 9742, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9516, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9650, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9485, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1096, x)) return;
	this->QComboBox::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9556, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9558, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 5440, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 5549, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9525, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizeLimit(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 1099, x)) return;
	this->QComboBox::setSizeLimit(x1);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9607, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9653, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setValidator(const QValidator* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1105, x)) return;
	this->QComboBox::setValidator(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9735, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = (uint)x1;
	if(call_method((void*)this, 9732, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9665, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9714, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9669, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9668, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9671, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1095, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QComboBox::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9606, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_voidp;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1136, x)) return;
	this->QComboBox::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9709, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9569, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1137, x)) return;
	this->QComboBox::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9694, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9721, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QComboBox() {}
};
void xcall_QComboBox(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QComboBox *xself = (x_QComboBox*)obj;
    switch(xi) {
	case 0: x_QComboBox::x_0(args);	break;
	case 1: x_QComboBox::x_1(args);	break;
	case 2: x_QComboBox::x_2(args);	break;
	case 3: x_QComboBox::x_3(args);	break;
	case 4: x_QComboBox::x_4(args);	break;
	case 5: x_QComboBox::x_5(args);	break;
	case 6: x_QComboBox::x_6(args);	break;
	case 7: x_QComboBox::x_7(args);	break;
	case 8: x_QComboBox::x_8(args);	break;
	case 9: x_QComboBox::x_9(args);	break;
	case 10: x_QComboBox::x_10(args);	break;
	case 11: x_QComboBox::x_11(args);	break;
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
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
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
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: xself->x_67(args);	break;
	case 68: xself->x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: xself->x_76(args);	break;
	case 77: xself->x_77(args);	break;
	case 78: xself->x_78(args);	break;
	case 79: xself->x_79(args);	break;
	case 80: xself->x_80(args);	break;
	case 81: xself->x_81(args);	break;
	case 82: xself->x_82(args);	break;
	case 83: delete (QComboBox*)xself;	break;
    }
}
