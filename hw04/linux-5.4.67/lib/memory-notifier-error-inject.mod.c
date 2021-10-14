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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xa770832, "register_memory_notifier" },
	{ 0x2d7ef6be, "notifier_err_inject_init" },
	{ 0x69de308f, "notifier_err_inject_dir" },
};

MODULE_INFO(depends, "notifier-error-inject");


MODULE_INFO(srcversion, "C6AD8C215AE511F50D91ADB");
