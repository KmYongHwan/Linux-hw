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
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x9b34997c, "phy_find_first" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x47178151, "pcie_set_readrq" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x5a889429, "phy_stop" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xb8e75250, "phy_start" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011C1d0000ED00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011C1d0000ED01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F5754A53076B285936846E");
