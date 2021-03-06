//
// EEPROM.H: Header file
//

#ifndef __EEPROM_H__
#define __EEPROM_H__

#include "jaguar.h"

void eeprom_init(void);
void eeprom_reset(void);
void eeprom_done(void);
void eeprom_update(void);

uint8_t eeprom_byte_read(uint32_t offset);
uint16_t eeprom_word_read(uint32_t offset);
void eeprom_byte_write(uint32_t offset, uint8_t data);
void eeprom_word_write(uint32_t offset, uint16_t data);

#endif	// __EEPROM_H__
