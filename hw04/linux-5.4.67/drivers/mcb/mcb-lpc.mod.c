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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7af53031, "mcb_bus_add_devices" },
	{ 0x492b7a54, "chameleon_parse_cells" },
	{ 0x35e8a95c, "mcb_alloc_bus" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x34a712e0, "mcb_release_bus" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");

MODULE_ALIAS("dmi*:svn*MEN*:pvr*14SC24*:");
MODULE_ALIAS("dmi*:svn*MEN*:pvr*14SC31*:");

MODULE_INFO(srcversion, "CF13D539220F3BF5B0E91FB");
