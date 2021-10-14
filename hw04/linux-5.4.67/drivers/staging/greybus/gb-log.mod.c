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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5f1ce799, "greybus_register_driver" },
	{ 0xc9ac3e5e, "greybus_deregister_driver" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x61ea921a, "gb_connection_disable" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "A12B848CD24725A47C9278D");
