#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->resize( QSize( 1200, 800 ));
    qimage.load("test.jpg");
    //ui->tab->setTabText(0,"Exp01");
    //ui->tab->setTabText(1,"Exp02");

    //ui->exp01Show->setPixmap(QPixmap::fromImage(qimage));
    //ui->exp02Show->setPixmap(QPixmap::fromImage(qimage));
    //ui->exp03Show->setPixmap(QPixmap::fromImage(qimage));
    //ui->exp04Show->setPixmap(QPixmap::fromImage(qimage));
    //ui->exp05Show->setPixmap(QPixmap::fromImage(qimage));
    //ui->exp01Show->resize(ui->exp01Show->pixmap()->size());
    //ui->exp02Show->resize(ui->exp02Show->pixmap()->size());
    //ui->exp03Show->resize(ui->exp03Show->pixmap()->size());
    //ui->exp04Show->resize(ui->exp04Show->pixmap()->size());
   // ui->exp05Show->resize(ui->exp05Show->pixmap()->size());
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_openButton_clicked()
//{
//    /*读入图片并显示，将图片以灰度形式读入*/
//        //QString img_name = QFileDialog::getOpenFileName( this, "Open Image", "../dft", tr("Image Files(*.png *.jpg *.bmp *.jpeg)") );
//        //Mat src = imread( img_name.toLatin1().data(), CV_LOAD_IMAGE_GRAYSCALE );
//        //src.copyTo( src_1 );
//        //
//    QString img_name = QFileDialog::getOpenFileName( this, "Open Image", "../dft", tr("Image Files(*.png *.jpg *.bmp *.jpeg)") );
//    //image.load("test.jpg");
//    image.load(img_name.toLatin1().data());

//    //ui->label->setPixmap(QPixmap::fromImage(image));


//        //putText( src, "The original image:", Point(0, 50), 2, 1, Scalar::all(0), 2 );
//        //imwrite( "../dft/src_1.jpg", src_1 );
//        //ui->textBrowser->setFixedHeight( src.rows );
//        //ui->textBrowser->setFixedWidth( src.cols );
//        //ui->textBrowser->clear();
//        //ui->textBrowser->append( "<img src=../dft/src_1.jpg>" );

//        //display_num = 1;
//        //cv::imshow("image", src);

////    //获取文件名和路径，同时加入筛选功能
////      QString fileName = QFileDialog::getOpenFileName(this,
////                                      tr("open iamge"),//对话框名称
////                                       ".",//默认打开文件位置“.”文件目录"/"根目录
////                                       tr("image files(*.jpg *.png *.bmp)"));//筛选器


////       Mat image = cv::imread(fileName.toLatin1().data());
////       // 使用lebel显示之前获取的文件名和路径
////       //ui->label->setText(fileName);
////       cv::imshow("image", image);
////    //1;
//}


void MainWindow::on_actionopen_image_triggered()
{
    QString img_name = QFileDialog::getOpenFileName( this, "Open Image", ".", tr("Image Files(*.png *.jpg *.bmp *.jpeg *.JPG *.PNG)") );
    //qimage.load("test.jpg");
    //qimage.load(img_name.toLocal8Bit().data());
    image=imread(img_name.toLocal8Bit().toStdString());
    //imshow("1",image);
    cvtColor(image,image,CV_BGR2RGB);
    qimage=QImage((const unsigned char*)(image.data),image.cols,image.rows,QImage::Format_RGB888);
    //QImage::Format_Grayscale8
    //cout <<img_name.toLocal8Bit().data()<<endl;

    ui->exp01Show->setPixmap(QPixmap::fromImage(qimage));
    ui->exp02Show->setPixmap(QPixmap::fromImage(qimage));
    ui->exp03Show->setPixmap(QPixmap::fromImage(qimage));
    ui->exp04Show->setPixmap(QPixmap::fromImage(qimage));
    ui->exp05Show->setPixmap(QPixmap::fromImage(qimage));
    ui->exp01Show->resize(ui->exp01Show->pixmap()->size());
    ui->exp02Show->resize(ui->exp02Show->pixmap()->size());
    ui->exp03Show->resize(ui->exp03Show->pixmap()->size());
    ui->exp04Show->resize(ui->exp04Show->pixmap()->size());
    ui->exp05Show->resize(ui->exp05Show->pixmap()->size());
}

void MainWindow::on_actionclose_triggered()
{
    close();
}
