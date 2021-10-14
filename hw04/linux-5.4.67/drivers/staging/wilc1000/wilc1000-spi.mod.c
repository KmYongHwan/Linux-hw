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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbf5cddcf, "wilc_netdev_cleanup" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x85b7373, "spi_sync" },
	{ 0x8019232c, "wilc_cfg80211_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0x3842744, "gpiod_get" },
};

MODULE_INFO(depends, "wilc1000");

MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-spi");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-spiC*");

MODULE_INFO(srcversion, "6AA955B4DCF6F7C6497FFD0");
