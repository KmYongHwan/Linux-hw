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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3528921c, "sdio_writeb" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbf5cddcf, "wilc_netdev_cleanup" },
	{ 0x83136194, "wilc_handle_isr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xac41e3ee, "chip_wakeup" },
	{ 0x93207d5b, "chip_allow_sleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8019232c, "wilc_cfg80211_init" },
	{ 0x70190149, "host_wakeup_notify" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x91c42bdd, "host_sleep_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa8f6bf5c, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0xd79398b2, "sdio_memcpy_fromio" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0x3842744, "gpiod_get" },
};

MODULE_INFO(depends, "wilc1000");

MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-sdio");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-sdioC*");

MODULE_INFO(srcversion, "5050BC9195347AA58308B75");
