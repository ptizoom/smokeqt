//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcolor.h>
#include <qstring.h>
#include <qfont.h>
#include <qsyntaxhighlighter.h>

class x_QSyntaxHighlighter : public QSyntaxHighlighter {
public:
    static void x_0(Smoke::Stack x) {
	// QSyntaxHighlighter(QTextEdit*)
	x_QSyntaxHighlighter* xret = new x_QSyntaxHighlighter((QTextEdit*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSyntaxHighlighter(QTextEdit* x1) : QSyntaxHighlighter(x1) {
    }
    void x_1(Smoke::Stack x) {
	// setFormat(int, int, const QFont&, const QColor&)
	this->QSyntaxHighlighter::setFormat((int)x[1].s_int,(int)x[2].s_int,*(const QFont *)x[3].s_class,*(const QColor *)x[4].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_2(Smoke::Stack x) {
	// setFormat(int, int, const QColor&)
	this->QSyntaxHighlighter::setFormat((int)x[1].s_int,(int)x[2].s_int,*(const QColor *)x[3].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_3(Smoke::Stack x) {
	// setFormat(int, int, const QFont&)
	this->QSyntaxHighlighter::setFormat((int)x[1].s_int,(int)x[2].s_int,*(const QFont *)x[3].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) const {
	// textEdit()
	QTextEdit* xret = this->QSyntaxHighlighter::textEdit();
	x[0].s_class = (void*)xret;
    }
    void x_5(Smoke::Stack x) {
	// rehighlight()
	this->QSyntaxHighlighter::rehighlight();
	(void)x; // noop (for compiler warning)
    }
    static void x_6(Smoke::Stack x) {
	// QSyntaxHighlighter(const QSyntaxHighlighter&)
	x_QSyntaxHighlighter* xret = new x_QSyntaxHighlighter(*(const QSyntaxHighlighter *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSyntaxHighlighter(const QSyntaxHighlighter& x1) : QSyntaxHighlighter(x1) {
    }
    virtual int highlightParagraph(const QString& x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	qt_Smoke->binding->callMethod(10043, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    ~x_QSyntaxHighlighter() { qt_Smoke->binding->deleted(313, (void*)this); }
};
void xcall_QSyntaxHighlighter(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSyntaxHighlighter *xself = (x_QSyntaxHighlighter*)obj;
    switch(xi) {
	case 0: x_QSyntaxHighlighter::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: x_QSyntaxHighlighter::x_6(args);	break;
	case 7: delete (QSyntaxHighlighter*)xself;	break;
    }
}
