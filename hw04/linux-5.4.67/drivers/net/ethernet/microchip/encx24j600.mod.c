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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x629e6e83, "spi_bus_type" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xe8c8c6c2, "regmap_encx24j600_spi_read" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x9e26a2ea, "__kthread_init_worker" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdf786131, "regcache_cache_bypass" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x893ebb24, "devm_regmap_init_encx24j600" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0xcc4fa41a, "regmap_encx24j600_spi_write" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x15314fce, "consume_skb" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x4b22e469, "kthread_queue_work" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x651df6f2, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x5792f848, "strlcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "encx24j600-regmap");

MODULE_ALIAS("spi:encx24j600");

MODULE_INFO(srcversion, "2085124BB765ACE91683636");
