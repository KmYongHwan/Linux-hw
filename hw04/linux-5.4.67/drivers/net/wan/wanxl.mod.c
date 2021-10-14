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
	{ 0x69350e79, "hdlc_start_xmit" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x731e3a67, "alloc_hdlcdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xebfcae36, "unregister_hdlc_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd8d41f08, "hdlc_close" },
	{ 0x1000e51, "schedule" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47fe41f7, "hdlc_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1b081bbf, "hdlc_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v00001176d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001176d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001176d00000104sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "995C96DB92004758786E5DF");
