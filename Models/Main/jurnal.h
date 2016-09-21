#ifndef JURNAL_H
#define JURNAL_H

#include <QQuickItem>
#include <QQuickView>

class Jurnal : public QQuickItem
{
private:
    QQuickView *_parent;

    Q_OBJECT
public:
    explicit Jurnal(QQuickView *parent);

signals:
    void Tmp1(int value);

public slots:
    void Show();

};

#endif // JURNAL_H
