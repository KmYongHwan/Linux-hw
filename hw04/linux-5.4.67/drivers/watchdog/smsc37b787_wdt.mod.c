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
	{ 0xc373a5d1, "no_llseek" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x47fda759, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9415ca79, "__module_get" },
	{ 0xe4f5a219, "stream_open" },
	{ 0xc5850110, "printk" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0EBB852549FC425F2D889DA");
