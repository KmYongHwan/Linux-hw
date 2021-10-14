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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x762c9c79, "phy_ethtool_nway_reset" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xb8e75250, "phy_start" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0x927a00cc, "phy_support_asym_pause" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x5a889429, "phy_stop" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001055d0000E420sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "63E0F0F26AD6F1F2A4FAB10");
