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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xfb578fc5, "memset" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xede283d, "release_firmware" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x71deb539, "request_firmware" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc5850110, "printk" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x1000e51, "schedule" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xba312d7b, "current_task" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5792f848, "strlcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000035sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BF3B87177FAC4C2887EDB5B");
