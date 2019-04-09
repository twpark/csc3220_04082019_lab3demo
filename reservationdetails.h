#ifndef RESERVATIONDETAILS_H
#define RESERVATIONDETAILS_H

#include <QObject>

enum RoomType { STANDARD_QUEEN, STANDARD_KING, ATRIUM_QUEEN, ATRIUM_KING };

class ReservationDetails
{
private:
    QString reservationName;
    RoomType roomType;
    QString firstDayOfStay;
    unsigned char numberOfNights;
    unsigned char numberOfAdults;
    unsigned char numberOfChildren;
    bool parking;

    const int STANDARD_QUEEN_COST = 284;
    const int STANDARD_KING_COST = 325;
    const int ATRIUM_QUEEN_COST = 290;
    const int ATRIUM_KING_COST = 350;

public:
    ReservationDetails();

    double calculateCost();

    // getters and setters for private member variables!
    QString getReservationName() const;
    void setReservationName(const QString &value);
    RoomType getRoomType() const;
    void setRoomType(const RoomType &value);
    QString getFirstDayOfStay() const;
    void setFirstDayOfStay(const QString &value);
    unsigned char getNumberOfNights() const;
    void setNumberOfNights(unsigned char value);
    unsigned char getNumberOfAdults() const;
    void setNumberOfAdults(unsigned char value);
    unsigned char getNumberOfChildren() const;
    void setNumberOfChildren(unsigned char value);
    bool getParking() const;
    void setParking(bool value);
};

#endif // RESERVATIONDETAILS_H
