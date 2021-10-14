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
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8f9fc942, "netdev_emerg" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001039d00000190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000191sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "410B592D8FDA479DCB27BE4");
