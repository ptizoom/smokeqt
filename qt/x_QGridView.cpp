//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qscrollview.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qgridview.h>
#include <qpalette.h>
#include <qwidget.h>
#include <qnamespace.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>
#include <qscrollbar.h>

class x_QGridView : public QGridView {
public:
    static void x_0(Smoke::Stack x) {
	// QGridView(QWidget*, const char*, Qt::WFlags)
	x_QGridView* xret = new x_QGridView((QWidget*)x[1].s_class,(const char*)x[2].s_class,*(Qt::WFlags *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QGridView(QWidget* x1, const char* x2, Qt::WFlags x3) : QGridView(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QGridView(QWidget*, const char*)
	x_QGridView* xret = new x_QGridView((QWidget*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QGridView(QWidget* x1, const char* x2) : QGridView(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QGridView(QWidget*)
	x_QGridView* xret = new x_QGridView((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QGridView(QWidget* x1) : QGridView(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QGridView()
	x_QGridView* xret = new x_QGridView();
	x[0].s_class = (void*)xret;
    }
    x_QGridView() : QGridView() {
    }
    void x_4(Smoke::Stack x) const {
	// numRows()
	int xret = this->QGridView::numRows();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) {
	// setNumRows(int)
	this->QGridView::setNumRows((int)x[1].s_int);
    }
    void x_6(Smoke::Stack x) const {
	// numCols()
	int xret = this->QGridView::numCols();
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) {
	// setNumCols(int)
	this->QGridView::setNumCols((int)x[1].s_int);
    }
    void x_8(Smoke::Stack x) const {
	// cellWidth()
	int xret = this->QGridView::cellWidth();
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) {
	// setCellWidth(int)
	this->QGridView::setCellWidth((int)x[1].s_int);
    }
    void x_10(Smoke::Stack x) const {
	// cellHeight()
	int xret = this->QGridView::cellHeight();
	x[0].s_int = (int)xret;
    }
    void x_11(Smoke::Stack x) {
	// setCellHeight(int)
	this->QGridView::setCellHeight((int)x[1].s_int);
    }
    void x_12(Smoke::Stack x) const {
	// cellRect()
	QRect xret = this->QGridView::cellRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_13(Smoke::Stack x) {
	// cellGeometry(int, int)
	QRect xret = this->QGridView::cellGeometry((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_14(Smoke::Stack x) const {
	// gridSize()
	QSize xret = this->QGridView::gridSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_15(Smoke::Stack x) const {
	// rowAt(int)
	int xret = this->QGridView::rowAt((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_16(Smoke::Stack x) const {
	// columnAt(int)
	int xret = this->QGridView::columnAt((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) {
	// repaintCell(int, int, bool)
	this->QGridView::repaintCell((int)x[1].s_int,(int)x[2].s_int,(bool)x[3].s_bool);
    }
    void x_18(Smoke::Stack x) {
	// repaintCell(int, int)
	this->QGridView::repaintCell((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_19(Smoke::Stack x) {
	// updateCell(int, int)
	this->QGridView::updateCell((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_20(Smoke::Stack x) {
	// ensureCellVisible(int, int)
	this->QGridView::ensureCellVisible((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_21(Smoke::Stack x) {
	// paintEmptyArea(QPainter*, int, int, int, int)
	this->QGridView::paintEmptyArea((QPainter*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
    }
    void x_22(Smoke::Stack x) {
	// drawContents(QPainter*, int, int, int, int)
	this->QGridView::drawContents((QPainter*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
    }
    void x_23(Smoke::Stack x) {
	// dimensionChange(int, int)
	this->QGridView::dimensionChange((int)x[1].s_int,(int)x[2].s_int);
    }
    virtual void addChild(QWidget* x1, int x2, int x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	if(qt_Smoke->callMethod(6632, (void*)this, x)) return;
	this->QScrollView::addChild(x1, x2, x3);
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9696, (void*)this, x)) return;
	this->QWidget::adjustSize();
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
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9683, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9791, (void*)this, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5573, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5475, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contentsContextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6703, (void*)this, x)) return;
	this->QScrollView::contentsContextMenuEvent(x1);
    }
    virtual void contentsDragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6698, (void*)this, x)) return;
	this->QScrollView::contentsDragEnterEvent(x1);
    }
    virtual void contentsDragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6700, (void*)this, x)) return;
	this->QScrollView::contentsDragLeaveEvent(x1);
    }
    virtual void contentsDragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6699, (void*)this, x)) return;
	this->QScrollView::contentsDragMoveEvent(x1);
    }
    virtual void contentsDropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6701, (void*)this, x)) return;
	this->QScrollView::contentsDropEvent(x1);
    }
    virtual void contentsMouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6696, (void*)this, x)) return;
	this->QScrollView::contentsMouseDoubleClickEvent(x1);
    }
    virtual void contentsMouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6697, (void*)this, x)) return;
	this->QScrollView::contentsMouseMoveEvent(x1);
    }
    virtual void contentsMousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6694, (void*)this, x)) return;
	this->QScrollView::contentsMousePressEvent(x1);
    }
    virtual void contentsMouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6695, (void*)this, x)) return;
	this->QScrollView::contentsMouseReleaseEvent(x1);
    }
    virtual void contentsWheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6702, (void*)this, x)) return;
	this->QScrollView::contentsWheelEvent(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6731, (void*)this, x)) return;
	this->QScrollView::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	x[3].s_bool = (bool)x3;
	if(qt_Smoke->callMethod(9811, (void*)this, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5474, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9721, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(9815, (void*)this, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void dimensionChange(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(3187, (void*)this, x)) return;
	this->QGridView::dimensionChange(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5476, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9797, (void*)this, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9799, (void*)this, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9798, (void*)this, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void drawContents(QPainter* x1, int x2, int x3, int x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_int = (int)x5;
	if(qt_Smoke->callMethod(3186, (void*)this, x)) return;
	this->QGridView::drawContents(x1, x2, x3, x4, x5);
    }
    virtual void drawContentsOffset(QPainter* x1, int x2, int x3, int x4, int x5, int x6, int x7) {
	Smoke::StackItem x[8];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_int = (int)x5;
	x[6].s_int = (int)x6;
	x[7].s_int = (int)x7;
	if(qt_Smoke->callMethod(6693, (void*)this, x)) return;
	this->QScrollView::drawContentsOffset(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual void drawFrame(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(2949, (void*)this, x)) return;
	this->QFrame::drawFrame(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9800, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9805, (void*)this, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9786, (void*)this, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9776, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(6732, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QScrollView::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9784, (void*)this, x)) return;
	this->QWidget::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(6722, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QScrollView::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9785, (void*)this, x)) return;
	this->QWidget::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9807, (void*)this, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(5578, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_class = (void*)x3;
	x[4].s_int = (int)x4;
	if(qt_Smoke->callMethod(5575, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual void frameChanged() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(6716, (void*)this, x)) return;
	this->QScrollView::frameChanged();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(9695, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9753, (void*)this, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9802, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9794, (void*)this, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9795, (void*)this, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9793, (void*)this, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5435, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9782, (void*)this, x)) return;
	this->QWidget::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9783, (void*)this, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9787, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(9809, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(6678, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QScrollView::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6728, (void*)this, x)) return;
	this->QScrollView::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6729, (void*)this, x)) return;
	this->QScrollView::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6726, (void*)this, x)) return;
	this->QScrollView::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6727, (void*)this, x)) return;
	this->QScrollView::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9765, (void*)this, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveChild(QWidget* x1, int x2, int x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	if(qt_Smoke->callMethod(6635, (void*)this, x)) return;
	this->QScrollView::moveChild(x1, x2, x3);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9789, (void*)this, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintCell(QPainter* x1, int x2, int x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	qt_Smoke->callMethod(3184, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void paintEmptyArea(QPainter* x1, int x2, int x3, int x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_int = (int)x5;
	if(qt_Smoke->callMethod(3185, (void*)this, x)) return;
	this->QGridView::paintEmptyArea(x1, x2, x3, x4, x5);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(2947, (void*)this, x)) return;
	this->QFrame::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9806, (void*)this, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9759, (void*)this, x)) return;
	this->QWidget::polish();
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
	if(qt_Smoke->callMethod(6679, (void*)this, x)) return;
	this->QScrollView::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = (bool)x4;
	if(qt_Smoke->callMethod(9699, (void*)this, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(6657, (void*)this, x)) return;
	this->QScrollView::resize(x1, x2);
    }
    virtual void resizeContents(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(6682, (void*)this, x)) return;
	this->QScrollView::resizeContents(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6725, (void*)this, x)) return;
	this->QScrollView::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5571, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9716, (void*)this, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9670, (void*)this, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9717, (void*)this, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9666, (void*)this, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9628, (void*)this, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9719, (void*)this, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9668, (void*)this, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9734, (void*)this, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCellHeight(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(3174, (void*)this, x)) return;
	this->QGridView::setCellHeight(x1);
    }
    virtual void setCellWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(3172, (void*)this, x)) return;
	this->QGridView::setCellWidth(x1);
    }
    virtual void setContentsPos(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(6684, (void*)this, x)) return;
	this->QScrollView::setContentsPos(x1, x2);
    }
    virtual void setCornerWidget(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6646, (void*)this, x)) return;
	this->QScrollView::setCornerWidget(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9655, (void*)this, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setDragAutoScroll(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(6680, (void*)this, x)) return;
	this->QScrollView::setDragAutoScroll(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(6690, (void*)this, x)) return;
	this->QScrollView::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9632, (void*)this, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9634, (void*)this, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9738, (void*)this, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9673, (void*)this, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9675, (void*)this, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9649, (void*)this, x)) return;
	this->QWidget::setFont(x1);
    }
    virtual void setFrameRect(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(2946, (void*)this, x)) return;
	this->QFrame::setFrameRect(x1);
    }
    virtual void setFrameStyle(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(2930, (void*)this, x)) return;
	this->QFrame::setFrameStyle(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9770, (void*)this, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	if(qt_Smoke->callMethod(9769, (void*)this, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setHBarGeometry(QScrollBar& x1, int x2, int x3, int x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)&x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_int = (int)x5;
	if(qt_Smoke->callMethod(6723, (void*)this, x)) return;
	this->QScrollView::setHBarGeometry(x1, x2, x3, x4, x5);
    }
    virtual void setHScrollBarMode(QScrollView::ScrollBarMode x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(6644, (void*)this, x)) return;
	this->QScrollView::setHScrollBarMode(x1);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9735, (void*)this, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9736, (void*)this, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9828, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(2940, (void*)this, x)) return;
	this->QFrame::setLineWidth(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(2942, (void*)this, x)) return;
	this->QFrame::setMargin(x1);
    }
    virtual void setMargins(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	if(qt_Smoke->callMethod(6717, (void*)this, x)) return;
	this->QScrollView::setMargins(x1, x2, x3, x4);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9662, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9663, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9605, (void*)this, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_bool = (bool)x5;
	x[6].s_class = (void*)x6;
	if(qt_Smoke->callMethod(9829, (void*)this, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMidLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(2944, (void*)this, x)) return;
	this->QFrame::setMidLineWidth(x1);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9603, (void*)this, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9737, (void*)this, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9572, (void*)this, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setNumCols(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(3170, (void*)this, x)) return;
	this->QGridView::setNumCols(x1);
    }
    virtual void setNumRows(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(3168, (void*)this, x)) return;
	this->QGridView::setNumRows(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9638, (void*)this, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9643, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9645, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(5448, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResizePolicy(QScrollView::ResizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(6628, (void*)this, x)) return;
	this->QScrollView::setResizePolicy(x1);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(5570, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(9612, (void*)this, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9694, (void*)this, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9740, (void*)this, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setVBarGeometry(QScrollBar& x1, int x2, int x3, int x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)&x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_int = (int)x5;
	if(qt_Smoke->callMethod(6724, (void*)this, x)) return;
	this->QScrollView::setVBarGeometry(x1, x2, x3, x4, x5);
    }
    virtual void setVScrollBarMode(QScrollView::ScrollBarMode x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(6642, (void*)this, x)) return;
	this->QScrollView::setVScrollBarMode(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9822, (void*)this, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = (uint)x1;
	if(qt_Smoke->callMethod(9819, (void*)this, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(6659, (void*)this, x)) return;
	this->QScrollView::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9801, (void*)this, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9756, (void*)this, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9755, (void*)this, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9758, (void*)this, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(6677, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QScrollView::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9693, (void*)this, x)) {
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
	if(qt_Smoke->callMethod(6630, (void*)this, x)) return;
	this->QScrollView::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9796, (void*)this, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5472, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9656, (void*)this, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9803, (void*)this, x)) return;
	this->QWidget::updateMask();
    }
    virtual void viewportContextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6715, (void*)this, x)) return;
	this->QScrollView::viewportContextMenuEvent(x1);
    }
    virtual void viewportDragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6710, (void*)this, x)) return;
	this->QScrollView::viewportDragEnterEvent(x1);
    }
    virtual void viewportDragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6712, (void*)this, x)) return;
	this->QScrollView::viewportDragLeaveEvent(x1);
    }
    virtual void viewportDragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6711, (void*)this, x)) return;
	this->QScrollView::viewportDragMoveEvent(x1);
    }
    virtual void viewportDropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6713, (void*)this, x)) return;
	this->QScrollView::viewportDropEvent(x1);
    }
    virtual void viewportMouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6708, (void*)this, x)) return;
	this->QScrollView::viewportMouseDoubleClickEvent(x1);
    }
    virtual void viewportMouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6709, (void*)this, x)) return;
	this->QScrollView::viewportMouseMoveEvent(x1);
    }
    virtual void viewportMousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6706, (void*)this, x)) return;
	this->QScrollView::viewportMousePressEvent(x1);
    }
    virtual void viewportMouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6707, (void*)this, x)) return;
	this->QScrollView::viewportMouseReleaseEvent(x1);
    }
    virtual void viewportPaintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6704, (void*)this, x)) return;
	this->QScrollView::viewportPaintEvent(x1);
    }
    virtual void viewportResizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6705, (void*)this, x)) return;
	this->QScrollView::viewportResizeEvent(x1);
    }
    virtual void viewportWheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6714, (void*)this, x)) return;
	this->QScrollView::viewportWheelEvent(x1);
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(6730, (void*)this, x)) return;
	this->QScrollView::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(9808, (void*)this, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QGridView() {}
};
void xcall_QGridView(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QGridView *xself = (x_QGridView*)obj;
    switch(xi) {
	case 0: x_QGridView::x_0(args);	break;
	case 1: x_QGridView::x_1(args);	break;
	case 2: x_QGridView::x_2(args);	break;
	case 3: x_QGridView::x_3(args);	break;
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
	case 24: delete (QGridView*)xself;	break;
    }
}
