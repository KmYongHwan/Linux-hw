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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x9b19ea10, "iw_handler_get_thrspy" },
	{ 0x3dcd2310, "iw_handler_set_thrspy" },
	{ 0xdd78daa8, "iw_handler_get_spy" },
	{ 0x60cc62c0, "iw_handler_set_spy" },
	{ 0x752832c, "noop_llseek" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x2581e3be, "remove_proc_subtree" },
	{ 0xac1637ea, "proc_create_data" },
	{ 0xa5558b7d, "proc_create" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x53874969, "wireless_spy_update" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb18156be, "skb_pull" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x9166fada, "strncpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6d1d72a0, "pcmcia_map_mem_page" },
	{ 0x41aeb27c, "pcmcia_request_window" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x754d539c, "strlen" },
	{ 0x7d22237c, "pcmcia_dev_present" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6168380e, "seq_putc" },
	{ 0xc4142837, "seq_printf" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m01A6c0000f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "ED206D0C73D2C411A0C8EE8");
