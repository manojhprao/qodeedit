#ifndef QODEEDITTEXTDOCUMENT_H
#define QODEEDITTEXTDOCUMENT_H

#include <QTextDocument>

class QodeEditTextDocument : public QTextDocument
{
    Q_OBJECT
    
public:
    QodeEditTextDocument( QObject* parent = 0 );
    virtual ~QodeEditTextDocument();

protected slots:
    void contentsChange( int position, int charsRemoved, int charsAdded );
    void modificationChanged( bool changed );
};

#endif // QODEEDITTEXTDOCUMENT_H
