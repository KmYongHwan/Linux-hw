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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x830c21b3, "phylink_connect_phy" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x15a609d3, "__page_pool_put_page" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x68dc92a4, "phylink_of_phy_connect" },
	{ 0x56be148a, "phylink_mii_ioctl" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa071f2c6, "single_release" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdc6a79f1, "page_pool_unmap_page" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdccfdecd, "phylink_ethtool_ksettings_get" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd9801fec, "page_pool_alloc_pages" },
	{ 0x12135396, "phylink_mac_change" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x825c7340, "phylink_get_eee_err" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe5121127, "debugfs_rename" },
	{ 0xb18f9eec, "phylink_ethtool_ksettings_set" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xcec6343e, "seq_read" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x95451c3, "netdev_alert" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xccbc429c, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x74e1adb5, "flow_rule_match_ports" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2ea11402, "page_pool_create" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x57727285, "phylink_ethtool_set_eee" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf04187ce, "dev_close" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xc1d2d562, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0x818ea7be, "pinctrl_pm_select_sleep_state" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x638f26ad, "dev_open" },
	{ 0x9dd6fef0, "flow_rule_match_basic" },
	{ 0x3fb884fb, "flow_block_cb_setup_simple" },
	{ 0x79093209, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x85ef0bf5, "phy_init_eee" },
	{ 0xe04c3b72, "netdev_pick_tx" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x2c8e28ee, "phylink_ethtool_get_eee" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x6fa426d2, "phylink_ethtool_nway_reset" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xef0f8607, "pinctrl_pm_select_default_state" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xcfac4241, "phylink_create" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x45b1452a, "flow_rule_match_ipv4_addrs" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xa809dd10, "page_pool_destroy" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0x17212a9a, "ptp_clock_index" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "phylink");


MODULE_INFO(srcversion, "5EEDF015CD83B21B713ECE2");
