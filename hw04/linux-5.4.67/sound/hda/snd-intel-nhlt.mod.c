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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4d924f20, "memremap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9caa394e, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB424976BBB62F08E214EA5");
