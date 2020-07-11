/* -*- coding: windows-1252-unix; -*- */
/* 
 * Copyright (C)2019 Roger Clark. VK3KYY / G4KYF
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
/*
 * Translators: Kuzmich
 *
 *
 * Rev:
 */
#ifndef USER_INTERFACE_LANGUAGES_RUSSIAN_H_
#define USER_INTERFACE_LANGUAGES_RUSSIAN_H_
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
const stringsTable_t russianLanguage =
{
.LANGUAGE_NAME 			= "Russian", // MaxLen: 16
.menu					= "Меню", // MaxLen: 16
.credits				= "Credits", // MaxLen: 16
.zone					= "Зона", // MaxLen: 16
.rssi					= "S-метр", // MaxLen: 16
.battery				= "Батарея", // MaxLen: 16
.contacts				= "Контакты", // MaxLen: 16
.last_heard				= "Журнал вызовов", // MaxLen: 16
.firmware_info			= "О прошивке", // MaxLen: 16
.options				= "Настройки", // MaxLen: 16
.display_options		= "Настройки экрана", // MaxLen: 16
.sound_options			= "Настройки вкука", // MaxLen: 16
.channel_details		= "Настройки канала", // MaxLen: 16
.language				= "Язык", // MaxLen: 16
.new_contact			= "Новый контакт", // MaxLen: 16
.contact_list			= "Список контактов", // MaxLen: 16
.contact_details		= "Просм. контакта", // MaxLen: 16
.hotspot_mode			= "Хотспот", // MaxLen: 16
.built					= "Сборка", // MaxLen: 16
.zones					= "Зоны", // MaxLen: 16
.keypad					= "Клав.", // MaxLen: 12 (with .ptt)
.ptt					= "PTT", // MaxLen: 12 (with .keypad)
.locked					= "Блокировка", // MaxLen: 15
.press_blue_plus_star	= "Нажми СИН + *", // MaxLen: 19
.to_unlock				= "для разблокировки", // MaxLen: 19
.unlocked				= "Разблокировано", // MaxLen: 15
.power_off				= "Выключение...", // MaxLen: 16
.error					= "ОШИБКА", // MaxLen: 8
.rx_only				= "только Rx", // MaxLen: 14
.out_of_band				= "ВНЕ ЧАСТОТЫ", // MaxLen: 14
.timeout				= "ТАЙМАУТ", // MaxLen: 8
.tg_entry				= "TG вход", // MaxLen: 15
.pc_entry				= "PC вход", // MaxLen: 15
.user_dmr_id				= "Польз. DMR ID", // MaxLen: 15
.contact 				= "Контакт", // MaxLen: 15
.accept_call				= "Вызвать?", // MaxLen: 16
.private_call				= "Приватный вызов", // MaxLen: 16
.squelch				= "Шумодав", // MaxLen: 8
.quick_menu 				= "Быстрое меню", // MaxLen: 16
.filter					= "Ф-тр", // MaxLen: 7 (with ':' + settings: .none, "CC", "CC,TS", "CC,TS,TG")
.all_channels				= "Все каналы", // MaxLen: 16
.gotoChannel				= "Переход на",  // MaxLen: 11 (" 1024")
.scan					= "Сканирование", // MaxLen: 16
.channelToVfo				= "Канал --> VFO", // MaxLen: 16
.vfoToChannel				= "VFO --> Канал", // MaxLen: 16
.vfoToNewChannel		= "VFO --> Нов.кан.", // MaxLen: 16
.group					= "Группа", // MaxLen: 16 (with .type)
.private				= "Приватный", // MaxLen: 16 (with .type)
.all					= "Все", // MaxLen: 16 (with .type)
.type					= "Тип", // MaxLen: 16 (with .type)
.timeSlot				= "Таймслот", // MaxLen: 16 (plus ':' and  .none, '1' or '2')
.none					= "Пусто", // MaxLen: 16 (with .timeSlot, "Rx CTCSS:" and ""Tx CTCSS:", .filter/.mode/.dmr_beep)
.contact_saved				= "Контакт сохранен", // MaxLen: 16
.duplicate				= "Дубликат", // MaxLen: 16
.tg					= "TG",  // MaxLen: 8
.pc					= "PC", // MaxLen: 8
.ts					= "TS", // MaxLen: 8
.mode					= "Режим",  // MaxLen: 12
.colour_code				= "Цветовой код", // MaxLen: 16 (with ':' * .n_a)
.n_a					= "N/A",// MaxLen: 16 (with ':' * .colour_code)
.bandwidth				= "Полоса", // MaxLen: 16 (with ':' + .n_a, "25kHz" or "12.5kHz")
.stepFreq				= "Шаг", // MaxLen: 7 (with ':' + xx.xxkHz fitted)
.tot					= "TOT", // MaxLen: 16 (with ':' + .off or 15..3825)
.off					= "Выкл", // MaxLen: 16 (with ':' + .timeout_beep, .calibration or .band_limits)
.zone_skip				= "Проп.зону", // MaxLen: 16 (with ':' + .yes or .no) 
.all_skip				= "Проп.все", // MaxLen: 16 (with ':' + .yes or .no)
.yes					= "Да", // MaxLen: 16 (with ':' + .zone_skip, .all_skip or .factory_reset)
.no					= "Нет", // MaxLen: 16 (with ':' + .zone_skip, .all_skip or .factory_reset)
.rx_group				= "Rx Grp", // MaxLen: 16 (with ':' and codeplug group name)
.on					= "Вкл", // MaxLen: 16 (with ':' + .calibration or .band_limits)
.timeout_beep				= "Таймаут зв.", // MaxLen: 16 (with ':' + .off or 5..20)
.factory_reset				= "Сброс", // MaxLen: 16 (with ':' + .yes or .no)
.calibration				= "Калибровка", // MaxLen: 16 (with ':' + .on or .off)
.band_limits				= "Лимит частот", // MaxLen: 16 (with ':' + .on or .off)
.beep_volume				= "Громк.бипера", // MaxLen: 16 (with ':' + -24..6 + 'dB')
.dmr_mic_gain				= "DMR чув.", // MaxLen: 16 (with ':' + -33..12 + 'dB')
.fm_mic_gain				= "FM чув.", // MaxLen: 16 (with ':' + 0..31)
.key_long				= "Key long", // MaxLen: 11 (with ':' + x.xs fitted)
.key_repeat				= "Key rpt", // MaxLen: 11 (with ':' + x.xs fitted)
.dmr_filter_timeout			= "Тайм.фильтра", // MaxLen: 16 (with ':' + 1..90 + 's')
.brightness				= "Яркость", // MaxLen: 16 (with ':' + 0..100 + '%')
.brightness_off				= "Мин.яркость", // MaxLen: 16 (with ':' + 0..100 + '%')
.contrast				= "Контраст", // MaxLen: 16 (with ':' + 12..30)
.colour_invert				= "Инвертировать", // MaxLen: 16
.colour_normal				= "Нормально", // MaxLen: 16
.backlight_timeout			= "Таймаут", // MaxLen: 16 (with ':' + .no to 30s)
.scan_delay				= "Задерж.скан.", // MaxLen: 16 (with ':' + 1..30 + 's')
.yes___in_uppercase					= "ДА", // MaxLen: 8 (choice above green/red buttons)
.no___in_uppercase					= "НЕТ", // MaxLen: 8 (choice above green/red buttons)
.DISMISS				= "ЗАКРЫТЬ", // MaxLen: 8 (choice above green/red buttons)
.scan_mode				= "Режим скан.", // MaxLen: 16 (with ':' + .hold, .pause or .stop)
.hold					= "Удерж.", // MaxLen: 16 (with ':' + .scan_mode)
.pause					= "Пауза", // MaxLen: 16 (with ':' + .scan_mode)
.empty_list				= "Список пуст", // MaxLen: 16
.delete_contact_qm			= "Удалить контакт?", // MaxLen: 16
.contact_deleted			= "Контакт удален", // MaxLen: 16
.contact_used				= "Контакт использ.", // MaxLen: 16
.in_rx_group				= "в RX группе", // MaxLen: 16
.select_tx				= "Выбор TX", // MaxLen: 16
.edit_contact				= "Изм. контакт", // MaxLen: 16
.delete_contact				= "Удалить контакт", // MaxLen: 16
.group_call				= "Групповой вызов", // MaxLen: 16
.all_call				= "Все вызовы", // MaxLen: 16
.tone_scan				= "Скан. тона", // MaxLen: 16
.low_battery				= "НИЗ.УР.БАТАРЕИ!", // MaxLen: 16
.Auto					= "Авто", // MaxLen 16 (with .mode + ':') 
.manual					= "Ручн.",  // MaxLen 16 (with .mode + ':')
.ptt_toggle				= "PTT защ.", // MaxLen 16 (with ':' + .on or .off)
.private_call_handling			= "Разреш. ПВ", // MaxLen 16 (with ':' + .on or .off)
.stop					= "Стоп", // Maxlen 16 (with ':' + .scan_mode/.dmr_beep)
.one_line				= "1 линия", // MaxLen 16 (with ':' + .contact)
.two_lines				= "2 линии", // MaxLen 16 (with ':' + .contact)
.new_channel			= "Новый канал", // MaxLen: 16, leave room for a space and four channel digits after
.priority_order				= "Порядок", // MaxLen 16 (with ':' + 'Cc/DB/TA')
.dmr_beep				= "DMR бипер", // MaxLen 16 (with ':' + .star/.stop/.both/.none)
.start					= "Старт", // MaxLen 16 (with ':' + .dmr_beep)
.both					= "Оба", // MaxLen 16 (with ':' + .dmr_beep)
.vox_threshold                          = "VOX Thres.", // MaxLen 16 (with ':' + .off or 1..30)
.vox_tail                               = "VOX Tail", // MaxLen 16 (with ':' + .n_a or '0.0s')
.audio_prompt				= "Подск.",// Maxlen 16 (with ':' + .silent, .normal, .beep or .voice_prompt_level_1)
.silent                                 = "Тишина", // Maxlen 16 (with : + audio_prompt)
.normal                                 = "Норм.", // Maxlen 16 (with : + audio_prompt)
.beep					= "Звук", // Maxlen 16 (with : + audio_prompt)
.voice_prompt_level_1					= "Голос", // Maxlen 16 (with : + audio_prompt)
.transmitTalkerAlias	= "TA Tx", // Maxlen 16 (with : + .on or .off)
.squelch_VHF			= "VHF шумодав",// Maxlen 16 (with : + XX%)
.squelch_220			= "220 шумодав",// Maxlen 16 (with : + XX%)
.squelch_UHF			= "UHF шумодав", // Maxlen 16 (with : + XX%)
.display_background_colour = "Цвет", // Maxlen 16 (with : + .colour_normal or .colour_invert)
.openGD77 				= "OpenGD77",// Do not translate
.openGD77S 				= "OpenGD77S",// Do not translate
.openDM1801 			= "OpenDM1801",// Do not translate
.openRD5R 				= "OpenRD5R",// Do not translate
.gitCommit				= "Git commit",
.voice_prompt_level_2	= "Голос L2", // Maxlen 16 (with : + audio_prompt)
.voice_prompt_level_3	= "Голос L3" // Maxlen 16 (with : + audio_prompt)
};
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
#endif /* USER_INTERFACE_LANGUAGES_RUSSIAN_H_ */
