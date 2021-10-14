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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c85a791, "device_get_mac_address" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xf04187ce, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5850110, "printk" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x85b7373, "spi_sync" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "AA36A830038CB4188292244");
