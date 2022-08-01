#ifndef USER_H
#define USER_H
#include <qt5/QtWidgets/QMainWindow>

class User{
private:
    QString name_;
    QString email_;
    QString password_;
    QString phone_;
    QString gender_;
    QString dob_;

public:
    User();

    User(QString name, QString email, QString password, QString phone, QString gender, QString dob)
        :   name_(name), email_(email), password_(password), phone_(phone), gender_(gender), dob_(dob){}

    QString getName(){
        return name_;
    }
    QString getEmail(){
        return email_;
    }
    QString getPassword(){
        return password_;
    }
    QString getPhone(){
        return phone_;
    }
    QString getGender(){
        return gender_;
    }
    QString getDOB_(){
        return dob_;
    }
};


#endif // USER_H
