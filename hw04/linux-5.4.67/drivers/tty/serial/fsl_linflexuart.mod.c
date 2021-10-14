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
	{ 0xe00365c5, "uart_unregister_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x9f6dd27d, "uart_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb90692f4, "uart_remove_one_port" },
	{ 0x817c6e33, "uart_suspend_port" },
	{ 0xf84fbc19, "uart_resume_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,s32v234-linflexuart");
MODULE_ALIAS("of:N*T*Cfsl,s32v234-linflexuartC*");

MODULE_INFO(srcversion, "32B04C5E65A5B6046748FB2");
