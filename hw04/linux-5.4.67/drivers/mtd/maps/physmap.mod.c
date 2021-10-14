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
	{ 0xade67a19, "simple_map_init" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xcb81dd8d, "devm_gpiod_get_array_optional" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf0d1a95, "map_destroy" },
	{ 0x886271e5, "do_map_probe" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf1d3380e, "mtd_concat_destroy" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x81279a8a, "mtd_device_unregister" },
	{ 0xc1bf2cb6, "mtd_concat_create" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "map_funcs,chipreg,mtd");


MODULE_INFO(srcversion, "C71D088BE0579289D90978A");
