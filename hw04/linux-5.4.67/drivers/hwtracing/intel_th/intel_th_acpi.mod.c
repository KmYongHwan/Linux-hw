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
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd3291dc6, "intel_th_alloc" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdade49b2, "intel_th_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9caa394e, "is_acpi_device_node" },
};

MODULE_INFO(depends, "intel_th");

MODULE_ALIAS("acpi*:INTC1000:*");
MODULE_ALIAS("acpi*:INTC1001:*");

MODULE_INFO(srcversion, "7D252CB4AEEE6B06BDBD5D8");
