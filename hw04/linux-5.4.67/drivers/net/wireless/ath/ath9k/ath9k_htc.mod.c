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
	{ 0x4d553332, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbd33d8a9, "ath9k_hw_set_txq_props" },
	{ 0x1e7b2590, "ieee80211_csa_finish" },
	{ 0xa1855271, "ath9k_hw_init" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x8bc997a7, "ath9k_cmn_get_channel" },
	{ 0xe4219826, "ath9k_hw_deinit" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x919dade8, "device_release_driver" },
	{ 0xd7f430cf, "ath9k_hw_set_gpio" },
	{ 0x1f5ad211, "ath9k_cmn_init_crypto" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0xe01373c2, "ath9k_cmn_process_rate" },
	{ 0xf52fb497, "ieee80211_csa_is_complete" },
	{ 0x166ad0b, "ath9k_hw_btcoex_enable" },
	{ 0xeda259d6, "ath9k_hw_wait" },
	{ 0x2c88f95b, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xdb0d6846, "ath9k_hw_stopdmarecv" },
	{ 0x71c7a57c, "ath_key_delete" },
	{ 0x7e4f72fe, "ath9k_cmn_update_txpow" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0x291cc271, "ath9k_hw_gpio_get" },
	{ 0xfcee8a3, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4984453c, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x7c441174, "ath9k_hw_setrxfilter" },
	{ 0x5bd48a2, "ath9k_hw_get_txq_props" },
	{ 0x7752a81, "ath9k_hw_releasetxqueue" },
	{ 0x9c947145, "ath9k_hw_reset_tsf" },
	{ 0xc666e349, "ath9k_cmn_spectral_init_debug" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x967a5e95, "wiphy_rfkill_start_polling" },
	{ 0x314c4157, "ath9k_cmn_reload_chainmask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x639b14d, "ath9k_cmn_spectral_deinit_debug" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8c9cfa4d, "ath9k_cmn_init_channels_rates" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x848b35c9, "ieee80211_tx_status" },
	{ 0x75be6dc2, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7d790ff0, "ath9k_hw_setopmode" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x90fa8307, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x68a98778, "ath9k_hw_resettxqueue" },
	{ 0xc3cd859e, "ath9k_hw_gettsf64" },
	{ 0x608ea4b5, "ath_cmn_process_fft" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xf788f118, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x9bef70f9, "ath9k_hw_set_tsfadjust" },
	{ 0xaf8eea04, "ath9k_cmn_beacon_config_ap" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0xb76fccc7, "ath9k_cmn_debug_stat_rx" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x51018dd2, "ath9k_hw_btcoex_disable" },
	{ 0x47b7209a, "ath9k_hw_getrxfilter" },
	{ 0xed11f8a2, "ath9k_hw_ani_monitor" },
	{ 0x3b54670, "ath_is_mybeacon" },
	{ 0x8dd3e966, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x6e5811cb, "ath9k_cmn_process_rssi" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x2fca6a63, "ath9k_cmn_debug_base_eeprom" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x54fd2ec3, "ath9k_cmn_debug_recv" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x380bf8a8, "wiphy_rfkill_stop_polling" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x359f53ba, "ath9k_hw_write_associd" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x6e39fcff, "ath_reg_notifier_apply" },
	{ 0x92129d68, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc4ce6020, "ath9k_hw_init_btcoex_hw" },
	{ 0xa8baf7a6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xad82e48a, "ath9k_cmn_debug_phy_err" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x71f2025e, "ath9k_hw_beaconq_setup" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xeaf09c61, "ath9k_hw_name" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa3194b8f, "ath9k_cmn_spectral_scan_trigger" },
	{ 0x9ee06c8f, "ath9k_hw_init_global_settings" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x932bc55a, "ath9k_hw_settsf64" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x85fa72cd, "ath9k_hw_beaconinit" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x120dd73c, "ieee80211_get_buffered_bc" },
	{ 0x583a430e, "usb_interrupt_msg" },
	{ 0x66fc449c, "ath9k_hw_gpio_free" },
	{ 0xad5b341, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89b90a12, "ath9k_hw_setrxabort" },
	{ 0x9e1eaace, "ath9k_cmn_beacon_config_sta" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa11eb42f, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfe3d0f7d, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x4edc72b8, "ath9k_hw_phy_disable" },
	{ 0x6bb64cbe, "__ieee80211_get_radio_led_name" },
	{ 0xe374d806, "ieee80211_get_hdrlen_from_skb" },
	{ 0x648b4476, "ath9k_hw_setpower" },
	{ 0x5115db66, "__ieee80211_create_tpt_led_trigger" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x8de43185, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x96d0f5d9, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8cceb747, "ath9k_hw_setmcastfilter" },
	{ 0x1b80b66a, "ieee80211_start_tx_ba_session" },
	{ 0x5a5fe4f5, "ath9k_hw_gpio_request_out" },
	{ 0xa615353d, "ath9k_hw_startpcureceive" },
	{ 0x14942960, "ath9k_hw_setuptxqueue" },
	{ 0x96848186, "scnprintf" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x780979d4, "ath9k_hw_reset" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xc27fb113, "ath9k_cmn_rx_accept" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x697d4bd8, "ath9k_hw_btcoex_init_3wire" },
	{ 0x17966a1b, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x79b03e3a, "ath9k_cmn_debug_modal_eeprom" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x37b4561, "ath9k_hw_reset_calvalid" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xede283d, "release_firmware" },
	{ 0x7e30f9b0, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "17D8FE98AFD007AD59C6C03");
