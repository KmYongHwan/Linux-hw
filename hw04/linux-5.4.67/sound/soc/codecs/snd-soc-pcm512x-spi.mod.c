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
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x83ae1981, "pcm512x_regmap" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x441ea68f, "pcm512x_pm_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xc1f9bc6, "pcm512x_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf105dcda, "pcm512x_remove" },
};

MODULE_INFO(depends, "snd-soc-pcm512x");

MODULE_ALIAS("spi:pcm5121");
MODULE_ALIAS("spi:pcm5122");
MODULE_ALIAS("spi:pcm5141");
MODULE_ALIAS("spi:pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5121");
MODULE_ALIAS("of:N*T*Cti,pcm5121C*");
MODULE_ALIAS("of:N*T*Cti,pcm5122");
MODULE_ALIAS("of:N*T*Cti,pcm5122C*");
MODULE_ALIAS("of:N*T*Cti,pcm5141");
MODULE_ALIAS("of:N*T*Cti,pcm5141C*");
MODULE_ALIAS("of:N*T*Cti,pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5142C*");

MODULE_INFO(srcversion, "3E582D8F25D0DB751B7EAEC");
