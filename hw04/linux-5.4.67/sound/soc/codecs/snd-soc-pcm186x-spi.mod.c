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
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xf20ebc01, "pcm186x_regmap" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x409cbbb8, "pcm186x_probe" },
};

MODULE_INFO(depends, "snd-soc-pcm186x");

MODULE_ALIAS("of:N*T*Cti,pcm1862");
MODULE_ALIAS("of:N*T*Cti,pcm1862C*");
MODULE_ALIAS("of:N*T*Cti,pcm1863");
MODULE_ALIAS("of:N*T*Cti,pcm1863C*");
MODULE_ALIAS("of:N*T*Cti,pcm1864");
MODULE_ALIAS("of:N*T*Cti,pcm1864C*");
MODULE_ALIAS("of:N*T*Cti,pcm1865");
MODULE_ALIAS("of:N*T*Cti,pcm1865C*");
MODULE_ALIAS("spi:pcm1862");
MODULE_ALIAS("spi:pcm1863");
MODULE_ALIAS("spi:pcm1864");
MODULE_ALIAS("spi:pcm1865");

MODULE_INFO(srcversion, "74E400F670FEB64BB5F301C");
