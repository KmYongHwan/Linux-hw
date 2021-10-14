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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0x85b7373, "spi_sync" },
	{ 0x546e109c, "ieee802154_register_hw" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x428a36f, "ieee802154_alloc_hw" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6c5b8787, "ieee802154_xmit_complete" },
	{ 0xd4ebce8b, "regmap_write_async" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x54d29d1e, "ieee802154_rx_irqsafe" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x25334866, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe1f074c8, "ieee802154_free_hw" },
	{ 0xa19ac719, "ieee802154_unregister_hw" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "DE44C16F09D270DAFE0BB65");
