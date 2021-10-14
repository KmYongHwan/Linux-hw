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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E28511EFD7277C6CA0ADEC1");
