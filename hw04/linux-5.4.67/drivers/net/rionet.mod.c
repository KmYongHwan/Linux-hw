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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x46211041, "rio_bus_type" },
	{ 0xb014ea39, "rio_mport_class" },
	{ 0xd98f8549, "class_interface_unregister" },
	{ 0xd10f72dd, "subsys_interface_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xbbcfe683, "subsys_interface_register" },
	{ 0xbc3b6516, "class_interface_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x2d7adfb4, "rio_local_get_device_id" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xfee402dd, "__rio_local_read_config_32" },
	{ 0xf648e6c1, "rio_request_outb_dbell" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x1cbb91c0, "rio_request_outb_mbox" },
	{ 0xf72f14b6, "rio_request_inb_mbox" },
	{ 0xc943a830, "rio_request_inb_dbell" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x2ec61ff3, "rio_release_outb_mbox" },
	{ 0xacbc84e5, "rio_release_inb_mbox" },
	{ 0x959a71a6, "rio_release_inb_dbell" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5792f848, "strlcpy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8297dab8, "rio_mport_send_doorbell" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6fc2d6b, "rio_release_outb_dbell" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("rapidio:v*d*av*ad*");

MODULE_INFO(srcversion, "84CAB2F8B5BB34C847E4C76");
