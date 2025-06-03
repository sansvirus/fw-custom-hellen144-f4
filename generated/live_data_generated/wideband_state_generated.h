// this section was generated automatically by rusEFI tool config_definition_base-all.jar based on (unknown script) controllers/sensors//wideband_state.txt
// by class com.rusefi.output.CHeaderConsumer
// begin
#pragma once
#include "rusefi_types.h"
// start of wideband_state_s
struct wideband_state_s {
	/**
	 * WBO: Fault code
	 * offset 0
	 */
	uint8_t faultCode = (uint8_t)0;
	/**
	 * WBO: Heater duty
	 * units: %
	 * offset 1
	 */
	uint8_t heaterDuty = (uint8_t)0;
	/**
	 * WBO: Pump duty
	 * units: %
	 * offset 2
	 */
	uint8_t pumpDuty = (uint8_t)0;
	/**
	 * need 4 byte alignment
	 * units: units
	 * offset 3
	 */
	uint8_t alignmentFill_at_3[1] = {};
	/**
	offset 4 bit 0 */
	bool isValid : 1 {};
	/**
	offset 4 bit 1 */
	bool fwUnsupported : 1 {};
	/**
	offset 4 bit 2 */
	bool fwOutdated : 1 {};
	/**
	offset 4 bit 3 */
	bool unusedBit_7_3 : 1 {};
	/**
	offset 4 bit 4 */
	bool unusedBit_7_4 : 1 {};
	/**
	offset 4 bit 5 */
	bool unusedBit_7_5 : 1 {};
	/**
	offset 4 bit 6 */
	bool unusedBit_7_6 : 1 {};
	/**
	offset 4 bit 7 */
	bool unusedBit_7_7 : 1 {};
	/**
	offset 4 bit 8 */
	bool unusedBit_7_8 : 1 {};
	/**
	offset 4 bit 9 */
	bool unusedBit_7_9 : 1 {};
	/**
	offset 4 bit 10 */
	bool unusedBit_7_10 : 1 {};
	/**
	offset 4 bit 11 */
	bool unusedBit_7_11 : 1 {};
	/**
	offset 4 bit 12 */
	bool unusedBit_7_12 : 1 {};
	/**
	offset 4 bit 13 */
	bool unusedBit_7_13 : 1 {};
	/**
	offset 4 bit 14 */
	bool unusedBit_7_14 : 1 {};
	/**
	offset 4 bit 15 */
	bool unusedBit_7_15 : 1 {};
	/**
	offset 4 bit 16 */
	bool unusedBit_7_16 : 1 {};
	/**
	offset 4 bit 17 */
	bool unusedBit_7_17 : 1 {};
	/**
	offset 4 bit 18 */
	bool unusedBit_7_18 : 1 {};
	/**
	offset 4 bit 19 */
	bool unusedBit_7_19 : 1 {};
	/**
	offset 4 bit 20 */
	bool unusedBit_7_20 : 1 {};
	/**
	offset 4 bit 21 */
	bool unusedBit_7_21 : 1 {};
	/**
	offset 4 bit 22 */
	bool unusedBit_7_22 : 1 {};
	/**
	offset 4 bit 23 */
	bool unusedBit_7_23 : 1 {};
	/**
	offset 4 bit 24 */
	bool unusedBit_7_24 : 1 {};
	/**
	offset 4 bit 25 */
	bool unusedBit_7_25 : 1 {};
	/**
	offset 4 bit 26 */
	bool unusedBit_7_26 : 1 {};
	/**
	offset 4 bit 27 */
	bool unusedBit_7_27 : 1 {};
	/**
	offset 4 bit 28 */
	bool unusedBit_7_28 : 1 {};
	/**
	offset 4 bit 29 */
	bool unusedBit_7_29 : 1 {};
	/**
	offset 4 bit 30 */
	bool unusedBit_7_30 : 1 {};
	/**
	offset 4 bit 31 */
	bool unusedBit_7_31 : 1 {};
	/**
	 * WBO: Temperature
	 * units: C
	 * offset 8
	 */
	uint16_t tempC = (uint16_t)0;
	/**
	 * WBO: Nernst Voltage
	 * units: V
	 * offset 10
	 */
	scaled_channel<uint16_t, 1000, 1> nernstVoltage = (uint16_t)0;
	/**
	 * WBO: ESR
	 * units: ohm
	 * offset 12
	 */
	uint16_t esr = (uint16_t)0;
	/**
	 * need 4 byte alignment
	 * units: units
	 * offset 14
	 */
	uint8_t alignmentFill_at_14[2] = {};
};
static_assert(sizeof(wideband_state_s) == 16);

// end
// this section was generated automatically by rusEFI tool config_definition_base-all.jar based on (unknown script) controllers/sensors//wideband_state.txt
