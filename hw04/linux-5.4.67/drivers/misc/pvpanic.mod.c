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
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xc52f0388, "acpi_dev_resource_memory" },
	{ 0xfa0a8896, "acpi_dev_resource_io" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x668baa1f, "acpi_bus_get_status" },
	{ 0xedc03953, "iounmap" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x848d372e, "iowrite8" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:QEMU0001:*");

MODULE_INFO(srcversion, "B09FA23F743253DC855BC27");
