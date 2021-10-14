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
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x15314fce, "consume_skb" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5534d64, "ioread16" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001969d00001048sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A4103C1DDDB71D63A351AC5");
