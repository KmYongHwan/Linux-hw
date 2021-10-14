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
	{ 0xb39492f2, "cs4271_probe" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b358d, "cs4271_regmap_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-cs4271");


MODULE_INFO(srcversion, "529E4C3B79DDA9A4FA53159");
