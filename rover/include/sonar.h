/**
 * sonar.h
 */

#ifndef SONAR_H
#define SONAR_H

void sonar_init(void);

void sonar_pulse(void);

uint16_t sonar_reading(void);

#endif // SONAR_H
