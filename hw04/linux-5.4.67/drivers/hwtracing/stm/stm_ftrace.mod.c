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
	{ 0x28ce2437, "stm_source_write" },
	{ 0x3cb7e7b4, "stm_source_register_device" },
	{ 0xc5850110, "printk" },
	{ 0x56c7eceb, "stm_source_unregister_device" },
	{ 0xb1dabc1e, "unregister_ftrace_export" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf5d7eb5a, "register_ftrace_export" },
};

MODULE_INFO(depends, "stm_core");


MODULE_INFO(srcversion, "0DB0C6B3D1982D727D5D5C9");
