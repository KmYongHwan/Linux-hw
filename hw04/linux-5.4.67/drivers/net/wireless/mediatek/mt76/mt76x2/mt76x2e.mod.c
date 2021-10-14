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
	{ 0x5948bd94, "mt76x02_mac_start" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x118d4dfd, "mt76x2_phy_set_txpower" },
	{ 0xa45349b, "mt76x2_phy_set_txpower_regs" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xd1bdff5a, "mt76x2_read_rx_gain" },
	{ 0xd5def79d, "__mt76_poll" },
	{ 0xbc2234e0, "mt76x02_mac_wcid_setup" },
	{ 0xd717c4a0, "mt76x2_get_temp_comp" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x89a4a2e4, "mt76_sw_scan" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xae9dd6c6, "mt76x02_mcu_function_select" },
	{ 0xd8e6521c, "mt76x02_conf_tx" },
	{ 0x9307ab1, "mt76x02_mcu_calibrate" },
	{ 0x2c2e5733, "mt76x02_ampdu_action" },
	{ 0x4109458b, "mt76x02_mcu_cleanup" },
	{ 0x6be3bfaa, "mt76x02_tx_prepare_skb" },
	{ 0x3c7da08a, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8d90634, "mt76x02_dfs_init_params" },
	{ 0x46d9371c, "mt76x02_add_interface" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfd1e586d, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf8150674, "mt76x2_phy_update_channel_gain" },
	{ 0x6cd1d086, "mt76x02_init_agc_gain" },
	{ 0x99315e34, "mt76x02_bss_info_changed" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x9ec1ea3c, "mt76x2_phy_tssi_compensate" },
	{ 0x915ba27d, "mt76x02_mcu_msg_send" },
	{ 0x7b42d85e, "mt76_sta_state" },
	{ 0xfae60bcc, "mt76x02_tx_complete_skb" },
	{ 0x91115d8, "mt76x02_set_rts_threshold" },
	{ 0x70c38cb4, "mt76x2_mcu_init_gain" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xfeaa13c7, "mt76_get_survey" },
	{ 0xfe1d3809, "mt76x02_init_debugfs" },
	{ 0xa4b3e4a1, "mt76x2_init_txpower" },
	{ 0x24c2c75b, "mt76x2_mcu_load_cr" },
	{ 0x31adfc95, "mt76_unregister_device" },
	{ 0x497a4216, "mt76x02_sta_add" },
	{ 0x428ba810, "mt76x2_eeprom_init" },
	{ 0x858b6ce2, "mt76x02_edcca_init" },
	{ 0xcaa7b18f, "mt76x02_sta_remove" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0x7b954a9d, "mt76_mmio_init" },
	{ 0xdf8add62, "mt76x02_tx" },
	{ 0x4b494fd5, "__mt76_poll_msec" },
	{ 0xa1e1576e, "mt76x02_init_device" },
	{ 0x723d1a7, "mt76_set_channel" },
	{ 0xc247851, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0xe499ac35, "mt76x02_phy_set_bw" },
	{ 0x8b073c3d, "mt76x02_sw_scan_complete" },
	{ 0x49747f9e, "mt76_set_tim" },
	{ 0x2995937f, "mt76_register_device" },
	{ 0xa11c9c11, "mt76x02_mac_setaddr" },
	{ 0x7fc25b99, "mt76x02_rx_poll_complete" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x22688b95, "mt76x02_queue_rx_skb" },
	{ 0x201355e4, "mt76_free_device" },
	{ 0x7eaeaa92, "mt76x02_configure_filter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe734046b, "mt76_pci_disable_aspm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x88c5a02, "mt76x2_configure_tx_delay" },
	{ 0x7df84946, "mt76x02_update_channel" },
	{ 0xa8135230, "mt76x02_set_tx_ackto" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4f806d9, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd036f992, "mt76x02_set_coverage_class" },
	{ 0xae1163d4, "mt76x02_ext_pa_enabled" },
	{ 0xb1af712f, "mt76x02_mac_shared_key_setup" },
	{ 0xce960ec9, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xecdc6d33, "mt76x02_sta_rate_tbl_update" },
	{ 0x3cf0caaa, "mt76x02_dma_cleanup" },
	{ 0xbe0777e5, "mt76x02_sta_ps" },
	{ 0xa23f7af3, "mt76x2_apply_gain_adj" },
	{ 0x2adba9e, "mt76_set_stream_caps" },
	{ 0xa4920dd8, "mt76x02e_init_beacon_config" },
	{ 0x28697053, "mt76_wake_tx_queue" },
	{ 0x721ba354, "mt76x02_mcu_set_radio_state" },
	{ 0xfeb8e956, "mt76x02_dma_disable" },
	{ 0xd483672, "mt76x2_mcu_set_channel" },
	{ 0x304d63b6, "mt76x2_reset_wlan" },
	{ 0x7a0729ff, "mt76_write_mac_initvals" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe8f52f11, "mt76_get_txpower" },
	{ 0x71deb539, "request_firmware" },
	{ 0xef0f9bc7, "mt76_release_buffered_frames" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x47b0350d, "mt76x02_set_key" },
	{ 0xe1f5d307, "mt76x02_tx_set_txpwr_auto" },
	{ 0xec6b05c4, "mt76x02_set_ethtool_fwver" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xede283d, "release_firmware" },
	{ 0x9f5baee2, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mac80211");

MODULE_ALIAS("pci:v000014C3d00007662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007602sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "74286626530837B22A3A2B5");
