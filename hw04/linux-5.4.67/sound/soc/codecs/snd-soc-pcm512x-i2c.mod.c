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
	{ 0x83ae1981, "pcm512x_regmap" },
	{ 0x441ea68f, "pcm512x_pm_ops" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xc1f9bc6, "pcm512x_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf105dcda, "pcm512x_remove" },
};

MODULE_INFO(depends, "snd-soc-pcm512x");

MODULE_ALIAS("acpi*:104C5121:*");
MODULE_ALIAS("acpi*:104C5122:*");
MODULE_ALIAS("acpi*:104C5141:*");
MODULE_ALIAS("acpi*:104C5142:*");
MODULE_ALIAS("i2c:pcm5121");
MODULE_ALIAS("i2c:pcm5122");
MODULE_ALIAS("i2c:pcm5141");
MODULE_ALIAS("i2c:pcm5142");

MODULE_INFO(srcversion, "02FF8F1552AAC72E70E7134");
