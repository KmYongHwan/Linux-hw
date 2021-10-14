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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe68b2f71, "__dma_request_channel" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x318de333, "dma_release_channel" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc5850110, "printk" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf10de535, "ioread8" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F566A9AFC6A515F26FBC47E");
