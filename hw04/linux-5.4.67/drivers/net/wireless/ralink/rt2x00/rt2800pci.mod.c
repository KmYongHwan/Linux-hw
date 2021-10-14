#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xb7ce766f, "rt2x00mac_tx_frames_pending" },
	{ 0x66df79b1, "rt2x00mac_get_ringparam" },
	{ 0x941eebc3, "rt2x00mac_flush" },
	{ 0x32137a00, "rt2x00mac_rfkill_poll" },
	{ 0xe8fb4b03, "rt2800_get_survey" },
	{ 0xd78f0a18, "rt2800_ampdu_action" },
	{ 0xd457a650, "rt2800_get_tsf" },
	{ 0x7df1760b, "rt2800_conf_tx" },
	{ 0xd713547e, "rt2800_sta_remove" },
	{ 0xbafb0360, "rt2800_sta_add" },
	{ 0xdd11bb1e, "rt2800_set_rts_threshold" },
	{ 0x699e1490, "rt2800_get_key_seq" },
	{ 0xc57e8cff, "rt2x00mac_get_stats" },
	{ 0x7cf2ee97, "rt2x00mac_sw_scan_complete" },
	{ 0x5c5b2217, "rt2x00mac_sw_scan_start" },
	{ 0xcd4cb488, "rt2x00mac_set_key" },
	{ 0xc8274e41, "rt2x00mac_configure_filter" },
	{ 0xbbc9b90f, "rt2x00mac_bss_info_changed" },
	{ 0x37facb0a, "rt2x00mac_config" },
	{ 0xe495a845, "rt2x00mac_remove_interface" },
	{ 0x6486e2a0, "rt2x00mac_add_interface" },
	{ 0x5665f90b, "rt2x00mac_stop" },
	{ 0xbe2418b3, "rt2x00mac_start" },
	{ 0xe70e7f96, "rt2x00mac_tx" },
	{ 0x1b551bef, "rt2800mmio_get_dma_done" },
	{ 0x2e3e72f4, "rt2800mmio_get_txwi" },
	{ 0x61bc8962, "rt2800mmio_init_registers" },
	{ 0x197a857, "rt2x00mmio_regbusy_read" },
	{ 0x5b5ee945, "rt2800_pre_reset_hw" },
	{ 0x8146b741, "rt2800_config" },
	{ 0xb36bf75c, "rt2800_config_ant" },
	{ 0x4a300a79, "rt2800_config_erp" },
	{ 0xb9871d90, "rt2800_config_intf" },
	{ 0x7489b09d, "rt2800_config_filter" },
	{ 0x12fb4482, "rt2800_config_pairwise_key" },
	{ 0x2c3615f1, "rt2800_config_shared_key" },
	{ 0x71c96728, "rt2800mmio_fill_rxdone" },
	{ 0x49ce6fdb, "rt2800_clear_beacon" },
	{ 0x56acf5c2, "rt2800_write_beacon" },
	{ 0xefc61b56, "rt2800_write_tx_data" },
	{ 0xa9f0a35e, "rt2800mmio_write_tx_desc" },
	{ 0x46d5fa83, "rt2800mmio_flush_queue" },
	{ 0xb8dcb312, "rt2800mmio_stop_queue" },
	{ 0xb9dcb05, "rt2800mmio_kick_queue" },
	{ 0x8530e5e7, "rt2800mmio_start_queue" },
	{ 0xa7b60d2e, "rt2800_watchdog" },
	{ 0xdaf1fe12, "rt2800_vco_calibration" },
	{ 0xe07f65f5, "rt2800_gain_calibration" },
	{ 0x8757f97d, "rt2800_link_tuner" },
	{ 0x63acd82f, "rt2800_reset_tuner" },
	{ 0x54f11081, "rt2800_link_stats" },
	{ 0xc92c6758, "rt2800_rfkill_poll" },
	{ 0xedd485c8, "rt2800mmio_clear_entry" },
	{ 0xe6c5d8c, "rt2800mmio_get_entry_state" },
	{ 0x59f9c722, "rt2x00mmio_uninitialize" },
	{ 0x37797d6f, "rt2x00mmio_initialize" },
	{ 0xdd2e583c, "rt2800_load_firmware" },
	{ 0x1a30b9f5, "rt2800_check_firmware" },
	{ 0xd323e79a, "rt2800mmio_probe_hw" },
	{ 0xc6a1455e, "rt2800mmio_autowake_tasklet" },
	{ 0x92c0bcd1, "rt2800mmio_rxdone_tasklet" },
	{ 0x2505789d, "rt2800mmio_tbtt_tasklet" },
	{ 0xfad1430, "rt2800mmio_pretbtt_tasklet" },
	{ 0xe28f94c7, "rt2800mmio_txstatus_tasklet" },
	{ 0x5fa4db64, "rt2800mmio_interrupt" },
	{ 0xf5f40568, "rt2800mmio_queue_init" },
	{ 0xeca6c17c, "rt2x00pci_resume" },
	{ 0xb649e8bf, "rt2x00pci_suspend" },
	{ 0xceeb0161, "rt2x00pci_remove" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xccdd45fb, "rt2800mmio_toggle_irq" },
	{ 0xbf2ab6b, "rt2800mmio_enable_radio" },
	{ 0x17103664, "rt2800_mcu_request" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x6ee7466f, "rt2800_read_eeprom_efuse" },
	{ 0x982bf129, "rt2800_efuse_detect" },
	{ 0x1e5ec6d0, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F308CBBB92C7269AB6539DE");
