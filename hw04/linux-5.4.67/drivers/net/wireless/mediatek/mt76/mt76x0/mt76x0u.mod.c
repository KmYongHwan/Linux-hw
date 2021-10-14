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
	{ 0x13607aef, "mt76x02_remove_interface" },
	{ 0xd5def79d, "__mt76_poll" },
	{ 0x89a4a2e4, "mt76_sw_scan" },
	{ 0xd8e6521c, "mt76x02_conf_tx" },
	{ 0x2c2e5733, "mt76x02_ampdu_action" },
	{ 0x3cdbadbb, "mt76u_stop_rx" },
	{ 0xc5c18f6, "mt76x02u_exit_beacon_config" },
	{ 0x46d9371c, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2ce66c75, "mt76u_vendor_request" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x127c2c18, "mt76x02u_init_beacon_config" },
	{ 0xfa2a9786, "mt76u_stop_tx" },
	{ 0xf7e740d9, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7488bc0c, "mt76x0_mac_start" },
	{ 0x99315e34, "mt76x02_bss_info_changed" },
	{ 0xe020c277, "mt76x0_init_hardware" },
	{ 0x7b42d85e, "mt76_sta_state" },
	{ 0x91115d8, "mt76x02_set_rts_threshold" },
	{ 0x4138431, "mt76x02u_tx_prepare_skb" },
	{ 0xc11cf03e, "mt76x02u_init_mcu" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfeaa13c7, "mt76_get_survey" },
	{ 0x4c3ba432, "mt76u_init" },
	{ 0x8d63f116, "mt76x02u_mcu_fw_send_data" },
	{ 0xccddfb4, "mt76x0_mac_stop" },
	{ 0x497a4216, "mt76x02_sta_add" },
	{ 0x2a923576, "mt76x02_tx_status_data" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcaa7b18f, "mt76x02_sta_remove" },
	{ 0xdf8add62, "mt76x02_tx" },
	{ 0x4b494fd5, "__mt76_poll_msec" },
	{ 0x8b073c3d, "mt76x02_sw_scan_complete" },
	{ 0x49747f9e, "mt76_set_tim" },
	{ 0x3ff8d3e7, "mt76x0_phy_calibrate" },
	{ 0x901572d5, "mt76x02u_mcu_fw_reset" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7c25a90a, "mt76x0_register_device" },
	{ 0xa49a806a, "mt76x0_config" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x2cfa6061, "mt76u_queues_deinit" },
	{ 0x22688b95, "mt76x02_queue_rx_skb" },
	{ 0x28a090bc, "mt76x0_chip_onoff" },
	{ 0x7eaeaa92, "mt76x02_configure_filter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7df84946, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xce960ec9, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xecdc6d33, "mt76x02_sta_rate_tbl_update" },
	{ 0xc1cb8b0d, "mt76u_resume_rx" },
	{ 0xbe0777e5, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0x28697053, "mt76_wake_tx_queue" },
	{ 0xe8f52f11, "mt76_get_txpower" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0xef0f9bc7, "mt76_release_buffered_frames" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x47b0350d, "mt76x02_set_key" },
	{ 0x772408b5, "firmware_request_nowarn" },
	{ 0xede283d, "release_firmware" },
	{ 0xb2c4fb9e, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "13DBD37545D52ED76C7B512");
