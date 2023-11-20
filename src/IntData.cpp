// IntData.cpp
#include "IntData.h"

IntData::IntData(int data) {
    m_data = data;
}

IntData::~IntData() {
}

void IntData::print() {
    printf("%d\n", m_data);
}

void IntData::setData() {
    printf("Enter an integer: ");
    scanf("%d", &m_data);
}

void IntData::getData() const {
    printf("Integer data: %d\n", m_data);
}