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
	{ 0x2d3385d3, "system_wq" },
	{ 0x60443957, "mdio45_probe" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x210204b2, "dcb_ieee_setapp" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x86253199, "dcb_ieee_delapp" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xbcb6a783, "pci_sriov_set_totalvfs" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x54b8d2f4, "napi_consume_skb" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x3c5f6a30, "dev_uc_add" },
	{ 0xc3030f67, "napi_hash_del" },
	{ 0x88ed209e, "xdp_rxq_info_reg" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x2e93ccc3, "netdev_set_num_tc" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xd02d0ca2, "__hw_addr_sync_dev" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcfddf021, "xdp_rxq_info_unreg" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x4fe64b7f, "pcie_print_link_status" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x31e86ef3, "netdev_reset_tc" },
	{ 0x3612205, "xsk_set_tx_need_wakeup" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2f24f70f, "netdev_bind_sb_channel_queue" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x9b128b31, "ipv6_find_hdr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x72e6e907, "__page_frag_cache_drain" },
	{ 0x11e18213, "__alloc_pages_nodemask" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x85b01f94, "netdev_walk_all_upper_dev_rcu" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x2460f400, "netdev_unbind_sb_channel" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x3dba792e, "xdp_return_frame_rx_napi" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdb3fcabd, "xsk_umem_discard_addr" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xccbc429c, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c0193e5, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x30aca90c, "dca3_get_tag" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xbccf5cb1, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x77ca08a5, "xsk_reuseq_prepare" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x51bd520f, "dcb_getapp" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xee69d6ad, "netdev_set_sb_channel" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3b1124bb, "dev_addr_del" },
	{ 0xf8716607, "xsk_umem_complete_tx" },
	{ 0x5d41d08f, "netif_set_xps_queue" },
	{ 0xc5850110, "printk" },
	{ 0x75d2ade8, "eth_platform_get_mac_address" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xfe608972, "xsk_clear_rx_need_wakeup" },
	{ 0x5a921311, "strncmp" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xe2dc8d71, "pcie_flr" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x281f689f, "dcb_ieee_getapp_mask" },
	{ 0xc1d2d562, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa233d055, "xdp_return_frame" },
	{ 0xea415960, "dca_add_requester" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x9198c918, "softnet_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe4b30419, "build_skb" },
	{ 0x3fb884fb, "flow_block_cb_setup_simple" },
	{ 0x6b072ff6, "xsk_umem_peek_addr" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc695f119, "eth_get_headlen" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe04c3b72, "netdev_pick_tx" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xa7738e27, "__hw_addr_unsync_dev" },
	{ 0xba922bfa, "dev_addr_add" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3ca5bc8e, "xsk_set_rx_need_wakeup" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7c083e8, "skb_checksum_help" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x7e3ec891, "ndo_dflt_fdb_add" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xcd765caa, "xdp_rxq_info_reg_mem_model" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x66861cc, "xsk_umem_consume_tx" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xdcef301a, "netdev_features_change" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0x217eb852, "xdp_rxq_info_unreg_mem_model" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0x80eba788, "xdp_do_redirect" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x5ba74b07, "xdp_get_umem_from_qid" },
	{ 0x17212a9a, "ptp_clock_index" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x651df6f2, "dev_trans_start" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0xc7bc4c0c, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x21815954, "pci_prepare_to_sleep" },
	{ 0xb1996fdc, "xsk_reuseq_swap" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7a4497db, "kzfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x97d530d5, "xdp_convert_zc_to_xdp_frame" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x59c01517, "ndo_dflt_bridge_getlink" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x23c1786b, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x15314fce, "consume_skb" },
	{ 0xac92d3e3, "dca_remove_requester" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x92650017, "xsk_umem_consume_tx_done" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x44fbddd1, "xsk_umem_uses_need_wakeup" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x50e3fac4, "bpf_prog_put" },
	{ 0xef04b368, "pci_find_ext_capability" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa637b975, "dma_ops" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x6088321e, "dev_get_stats" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xfbe93b51, "devm_mdiobus_free" },
	{ 0x104151fc, "xsk_reuseq_free" },
	{ 0x9d7ee6d9, "secpath_set" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0xd2f40230, "netdev_crit" },
};

MODULE_INFO(depends, "mdio,dca,xfrm_algo");

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001557sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001563sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55D53348F04CAA9520A30A1");
