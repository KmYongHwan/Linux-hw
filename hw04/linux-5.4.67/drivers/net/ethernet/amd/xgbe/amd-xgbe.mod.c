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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4354562e, "get_phy_device" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x5eb06dce, "phy_attach_direct" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x15d2f64, "genphy_read_status" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa34df50d, "phy_init_hw" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x2e93ccc3, "netdev_set_num_tc" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x927a00cc, "phy_support_asym_pause" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x31e86ef3, "netdev_reset_tc" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xe5121127, "debugfs_rename" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x11e18213, "__alloc_pages_nodemask" },
	{ 0x40298693, "phy_device_register" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x95451c3, "netdev_alert" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x342410f4, "phy_start_aneg" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xccbc429c, "ptp_clock_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c0193e5, "netdev_set_tc_queue" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x5d4c6acf, "phy_device_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xc1d2d562, "ptp_clock_register" },
	{ 0x7073c04f, "phy_10_100_features_array" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0xde0b1fe8, "phy_device_remove" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x66023a3a, "debugfs_create_bool" },
	{ 0x9198c918, "softnet_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x3a7c2ff, "phy_detach" },
	{ 0x803b5d3f, "device_get_dma_attr" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0xfe37ca8, "phy_aneg_done" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x17212a9a, "ptp_clock_index" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x61f67c92, "phy_gbit_features_array" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3fa55769, "__put_page" },
	{ 0xe484e35f, "ioread32" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:AMDI8001:*");
MODULE_ALIAS("pci:v00001022d00001458sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001459sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3621D692B25945BC65FDB59");
