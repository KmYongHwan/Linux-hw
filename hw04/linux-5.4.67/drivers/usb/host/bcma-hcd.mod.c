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
	{ 0xd8bb6130, "bcma_driver_unregister" },
	{ 0x92d070d, "__bcma_driver_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xbc21107a, "bcma_core_enable" },
	{ 0xeda53b19, "bcma_core_disable" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcma");

MODULE_ALIAS("bcma:m04BFid0819rev*cl*");
MODULE_ALIAS("bcma:m04BFid0504rev*cl*");
MODULE_ALIAS("bcma:m04BFid0505rev*cl*");

MODULE_INFO(srcversion, "959FAAB91FF2F9F28D7A196");
