// Copyright 2018 Espressif Systems (Shanghai) PTE LTD
// All rights reserved.

#include "led_msc.h"
#include "va_led.h"

const va_led_specs_t led_msc_ww_active[] = {
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 0},
};

const va_led_specs_t led_msc_ww_ongoing[] = {
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 0},
};

const va_led_specs_t led_msc_speaking[] = {
    {30, {0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F}, 1},
    {30, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}, 1},
    {30, {0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00001F}, 1},
    {30, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}, 1},
    {30, {0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F}, 1},
    {30, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}, 1},
    {30, {0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F}, 1},
    {30, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}, 1},
    {30, {0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F}, 1},
    {30, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}, 1},
    {30, {0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF}, 1},
    {30, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}, 1},
    {30, {0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF}, 1},
    {30, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}, 1},
    {30, {0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF}, 1},
    {30, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 1},
    {30, {0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF}, 1},
    {30, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}, 1},
    {30, {0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF}, 1},
    {30, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}, 1},
    {30, {0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF}, 1},
    {30, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}, 1},
    {30, {0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F}, 1},
    {30, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}, 1},
    {30, {0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F}, 1},
    {30, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}, 1},
    {30, {0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F}, 1},
    {30, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}, 1},
    {30, {0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00001F}, 1},
    {30, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}, 1},
};

