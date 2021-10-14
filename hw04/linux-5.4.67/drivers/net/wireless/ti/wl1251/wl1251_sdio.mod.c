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
	{ 0x3528921c, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x39c632da, "wl1251_free_hw" },
	{ 0xcee21195, "sdio_writeb_readb" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x13243d4b, "wl1251_get_platform_data" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xa1e2ce5, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa8f6bf5c, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0xd79398b2, "sdio_memcpy_fromio" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x4a6704bc, "devm_gpio_request" },
	{ 0xa99f5f98, "wl1251_alloc_hw" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3dcfb60, "sdio_release_host" },
};

MODULE_INFO(depends, "mac80211,wl1251");

MODULE_ALIAS("sdio:c*v0097d9066*");

MODULE_INFO(srcversion, "11E49F5EBA8A10C2D3D8D8C");
