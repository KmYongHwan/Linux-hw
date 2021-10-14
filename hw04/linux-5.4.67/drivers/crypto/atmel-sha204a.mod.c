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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe89be789, "atmel_i2c_enqueue" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf7ccdb5e, "atmel_i2c_send_receive" },
	{ 0xf283e995, "atmel_i2c_init_random_cmd" },
	{ 0x793ad815, "devm_hwrng_register" },
	{ 0x7c66b7fa, "atmel_i2c_probe" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atmel-i2c");

MODULE_ALIAS("i2c:atsha204a");
MODULE_ALIAS("of:N*T*Catmel,atsha204a");
MODULE_ALIAS("of:N*T*Catmel,atsha204aC*");

MODULE_INFO(srcversion, "26103FA46C7BC52B46D4B34");
