// DoubleData.cpp
#include "DoubleData.h"

DoubleData::DoubleData(double data) {
    m_data = data;
}

DoubleData::~DoubleData() {
}

void DoubleData::print() {
    printf("%lf\n", m_data);
}

void DoubleData::setData() {
    printf("Enter a double: ");
    scanf("%lf", &m_data);
}

void DoubleData::getData() const {
    printf("Double data: %lf\n", m_data);
}
