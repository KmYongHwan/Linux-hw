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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x1b1446b4, "mt76x02_phy_set_txdac" },
	{ 0x118d4dfd, "mt76x2_phy_set_txpower" },
	{ 0xa45349b, "mt76x2_phy_set_txpower_regs" },
	{ 0xd1bdff5a, "mt76x2_read_rx_gain" },
	{ 0xd5def79d, "__mt76_poll" },
	{ 0xbc2234e0, "mt76x02_mac_wcid_setup" },
	{ 0x89a4a2e4, "mt76_sw_scan" },
	{ 0xae9dd6c6, "mt76x02_mcu_function_select" },
	{ 0xd8e6521c, "mt76x02_conf_tx" },
	{ 0x9307ab1, "mt76x02_mcu_calibrate" },
	{ 0x2c2e5733, "mt76x02_ampdu_action" },
	{ 0x3cdbadbb, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x46d9371c, "mt76x02_add_interface" },
	{ 0x2ce66c75, "mt76u_vendor_request" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x127c2c18, "mt76x02u_init_beacon_config" },
	{ 0xfa2a9786, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf7e740d9, "mt76u_alloc_queues" },
	{ 0xfd1e586d, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf8150674, "mt76x2_phy_update_channel_gain" },
	{ 0x6cd1d086, "mt76x02_init_agc_gain" },
	{ 0x99315e34, "mt76x02_bss_info_changed" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x9ec1ea3c, "mt76x2_phy_tssi_compensate" },
	{ 0x7b42d85e, "mt76_sta_state" },
	{ 0x70c38cb4, "mt76x2_mcu_init_gain" },
	{ 0x4138431, "mt76x02u_tx_prepare_skb" },
	{ 0xc11cf03e, "mt76x02u_init_mcu" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfe1d3809, "mt76x02_init_debugfs" },
	{ 0xfeaa13c7, "mt76_get_survey" },
	{ 0x4c3ba432, "mt76u_init" },
	{ 0x8d63f116, "mt76x02u_mcu_fw_send_data" },
	{ 0xa4b3e4a1, "mt76x2_init_txpower" },
	{ 0x24c2c75b, "mt76x2_mcu_load_cr" },
	{ 0x497a4216, "mt76x02_sta_add" },
	{ 0x2a923576, "mt76x02_tx_status_data" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x858b6ce2, "mt76x02_edcca_init" },
	{ 0x1af36174, "mt76x02_phy_set_rxpath" },
	{ 0xcaa7b18f, "mt76x02_sta_remove" },
	{ 0x1567ae4f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0xdf8add62, "mt76x02_tx" },
	{ 0x4b494fd5, "__mt76_poll_msec" },
	{ 0xa1e1576e, "mt76x02_init_device" },
	{ 0x723d1a7, "mt76_set_channel" },
	{ 0xc247851, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe499ac35, "mt76x02_phy_set_bw" },
	{ 0x8b073c3d, "mt76x02_sw_scan_complete" },
	{ 0x49747f9e, "mt76_set_tim" },
	{ 0x2995937f, "mt76_register_device" },
	{ 0xa11c9c11, "mt76x02_mac_setaddr" },
	{ 0x901572d5, "mt76x02u_mcu_fw_reset" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x2cfa6061, "mt76u_queues_deinit" },
	{ 0x22688b95, "mt76x02_queue_rx_skb" },
	{ 0x7eaeaa92, "mt76x02_configure_filter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x88c5a02, "mt76x2_configure_tx_delay" },
	{ 0x7df84946, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xa4f806d9, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xae1163d4, "mt76x02_ext_pa_enabled" },
	{ 0xb1af712f, "mt76x02_mac_shared_key_setup" },
	{ 0xce960ec9, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xecdc6d33, "mt76x02_sta_rate_tbl_update" },
	{ 0xc1cb8b0d, "mt76u_resume_rx" },
	{ 0xbe0777e5, "mt76x02_sta_ps" },
	{ 0xa23f7af3, "mt76x2_apply_gain_adj" },
	{ 0x28697053, "mt76_wake_tx_queue" },
	{ 0x721ba354, "mt76x02_mcu_set_radio_state" },
	{ 0xd483672, "mt76x2_mcu_set_channel" },
	{ 0x304d63b6, "mt76x2_reset_wlan" },
	{ 0x7a0729ff, "mt76_write_mac_initvals" },
	{ 0xe8f52f11, "mt76_get_txpower" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0xef0f9bc7, "mt76_release_buffered_frames" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x47b0350d, "mt76x02_set_key" },
	{ 0xec6b05c4, "mt76x02_set_ethtool_fwver" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xede283d, "release_firmware" },
	{ 0xb2c4fb9e, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E89066E16A0E2CA46727D80");
