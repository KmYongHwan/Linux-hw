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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0xc5850110, "printk" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xc1d2d562, "ptp_clock_register" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x75d2ade8, "eth_platform_get_mac_address" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xa916b694, "strnlen" },
	{ 0x8d4d8561, "pci_get_slot" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xef56df73, "pci_read_vpd" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xe4b30419, "build_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2c5e4e3e, "phy_set_asym_pause" },
	{ 0xb3fff9d2, "phy_validate_pause" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x4ad8a919, "pcie_capability_write_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x21db6f7e, "pci_device_is_present" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0xb0c22846, "__skb_gso_segment" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x12950e37, "skb_copy" },
	{ 0x9198c918, "softnet_data" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0x7c083e8, "skb_checksum_help" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15314fce, "consume_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xede283d, "release_firmware" },
	{ 0xccbc429c, "ptp_clock_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0x927a00cc, "phy_support_asym_pause" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x4971717c, "phy_ethtool_ksettings_set" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xa9263e2b, "pcie_capability_clear_and_set_word" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xba312d7b, "current_task" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0x99e26883, "phy_ethtool_ksettings_get" },
	{ 0x5a889429, "phy_stop" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xb8e75250, "phy_start" },
	{ 0x342410f4, "phy_start_aneg" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5792f848, "strlcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x17212a9a, "ptp_clock_index" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0xf04187ce, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0xfb578fc5, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv000017AAsd00003056bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000601bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000612bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001657sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd000011A2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC0F3C21B2F5BC4435374D7");
