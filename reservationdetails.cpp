#include "reservationdetails.h"

QString ReservationDetails::getReservationName() const
{
    return reservationName;
}

void ReservationDetails::setReservationName(const QString &value)
{
    reservationName = value;
}

RoomType ReservationDetails::getRoomType() const
{
    return roomType;
}

void ReservationDetails::setRoomType(const RoomType &value)
{
    roomType = value;
}

QString ReservationDetails::getFirstDayOfStay() const
{
    return firstDayOfStay;
}

void ReservationDetails::setFirstDayOfStay(const QString &value)
{
    firstDayOfStay = value;
}

unsigned char ReservationDetails::getNumberOfNights() const
{
    return numberOfNights;
}

void ReservationDetails::setNumberOfNights(unsigned char value)
{
    numberOfNights = value;
}

unsigned char ReservationDetails::getNumberOfAdults() const
{
    return numberOfAdults;
}

void ReservationDetails::setNumberOfAdults(unsigned char value)
{
    numberOfAdults = value;
}

unsigned char ReservationDetails::getNumberOfChildren() const
{
    return numberOfChildren;
}

void ReservationDetails::setNumberOfChildren(unsigned char value)
{
    numberOfChildren = value;
}

bool ReservationDetails::getParking() const
{
    return parking;
}

void ReservationDetails::setParking(bool value)
{
    parking = value;
}

ReservationDetails::ReservationDetails()
{

}

double ReservationDetails::calculateCost()
{
    double currentRate = 0;

    switch(roomType) {
    case STANDARD_QUEEN:
        currentRate = STANDARD_QUEEN_COST;
        break;
    case STANDARD_KING:
        currentRate = STANDARD_KING_COST;
        break;
    case ATRIUM_QUEEN:
        currentRate = ATRIUM_QUEEN_COST;
        break;
    case ATRIUM_KING:
        currentRate = ATRIUM_KING_COST;
        break;
    }

    if (parking)
        currentRate += 12.75;

    return currentRate * numberOfNights;

}










