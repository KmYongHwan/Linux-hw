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
	{ 0x7f97c56e, "__iwl_err" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9e2d8ed4, "ieee80211_disable_rssi_reports" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0xf88964e4, "iwl_remove_notification" },
	{ 0x9d96de70, "iwl_cmd_groups_verify_sorted" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xccc9bed2, "ieee80211_request_smps" },
	{ 0x756e2ccb, "iwl_read32" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x11d22370, "iwl_set_bits_mask_prph" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf8d4d7ec, "iwl_opmode_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc12369ec, "ieee80211_resume_disconnect" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdcf29e6f, "ieee80211_scan_completed" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbafc8994, "iwl_wait_notification" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6d0d73fd, "ieee80211_get_tkip_rx_p1k" },
	{ 0x3f41530d, "iwl_trans_send_cmd" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0x848b35c9, "ieee80211_tx_status" },
	{ 0x9e51f087, "__iwl_dbg" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdefbea52, "default_llseek" },
	{ 0xe0eb5838, "iwl_init_notification_wait" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9c8bdd4a, "ieee80211_free_txskb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x3bda550c, "ieee80211_rate_control_register" },
	{ 0xc9d8b99f, "iwl_write_direct32" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb72ade7d, "__tracepoint_iwlwifi_dev_ucode_wrap_event" },
	{ 0xe9740645, "iwl_write32" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x26d3f2c3, "iwl_get_cmd_string" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xeaf295a7, "ieee80211_sta_block_awake" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xeb1dbbbd, "ieee80211_ave_rssi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa8baf7a6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x3914d76, "ieee80211_enable_rssi_reports" },
	{ 0xb543b93b, "iwlwifi_mod_params" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x1ee9c199, "__tracepoint_iwlwifi_dev_ucode_event" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x18ee469d, "__iwl_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe345725f, "ieee80211_get_key_rx_seq" },
	{ 0x7eb42624, "ieee80211_iter_keys" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a54c1a2, "__iwl_warn" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1332e4de, "iwl_abort_notification_waits" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5c52e109, "iwl_opmode_deregister" },
	{ 0x6bb64cbe, "__ieee80211_get_radio_led_name" },
	{ 0x38d88bbc, "ieee80211_rate_control_unregister" },
	{ 0xd1a4581, "ieee80211_restart_hw" },
	{ 0x5115db66, "__ieee80211_create_tpt_led_trigger" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1b80b66a, "ieee80211_start_tx_ba_session" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0xdff55670, "ieee80211_get_tkip_p2k" },
	{ 0x96848186, "scnprintf" },
	{ 0xe75b7e77, "iwl_notification_wait" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x25810ec3, "debugfs_create_symlink" },
	{ 0x20a6a247, "__tracepoint_iwlwifi_dev_ucode_cont_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15314fce, "consume_skb" },
	{ 0xb229b708, "iwl_parse_eeprom_data" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5988395c, "iwl_notification_wait_init" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x562b0ef, "ieee80211_chswitch_done" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xcb53b062, "ieee80211_report_wowlan_wakeup" },
	{ 0x7e30f9b0, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x839b0f4c, "ieee80211_stop_tx_ba_session" },
	{ 0xcce5d700, "iwl_read_eeprom" },
};

MODULE_INFO(depends, "mac80211,iwlwifi,cfg80211");


MODULE_INFO(srcversion, "61CA91A2AD91027C5862E85");
