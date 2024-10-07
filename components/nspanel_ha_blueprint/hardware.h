// hardware.h

#pragma once

#include <cstdint>

// Namespace for nspanel_ha_blueprint, encapsulating definitions related to hardware settings.
namespace nspanel_ha_blueprint {

    /**
     * @enum ButtonSettings
     * Represents the settings for hardware buttons using individual bits within a uint8_t value.
     * This allows efficient storage and manipulation of settings for multiple buttons in a compact form.
     * 
     * The bit allocations are as follows:
     * - Bit 0: Left button enabled.
     * - Bit 1: Left button state (0 for `off`, 1 for `on`).
     * - Bits 2-3: Reserved for future use.
     * - Bit 4: Right button enabled.
     * - Bit 5: Right button state (0 for `off`, 1 for `on`).
     * - Bits 6-7: Reserved for future use.
     * 
     * These settings facilitate easy manipulation of button states and configurations through bitwise operations.
     */
    enum ButtonSettings {
        ButtonLeft_Enabled = 1 << 0,   ///< Enables left button visualization on screen.
        ButtonLeft_State = 1 << 1,     ///< Indicates current state of the left button.
        // Bits 2 and 3 are reserved for future expansion.
        ButtonRight_Enabled = 1 << 4,  ///< Enables right button visualization on screen.
        ButtonRight_State = 1 << 5,    ///< Indicates current state of the right button.
        // Bits 6 and 7 are reserved for future expansion.
    };

    /**
     * Updates a settings byte according to a specified condition and flag.
     * 
     * This function template applies a bitwise operation to modify the settings byte based on
     * the provided condition and flag. If the condition is true, the bit corresponding to the flag
     * is set; otherwise, it's cleared. This method enables dynamic and conditional settings updates.
     *
     * @param settings Reference to the settings byte to be modified.
     * @param condition Boolean condition determining how the settings byte is modified.
     * @param flag The specific bit flag (from ButtonSettings or RelaySettings) to modify.
     */
    template<typename SettingsEnum>
    void update_bitwise_setting(uint8_t& settings, bool condition, SettingsEnum flag);

}  // namespace nspanel_ha_blueprint
