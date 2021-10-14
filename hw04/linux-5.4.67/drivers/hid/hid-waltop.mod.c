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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v0000172Fp00000032");
MODULE_ALIAS("hid:b0003g*v0000172Fp00000034");
MODULE_ALIAS("hid:b0003g*v0000172Fp00000037");
MODULE_ALIAS("hid:b0003g*v0000172Fp00000038");
MODULE_ALIAS("hid:b0003g*v0000172Fp00000501");
MODULE_ALIAS("hid:b0003g*v0000172Fp00000500");
MODULE_ALIAS("hid:b0003g*v0000172Fp00000502");

MODULE_INFO(srcversion, "F5BB393A23CA03E2DB03CF3");
