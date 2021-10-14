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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5a889429, "phy_stop" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x54b8d2f4, "napi_consume_skb" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xbcab0ef6, "phy_resume" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb5400524, "phy_read_mmd" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x762c9c79, "phy_ethtool_nway_reset" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0x8964bb9f, "phy_write_paged" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x927a00cc, "phy_support_asym_pause" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa9263e2b, "pcie_capability_clear_and_set_word" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x11e18213, "__alloc_pages_nodemask" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xbeb032cb, "phy_ethtool_get_eee" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x73a532d5, "phy_mac_interrupt" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x8febebf4, "phy_modify" },
	{ 0xb8e75250, "phy_start" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x75d2ade8, "eth_platform_get_mac_address" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xcc0c1228, "phy_speed_down" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfbe0a63a, "phy_modify_paged" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xce42b30d, "phy_suspend" },
	{ 0x9198c918, "softnet_data" },
	{ 0x3d6886ae, "pci_request_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x79093209, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xc38973ed, "pci_disable_link_state" },
	{ 0x618911fc, "numa_node" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xfdbaf8c3, "phy_connect_direct" },
	{ 0x4ddc03f7, "pci_free_irq" },
	{ 0x8530ff42, "phy_speed_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7debb3cd, "pm_schedule_suspend" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xcca6ed07, "genphy_soft_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xab10236a, "phy_read_paged" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37d01767, "phy_write_mmd" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x5a214cee, "pci_dev_run_wake" },
	{ 0x104220e0, "phy_ethtool_set_eee" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x15af7f4, "system_state" },
	{ 0x71deb539, "request_firmware" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0x1cd74ee7, "pcim_set_mwi" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xede283d, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa637b975, "dma_ops" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xcb3282b, "phy_set_max_speed" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4540EA91E81149C9F5B9237");
