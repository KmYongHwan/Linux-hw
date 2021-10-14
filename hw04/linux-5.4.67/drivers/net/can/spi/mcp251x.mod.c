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
	{ 0x601aeedc, "can_change_mtu" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x127bd30c, "open_candev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8eb937e0, "close_candev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4013106f, "unregister_candev" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf2acf242, "free_candev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8b097b63, "devm_clk_get_optional" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x164e2a63, "can_free_echo_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "E1984423394CD655CE63C8A");
