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
	{ 0x10347159, "devlink_port_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x210204b2, "dcb_ieee_setapp" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x846f237, "devlink_port_params_register" },
	{ 0x86253199, "dcb_ieee_delapp" },
	{ 0x15a609d3, "__page_pool_put_page" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xccd77df3, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x234cf416, "devlink_fmsg_string_pair_put" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0xc3030f67, "napi_hash_del" },
	{ 0x88ed209e, "xdp_rxq_info_reg" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xdc6a79f1, "page_pool_unmap_page" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x2e93ccc3, "netdev_set_num_tc" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5b6ed908, "metadata_dst_alloc" },
	{ 0x90236277, "tcp_gro_complete" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd9801fec, "page_pool_alloc_pages" },
	{ 0xcfddf021, "xdp_rxq_info_unreg" },
	{ 0x7fd93230, "flow_rule_match_vlan" },
	{ 0x4fe64b7f, "pcie_print_link_status" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x61657774, "bpf_prog_add" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd5b0b7a7, "flow_rule_match_enc_ports" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd8415bdc, "devlink_alloc" },
	{ 0x850bb6db, "devlink_health_reporter_destroy" },
	{ 0x35eb7109, "devlink_params_register" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x31e86ef3, "netdev_reset_tc" },
	{ 0x70ebd226, "rps_may_expire_flow" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x3dba792e, "xdp_return_frame_rx_napi" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c0193e5, "netdev_set_tc_queue" },
	{ 0x43f3f761, "flow_rule_match_ipv6_addrs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x74e1adb5, "flow_rule_match_ports" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x2ea11402, "page_pool_create" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x5c160d82, "devlink_params_publish" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0xe2dc8d71, "pcie_flr" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf04187ce, "dev_close" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xacbb0f86, "devlink_port_params_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa233d055, "xdp_return_frame" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x9198c918, "softnet_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x85a04ea2, "devlink_port_unregister" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe4b30419, "build_skb" },
	{ 0x9dd6fef0, "flow_rule_match_basic" },
	{ 0x3fb884fb, "flow_block_cb_setup_simple" },
	{ 0x8380220d, "xdp_rxq_info_is_reg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc695f119, "eth_get_headlen" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xb6d20a7c, "flow_rule_match_enc_ipv4_addrs" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x7f52071a, "net_dim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe40bb23e, "devlink_health_reporter_priv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x188d7754, "flow_rule_match_icmp" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xcd765caa, "xdp_rxq_info_reg_mem_model" },
	{ 0x85021d66, "netdev_port_same_parent_id" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x45b1452a, "flow_rule_match_ipv4_addrs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0xd40c4eda, "devlink_free" },
	{ 0x80eba788, "xdp_do_redirect" },
	{ 0xa809dd10, "page_pool_destroy" },
	{ 0x2075ed1, "devlink_register" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x93edef07, "devlink_health_report" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x5d8789ab, "devlink_port_attrs_set" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0x4d225a4, "flow_rule_match_eth_addrs" },
	{ 0xc7bc4c0c, "pci_num_vf" },
	{ 0x11e41db2, "devlink_params_unregister" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xdc70c7d1, "devlink_health_reporter_create" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x59c01517, "ndo_dflt_bridge_getlink" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0x893abbdd, "devlink_fmsg_u32_pair_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x23c1786b, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x33a1ba14, "devlink_unregister" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0x50e3fac4, "bpf_prog_put" },
	{ 0xef04b368, "pci_find_ext_capability" },
	{ 0xede283d, "release_firmware" },
	{ 0x8a848d3b, "flow_rule_match_enc_keyid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0xaed0008d, "devlink_port_type_eth_set" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00001604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F74D8884C97F5215159757");
