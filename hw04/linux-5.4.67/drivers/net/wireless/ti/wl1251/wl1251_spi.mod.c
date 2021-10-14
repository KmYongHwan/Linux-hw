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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x39c632da, "wl1251_free_hw" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x85b7373, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xa1e2ce5, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xa99f5f98, "wl1251_alloc_hw" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "mac80211,crc7,wl1251");


MODULE_INFO(srcversion, "30C65F18F1365C8B761DE56");
