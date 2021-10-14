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
	{ 0x3da496b7, "intel_th_driver_unregister" },
	{ 0x83acbbe2, "intel_th_trace_disable" },
	{ 0x6d61262d, "intel_th_driver_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x81e1b462, "intel_th_trace_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x96848186, "scnprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "intel_th");


MODULE_INFO(srcversion, "13079F991F1A5BD0DF289DB");
