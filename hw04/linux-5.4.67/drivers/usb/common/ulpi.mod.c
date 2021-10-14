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
	{ 0x35db28d0, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf44a972b, "driver_register" },
	{ 0x2ee4e2e0, "set_primary_fwnode" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x785dd9f2, "device_register" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DF23C2B7FE65FB0A38E58F1");
