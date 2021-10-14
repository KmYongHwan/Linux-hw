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
	{ 0xaad49c42, "param_array_ops" },
	{ 0x69350e79, "hdlc_start_xmit" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x731e3a67, "alloc_hdlcdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x47fe41f7, "hdlc_open" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xf720a60b, "module_put" },
	{ 0xd8d41f08, "hdlc_close" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x1b081bbf, "hdlc_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xc5850110, "printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x15314fce, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xebfcae36, "unregister_hdlc_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v00001619d00000400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00001610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00001612sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BE315FBBE7E8546737DEA2C");
