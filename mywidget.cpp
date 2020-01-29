#include <QPushButton>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include "mywidget.h"

/*
 * 命名规范
 * 类名 首字母大写，单词和单词之间 首字母大写
 * 函数名、变量名称。。。首字母小写 单词和单词之间 首字母大写
 *
 * 常用快捷键
 * 运行  ctrl + R
 * 编译  ctrl + B
 * 帮助文档  F1
 * 注释  ctrl + /
 * 字体缩放  ctrl + 鼠标滚轮
 * 整行代码移动  ctrl + shift + ↑ or ↓
 * 查找  ctrl + f
 * 自动对齐  ctrl + i
 * .h 与 .cpp 切换  ctrl + F4
 *
 * 帮助文档 F1 左侧列表  .\Qt\Qt**\*\mingw*_*\bin
*/

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * btn = new QPushButton; // 按钮对象
    // btn->show(); 如果是 show 函数，默认是用顶层方式弹出窗口
    // 预期想让按钮依赖于 MyWidget 弹出
    btn->setParent(this);
    // 显示文本
    btn->setText("HelloWorld");
    // 创建第二个按钮
    QPushButton * btn2 = new QPushButton("qt2333");
    btn2->setParent(this);
    // 移动按钮
    btn->move(100, 50);
    btn2->move(100, 100);

    // 设置窗口大小
    this->resize(600, 400);

    // 设置窗口标题
    this->setWindowTitle("第一个项目");

    // 设置固定窗口大小
    this->setFixedSize(600, 400);

    // Qt坐标系
    // 左上角是0, 0点
    // x→为正方向 y↓为正方向

    QMenuBar * bar = new QMenuBar(this);
    QMenu * file = new QMenu("文件", this);
    bar->addMenu(file);
    QAction * open = new QAction("打开", this);
    QAction * edit = new QAction("编辑", this);
    file->addAction(open);
    file->addSeparator();
    file->addAction(edit);


}

MyWidget::~MyWidget()
{

}
