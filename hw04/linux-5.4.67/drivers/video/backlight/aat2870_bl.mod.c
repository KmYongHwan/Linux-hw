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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x502e851d, "devm_backlight_device_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "02B7380EEF094CADFED029B");
