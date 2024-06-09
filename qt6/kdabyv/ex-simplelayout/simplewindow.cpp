/********* ***********************
 *  KDAB
 * https://www.youtube.com/watch?v=EqHtuVnoITw&list=PL6CJYn40gN6hgf7zCKF2Rv9Y0WoN8RVGf&index=5
 * https://github.com/KDABLabs/kdabtv/tree/master/Programming-With-Qt-Widgets/objects/ex-simplelayout
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

#include "simplewindow.h"

#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

SimpleWindow::SimpleWindow(QWidget *parent) :
    QWidget(parent)
{
    auto noteLabel = new QLabel("Note:", this);
    auto noteEdit = new QTextEdit(this);
    auto clearButton = new QPushButton("Clear", this);
    auto saveButton = new QPushButton("Save", this);

    // outer horizontal-layout
    auto outer = new QVBoxLayout;
    outer->addWidget(noteLabel);
    outer->addWidget(noteEdit);
    {
        // nested inner layout
        auto inner = new QHBoxLayout;
        inner->addWidget(clearButton);
        inner->addWidget(saveButton);
        outer->addLayout(inner);
    }
    this->setLayout(outer);
}
