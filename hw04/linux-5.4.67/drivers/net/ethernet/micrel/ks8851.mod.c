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
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x403f2b94, "mii_check_link" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x870b53e9, "eeprom_93cx6_write" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x63d2ff63, "eeprom_93cx6_wren" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x85b7373, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii,eeprom_93cx6");

MODULE_ALIAS("of:N*T*Cmicrel,ks8851");
MODULE_ALIAS("of:N*T*Cmicrel,ks8851C*");

MODULE_INFO(srcversion, "0223736142CB53BD0957DAA");