const va_led_specs_t led_msc_mic_off_end[] = {
    {11, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_mic_off_on[] = {
    {66, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_mic_off_start[] = {
    {33, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_ww_deactive[] = {
    {33, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_error[] = {
    {66, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
};

const va_led_specs_t led_msc_btconnect[] = {
    {75, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_btdisconnect[] = {
    {75, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_ntf_queued[] = {
    {60, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
};

const va_led_specs_t led_msc_ntf_incoming[] = {
    {50, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_thinking[] = {
    {10, {0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000}, 0},
    {10, {0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000}, 0},
    {10, {0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000}, 0},
    {10, {0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000}, 0},
    {10, {0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF}, 0},
    {10, {0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF}, 0},
    {10, {0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF}, 0},
    {10, {0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F}, 0},
    {10, {0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F}, 0},
    {10, {0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F}, 0},
    {10, {0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F}, 0},
    {10, {0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F}, 0},
};

const va_led_specs_t led_msc_alrt_short[] = {
    {100, {0x0000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},

};

const va_led_specs_t led_msc_alrt[] = {
    {50, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
};

const va_led_specs_t led_msc_bootup_1[] = {
    {70, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
    {70, {0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F}, 0},
    {70, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}, 0},
    {70, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}, 0},
    {70, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}, 0},
    {70, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}, 0},
    {70, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}, 0},
    {70, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}, 0},
    {70, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}, 0},  
};

const va_led_specs_t led_msc_bootup_2[] = {
    {100, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 1},
};

const va_led_specs_t led_msc_speaker_mute[] = {
    {22, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_speaker_vol[] = {
    {11, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_off[] = {
    {10, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_msc_factory_rst[] = {
    {233, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
    {233, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 1},
};

va_led_config_t led_msc_pattern_conf[VA_LED_PATTERN_MAX];

void led_msc_pattern_init(va_led_config_t **va_led_msc_pat)
{
    led_msc_pattern_conf[VA_LED_BOOTUP_1].va_led_state_sz = sizeof(led_msc_bootup_1) / sizeof(led_msc_bootup_1[0]);
    led_msc_pattern_conf[VA_LED_BOOTUP_1].va_led_state_st = (va_led_specs_t *)led_msc_bootup_1;

    led_msc_pattern_conf[VA_LED_BOOTUP_2].va_led_state_sz = sizeof(led_msc_bootup_2) / sizeof(led_msc_bootup_2[0]);
    led_msc_pattern_conf[VA_LED_BOOTUP_2].va_led_state_st = (va_led_specs_t *)led_msc_bootup_2;

    led_msc_pattern_conf[VA_LED_WW_ACTIVE].va_led_state_sz = sizeof(led_msc_ww_active) / sizeof(led_msc_ww_active[0]);
    led_msc_pattern_conf[VA_LED_WW_ACTIVE].va_led_state_st = (va_led_specs_t *)led_msc_ww_active;

    led_msc_pattern_conf[VA_LED_WW_ONGOING].va_led_state_sz = sizeof(led_msc_ww_ongoing) / sizeof(led_msc_ww_ongoing[0]);
    led_msc_pattern_conf[VA_LED_WW_ONGOING].va_led_state_st = (va_led_specs_t *)led_msc_ww_ongoing;

    led_msc_pattern_conf[VA_LED_WW_DEACTIVATE].va_led_state_sz = sizeof(led_msc_ww_deactive) / sizeof(led_msc_ww_deactive[0]);
    led_msc_pattern_conf[VA_LED_WW_DEACTIVATE].va_led_state_st = (va_led_specs_t *)led_msc_ww_deactive;

    led_msc_pattern_conf[VA_LED_SPEAKER_VOL].va_led_state_sz = sizeof(led_msc_speaker_vol) / sizeof(led_msc_speaker_vol[0]);
    led_msc_pattern_conf[VA_LED_SPEAKER_VOL].va_led_state_st = (va_led_specs_t *)led_msc_speaker_vol;

    led_msc_pattern_conf[VA_LED_SPEAKER_MUTE].va_led_state_sz = sizeof(led_msc_speaker_mute) / sizeof(led_msc_speaker_mute[0]);
    led_msc_pattern_conf[VA_LED_SPEAKER_MUTE].va_led_state_st = (va_led_specs_t *)led_msc_speaker_mute;

    led_msc_pattern_conf[VA_LED_SPEAKING].va_led_state_sz = sizeof(led_msc_speaking) / sizeof(led_msc_speaking[0]);
    led_msc_pattern_conf[VA_LED_SPEAKING].va_led_state_st = (va_led_specs_t *)led_msc_speaking;

    led_msc_pattern_conf[VA_LED_MIC_OFF_END].va_led_state_sz = sizeof(led_msc_mic_off_end) / sizeof(led_msc_mic_off_end[0]);
    led_msc_pattern_conf[VA_LED_MIC_OFF_END].va_led_state_st = (va_led_specs_t *)led_msc_mic_off_end;

    led_msc_pattern_conf[VA_LED_MIC_OFF_ON].va_led_state_sz = sizeof(led_msc_mic_off_on) / sizeof(led_msc_mic_off_on[0]);
    led_msc_pattern_conf[VA_LED_MIC_OFF_ON].va_led_state_st = (va_led_specs_t *)led_msc_mic_off_on;

    led_msc_pattern_conf[VA_LED_MIC_OFF_START].va_led_state_sz = sizeof(led_msc_mic_off_start) / sizeof(led_msc_mic_off_start[0]);
    led_msc_pattern_conf[VA_LED_MIC_OFF_START].va_led_state_st = (va_led_specs_t *)led_msc_mic_off_start;

    led_msc_pattern_conf[VA_LED_ERROR].va_led_state_sz = sizeof(led_msc_error) / sizeof(led_msc_error[0]);
    led_msc_pattern_conf[VA_LED_ERROR].va_led_state_st = (va_led_specs_t *)led_msc_error;

    led_msc_pattern_conf[VA_LED_BTCONNECT].va_led_state_sz = sizeof(led_msc_btconnect) / sizeof(led_msc_btconnect[0]);
    led_msc_pattern_conf[VA_LED_BTCONNECT].va_led_state_st = (va_led_specs_t *)led_msc_btconnect;

    led_msc_pattern_conf[VA_LED_BTDISCONNECT].va_led_state_sz = sizeof(led_msc_btdisconnect) / sizeof(led_msc_btdisconnect[0]);
    led_msc_pattern_conf[VA_LED_BTDISCONNECT].va_led_state_st = (va_led_specs_t *)led_msc_btdisconnect;

    led_msc_pattern_conf[VA_LED_NTF_QUEUED].va_led_state_sz = sizeof(led_msc_ntf_queued) / sizeof(led_msc_ntf_queued[0]);
    led_msc_pattern_conf[VA_LED_NTF_QUEUED].va_led_state_st = (va_led_specs_t *)led_msc_ntf_queued;

    led_msc_pattern_conf[VA_LED_NTF_INCOMING].va_led_state_sz = sizeof(led_msc_ntf_incoming) / sizeof(led_msc_ntf_incoming[0]);
    led_msc_pattern_conf[VA_LED_NTF_INCOMING].va_led_state_st = (va_led_specs_t *)led_msc_ntf_incoming;

    led_msc_pattern_conf[VA_LED_THINKING].va_led_state_sz = sizeof(led_msc_thinking) / sizeof(led_msc_thinking[0]);
    led_msc_pattern_conf[VA_LED_THINKING].va_led_state_st = (va_led_specs_t *)led_msc_thinking;

    led_msc_pattern_conf[VA_LED_ALERT_SHORT].va_led_state_sz = sizeof(led_msc_alrt_short) / sizeof(led_msc_alrt_short[0]);
    led_msc_pattern_conf[VA_LED_ALERT_SHORT].va_led_state_st = (va_led_specs_t *)led_msc_alrt_short;

    led_msc_pattern_conf[VA_LED_ALERT].va_led_state_sz = sizeof(led_msc_alrt) / sizeof(led_msc_alrt[0]);
    led_msc_pattern_conf[VA_LED_ALERT].va_led_state_st = (va_led_specs_t *)led_msc_alrt;

    led_msc_pattern_conf[VA_LED_FACTORY_RESET].va_led_state_sz = sizeof(led_msc_factory_rst) / sizeof(led_msc_factory_rst[0]);
    led_msc_pattern_conf[VA_LED_FACTORY_RESET].va_led_state_st = (va_led_specs_t *)led_msc_factory_rst;

    led_msc_pattern_conf[VA_LED_OFF].va_led_state_sz = sizeof(led_msc_off) / sizeof(led_msc_off[0]);
    led_msc_pattern_conf[VA_LED_OFF].va_led_state_st = (va_led_specs_t *)led_msc_off;

    (*va_led_msc_pat) = led_msc_pattern_conf;
}
