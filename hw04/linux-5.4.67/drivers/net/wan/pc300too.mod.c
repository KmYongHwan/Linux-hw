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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x47fe41f7, "hdlc_open" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x731e3a67, "alloc_hdlcdev" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xd8d41f08, "hdlc_close" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1b081bbf, "hdlc_ioctl" },
	{ 0x15314fce, "consume_skb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xebfcae36, "unregister_hdlc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v0000120Ed00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "03F99748EA6440CD28D86FE");
